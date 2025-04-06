// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Project_Capstone/Public/Player/PlayerCharacterInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerCharacterInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
PROJECT_CAPSTONE_API UClass* Z_Construct_UClass_UPlayerCharacterInterface();
PROJECT_CAPSTONE_API UClass* Z_Construct_UClass_UPlayerCharacterInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_Project_Capstone();
// End Cross Module References

// Begin Interface UPlayerCharacterInterface
void UPlayerCharacterInterface::StaticRegisterNativesUPlayerCharacterInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlayerCharacterInterface);
UClass* Z_Construct_UClass_UPlayerCharacterInterface_NoRegister()
{
	return UPlayerCharacterInterface::StaticClass();
}
struct Z_Construct_UClass_UPlayerCharacterInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/PlayerCharacterInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IPlayerCharacterInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPlayerCharacterInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_Project_Capstone,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerCharacterInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlayerCharacterInterface_Statics::ClassParams = {
	&UPlayerCharacterInterface::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerCharacterInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UPlayerCharacterInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPlayerCharacterInterface()
{
	if (!Z_Registration_Info_UClass_UPlayerCharacterInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlayerCharacterInterface.OuterSingleton, Z_Construct_UClass_UPlayerCharacterInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPlayerCharacterInterface.OuterSingleton;
}
template<> PROJECT_CAPSTONE_API UClass* StaticClass<UPlayerCharacterInterface>()
{
	return UPlayerCharacterInterface::StaticClass();
}
UPlayerCharacterInterface::UPlayerCharacterInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerCharacterInterface);
UPlayerCharacterInterface::~UPlayerCharacterInterface() {}
// End Interface UPlayerCharacterInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_2025_Unreal_Capstone_Capstone_unreal_Project_Capstone_Source_Project_Capstone_Public_Player_PlayerCharacterInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPlayerCharacterInterface, UPlayerCharacterInterface::StaticClass, TEXT("UPlayerCharacterInterface"), &Z_Registration_Info_UClass_UPlayerCharacterInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayerCharacterInterface), 4014363163U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_2025_Unreal_Capstone_Capstone_unreal_Project_Capstone_Source_Project_Capstone_Public_Player_PlayerCharacterInterface_h_345558558(TEXT("/Script/Project_Capstone"),
	Z_CompiledInDeferFile_FID_2025_Unreal_Capstone_Capstone_unreal_Project_Capstone_Source_Project_Capstone_Public_Player_PlayerCharacterInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_2025_Unreal_Capstone_Capstone_unreal_Project_Capstone_Source_Project_Capstone_Public_Player_PlayerCharacterInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
