// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerCharacter/PlayerCharacter.h"

#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "TextureCompiler.h"

// Sets default values
APlayerCharacter::APlayerCharacter() :
	DefaultTurnRate(35.f),
	DefaultLookUpRate(35.f),
	WalkSpeed(250.0f),
	RunSpeed(600.0f)
{
	SpringArmComponent = CreateDefaultSubobject<USpringArmComponent>(TEXT("Spring Arm"));
	SpringArmComponent->SetupAttachment(RootComponent);
	SpringArmComponent->TargetArmLength = 300.f;
	SpringArmComponent->bUsePawnControlRotation = true;

	FollowCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera Component"));
	FollowCameraComponent->SetupAttachment(SpringArmComponent, USpringArmComponent::SocketName);
	FollowCameraComponent->bUsePawnControlRotation = false;

	// SetUp pitch yaw roll
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = true;
	bUseControllerRotationRoll = false;

	// Configure character movement
	// Zero pitch and roll only ratate in yaw direction
	GetCharacterMovement()->bOrientRotationToMovement = true;
	GetCharacterMovement()->RotationRate = FRotator(0.f, 540.f, 0.f);

	// Jump
	GetCharacterMovement()->JumpZVelocity = 500.f;
	GetCharacterMovement()->AirControl = 0.1f;
}

// Called when the game starts or when spawned
void APlayerCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Move forward and backward
void APlayerCharacter::MoveForward(float Value)
{
	if ((Controller != nullptr) && (Value != 0.f))
	{
		const FRotator Rotation{ Controller->GetControlRotation() };

		const FRotator YawRotation{ 0, Rotation.Yaw, 0 };

		const FVector Direction{ FRotationMatrix{YawRotation}.GetUnitAxis(EAxis::X) };

		AddMovementInput(Direction, Value);
	}
}

// Move left and right
void APlayerCharacter::MoveRight(float Value)
{
	if ((Controller != nullptr) && (Value != 0.f))
	{
		const FRotator Rotation{ Controller->GetControlRotation() };

		const FRotator YawRotation{ 0, Rotation.Yaw, 0 };

		const FVector Direction{ FRotationMatrix{YawRotation}.GetUnitAxis(EAxis::Y) };

		AddMovementInput(Direction, Value);
	}
}

void APlayerCharacter::TurnRate(float Rate)
{
	// Turning degrees per delta seconds
	AddControllerYawInput(Rate * DefaultTurnRate * GetWorld()->GetDeltaSeconds());
}

void APlayerCharacter::LookUpRate(float Rate)
{
	// LookUp rate degrees per delta seconds
	AddControllerPitchInput(Rate * DefaultLookUpRate * GetWorld()->GetDeltaSeconds());
}

void APlayerCharacter::Running()
{
	if (GetCharacterMovement()->GetCurrentAcceleration().Size() > 0.0f)
	{
		GetCharacterMovement()->MaxWalkSpeed = RunSpeed;
	}
}

void APlayerCharacter::StopRunning()
{
	GetCharacterMovement()->MaxWalkSpeed = WalkSpeed; 
}

void APlayerCharacter::Recall()
{
	PlayCustomAnimMontage(RecallMontage, FName("Recall"));
}

void APlayerCharacter::PlayCustomAnimMontage(UAnimMontage* MontageToPlay, FName SectionName)
{
	UAnimInstance* AnimInstance = GetMesh()->GetAnimInstance();
	if (AnimInstance && MontageToPlay)
	{
		if (!AnimInstance->Montage_IsPlaying(MontageToPlay))
		{
			GetCharacterMovement()->DisableMovement();

			float const SectionIndex = MontageToPlay->GetSectionIndex(SectionName);
			float const SectionLength = MontageToPlay->GetSectionLength(SectionIndex);

			AnimInstance->Montage_Play(MontageToPlay);
			AnimInstance->Montage_JumpToSection(SectionName);

			GetWorldTimerManager().SetTimer(TimerMovementWalking, this, &APlayerCharacter::EnableWalk, SectionLength);
		}
	}
}

void APlayerCharacter::EnableWalk()
{
	GetCharacterMovement()->SetMovementMode(MOVE_Walking);
}

void APlayerCharacter::MainAttack()
{
	PlayAnimMontage(MainAttackMontage, FName("MainAttack"));
}

// Called to bind functionality to input
void APlayerCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	// make sure component is valid
	check(PlayerInputComponent);

	// player movement
	PlayerInputComponent->BindAxis("MoveForward", this, &APlayerCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &APlayerCharacter::MoveRight);
	PlayerInputComponent->BindAxis("TurnRate", this, &APlayerCharacter::TurnRate);
	PlayerInputComponent->BindAxis("LookUpRate", this, &APlayerCharacter::LookUpRate);

	PlayerInputComponent->BindAxis("Turn", this, &APawn::AddControllerYawInput);
	PlayerInputComponent->BindAxis("LookUp", this, &APawn::AddControllerPitchInput);

	// Jump
	PlayerInputComponent->BindAction("Jumping", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Jumping", IE_Released, this, &ACharacter::StopJumping);

	// Running
	PlayerInputComponent->BindAction("Running", IE_Pressed, this, &APlayerCharacter::Running);
	PlayerInputComponent->BindAction("Running", IE_Released, this, &APlayerCharacter::StopRunning);

	// Combat abilities
	PlayerInputComponent->BindAction("Recall", IE_Pressed, this, &APlayerCharacter::Recall);
	PlayerInputComponent->BindAction("MainAttack", IE_Pressed, this, &APlayerCharacter::MainAttack);
}

