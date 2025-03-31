// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Project_Capstone/Project_CapstoneGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProject_CapstoneGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
PROJECT_CAPSTONE_API UClass* Z_Construct_UClass_AProject_CapstoneGameMode();
PROJECT_CAPSTONE_API UClass* Z_Construct_UClass_AProject_CapstoneGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_Project_Capstone();
// End Cross Module References

// Begin Class AProject_CapstoneGameMode
void AProject_CapstoneGameMode::StaticRegisterNativesAProject_CapstoneGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AProject_CapstoneGameMode);
UClass* Z_Construct_UClass_AProject_CapstoneGameMode_NoRegister()
{
	return AProject_CapstoneGameMode::StaticClass();
}
struct Z_Construct_UClass_AProject_CapstoneGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Project_CapstoneGameMode.h" },
		{ "ModuleRelativePath", "Project_CapstoneGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProject_CapstoneGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AProject_CapstoneGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Project_Capstone,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AProject_CapstoneGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AProject_CapstoneGameMode_Statics::ClassParams = {
	&AProject_CapstoneGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AProject_CapstoneGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AProject_CapstoneGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AProject_CapstoneGameMode()
{
	if (!Z_Registration_Info_UClass_AProject_CapstoneGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AProject_CapstoneGameMode.OuterSingleton, Z_Construct_UClass_AProject_CapstoneGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AProject_CapstoneGameMode.OuterSingleton;
}
template<> PROJECT_CAPSTONE_API UClass* StaticClass<AProject_CapstoneGameMode>()
{
	return AProject_CapstoneGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AProject_CapstoneGameMode);
AProject_CapstoneGameMode::~AProject_CapstoneGameMode() {}
// End Class AProject_CapstoneGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealCapstone_Capstone_unreal_Project_Capstone_Source_Project_Capstone_Project_CapstoneGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AProject_CapstoneGameMode, AProject_CapstoneGameMode::StaticClass, TEXT("AProject_CapstoneGameMode"), &Z_Registration_Info_UClass_AProject_CapstoneGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AProject_CapstoneGameMode), 319850297U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealCapstone_Capstone_unreal_Project_Capstone_Source_Project_Capstone_Project_CapstoneGameMode_h_2301600163(TEXT("/Script/Project_Capstone"),
	Z_CompiledInDeferFile_FID_UnrealCapstone_Capstone_unreal_Project_Capstone_Source_Project_Capstone_Project_CapstoneGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealCapstone_Capstone_unreal_Project_Capstone_Source_Project_Capstone_Project_CapstoneGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
