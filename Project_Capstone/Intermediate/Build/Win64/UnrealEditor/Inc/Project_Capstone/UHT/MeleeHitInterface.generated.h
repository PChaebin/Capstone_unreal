// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Enmey/MeleeHitInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FHitResult;
#ifdef PROJECT_CAPSTONE_MeleeHitInterface_generated_h
#error "MeleeHitInterface.generated.h already included, missing '#pragma once' in MeleeHitInterface.h"
#endif
#define PROJECT_CAPSTONE_MeleeHitInterface_generated_h

#define FID_2025_Unreal_Capstone_Capstone_unreal_Project_Capstone_Source_Project_Capstone_Public_Enmey_MeleeHitInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void MeleeHit_Implementation(FHitResult HitResult) {}; \
	DECLARE_FUNCTION(execMeleeHit);


#define FID_2025_Unreal_Capstone_Capstone_unreal_Project_Capstone_Source_Project_Capstone_Public_Enmey_MeleeHitInterface_h_13_CALLBACK_WRAPPERS
#define FID_2025_Unreal_Capstone_Capstone_unreal_Project_Capstone_Source_Project_Capstone_Public_Enmey_MeleeHitInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PROJECT_CAPSTONE_API UMeleeHitInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMeleeHitInterface(UMeleeHitInterface&&); \
	UMeleeHitInterface(const UMeleeHitInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PROJECT_CAPSTONE_API, UMeleeHitInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMeleeHitInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMeleeHitInterface) \
	PROJECT_CAPSTONE_API virtual ~UMeleeHitInterface();


#define FID_2025_Unreal_Capstone_Capstone_unreal_Project_Capstone_Source_Project_Capstone_Public_Enmey_MeleeHitInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUMeleeHitInterface(); \
	friend struct Z_Construct_UClass_UMeleeHitInterface_Statics; \
public: \
	DECLARE_CLASS(UMeleeHitInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Project_Capstone"), PROJECT_CAPSTONE_API) \
	DECLARE_SERIALIZER(UMeleeHitInterface)


#define FID_2025_Unreal_Capstone_Capstone_unreal_Project_Capstone_Source_Project_Capstone_Public_Enmey_MeleeHitInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_2025_Unreal_Capstone_Capstone_unreal_Project_Capstone_Source_Project_Capstone_Public_Enmey_MeleeHitInterface_h_13_GENERATED_UINTERFACE_BODY() \
	FID_2025_Unreal_Capstone_Capstone_unreal_Project_Capstone_Source_Project_Capstone_Public_Enmey_MeleeHitInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_2025_Unreal_Capstone_Capstone_unreal_Project_Capstone_Source_Project_Capstone_Public_Enmey_MeleeHitInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IMeleeHitInterface() {} \
public: \
	typedef UMeleeHitInterface UClassType; \
	typedef IMeleeHitInterface ThisClass; \
	static void Execute_MeleeHit(UObject* O, FHitResult HitResult); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_2025_Unreal_Capstone_Capstone_unreal_Project_Capstone_Source_Project_Capstone_Public_Enmey_MeleeHitInterface_h_10_PROLOG
#define FID_2025_Unreal_Capstone_Capstone_unreal_Project_Capstone_Source_Project_Capstone_Public_Enmey_MeleeHitInterface_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_2025_Unreal_Capstone_Capstone_unreal_Project_Capstone_Source_Project_Capstone_Public_Enmey_MeleeHitInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_2025_Unreal_Capstone_Capstone_unreal_Project_Capstone_Source_Project_Capstone_Public_Enmey_MeleeHitInterface_h_13_CALLBACK_WRAPPERS \
	FID_2025_Unreal_Capstone_Capstone_unreal_Project_Capstone_Source_Project_Capstone_Public_Enmey_MeleeHitInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECT_CAPSTONE_API UClass* StaticClass<class UMeleeHitInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_2025_Unreal_Capstone_Capstone_unreal_Project_Capstone_Source_Project_Capstone_Public_Enmey_MeleeHitInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
