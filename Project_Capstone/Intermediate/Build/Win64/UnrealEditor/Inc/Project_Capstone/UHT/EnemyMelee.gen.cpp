// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Project_Capstone/Public/Enmey/EnemyMelee.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemyMelee() {}

// Begin Cross Module References
PROJECT_CAPSTONE_API UClass* Z_Construct_UClass_AEnemy();
PROJECT_CAPSTONE_API UClass* Z_Construct_UClass_AEnemyMelee();
PROJECT_CAPSTONE_API UClass* Z_Construct_UClass_AEnemyMelee_NoRegister();
UPackage* Z_Construct_UPackage__Script_Project_Capstone();
// End Cross Module References

// Begin Class AEnemyMelee
void AEnemyMelee::StaticRegisterNativesAEnemyMelee()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEnemyMelee);
UClass* Z_Construct_UClass_AEnemyMelee_NoRegister()
{
	return AEnemyMelee::StaticClass();
}
struct Z_Construct_UClass_AEnemyMelee_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Enmey/EnemyMelee.h" },
		{ "ModuleRelativePath", "Public/Enmey/EnemyMelee.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemyMelee>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AEnemyMelee_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AEnemy,
	(UObject* (*)())Z_Construct_UPackage__Script_Project_Capstone,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyMelee_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AEnemyMelee_Statics::ClassParams = {
	&AEnemyMelee::StaticClass,
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
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyMelee_Statics::Class_MetaDataParams), Z_Construct_UClass_AEnemyMelee_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AEnemyMelee()
{
	if (!Z_Registration_Info_UClass_AEnemyMelee.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEnemyMelee.OuterSingleton, Z_Construct_UClass_AEnemyMelee_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AEnemyMelee.OuterSingleton;
}
template<> PROJECT_CAPSTONE_API UClass* StaticClass<AEnemyMelee>()
{
	return AEnemyMelee::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemyMelee);
AEnemyMelee::~AEnemyMelee() {}
// End Class AEnemyMelee

// Begin Registration
struct Z_CompiledInDeferFile_FID_2025_Unreal_Capstone_Capstone_unreal_Project_Capstone_Source_Project_Capstone_Public_Enmey_EnemyMelee_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AEnemyMelee, AEnemyMelee::StaticClass, TEXT("AEnemyMelee"), &Z_Registration_Info_UClass_AEnemyMelee, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEnemyMelee), 357774082U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_2025_Unreal_Capstone_Capstone_unreal_Project_Capstone_Source_Project_Capstone_Public_Enmey_EnemyMelee_h_3833588369(TEXT("/Script/Project_Capstone"),
	Z_CompiledInDeferFile_FID_2025_Unreal_Capstone_Capstone_unreal_Project_Capstone_Source_Project_Capstone_Public_Enmey_EnemyMelee_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_2025_Unreal_Capstone_Capstone_unreal_Project_Capstone_Source_Project_Capstone_Public_Enmey_EnemyMelee_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
