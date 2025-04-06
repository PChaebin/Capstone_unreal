// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Project_Capstone/Public/Enmey/MeleeHitInterface.h"
#include "Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeleeHitInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
PROJECT_CAPSTONE_API UClass* Z_Construct_UClass_UMeleeHitInterface();
PROJECT_CAPSTONE_API UClass* Z_Construct_UClass_UMeleeHitInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_Project_Capstone();
// End Cross Module References

// Begin Interface UMeleeHitInterface Function MeleeHit
struct MeleeHitInterface_eventMeleeHit_Parms
{
	FHitResult HitResult;
};
void IMeleeHitInterface::MeleeHit(FHitResult HitResult)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_MeleeHit instead.");
}
static FName NAME_UMeleeHitInterface_MeleeHit = FName(TEXT("MeleeHit"));
void IMeleeHitInterface::Execute_MeleeHit(UObject* O, FHitResult HitResult)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UMeleeHitInterface::StaticClass()));
	MeleeHitInterface_eventMeleeHit_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UMeleeHitInterface_MeleeHit);
	if (Func)
	{
		Parms.HitResult=HitResult;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IMeleeHitInterface*)(O->GetNativeInterfaceAddress(UMeleeHitInterface::StaticClass())))
	{
		I->MeleeHit_Implementation(HitResult);
	}
}
struct Z_Construct_UFunction_UMeleeHitInterface_MeleeHit_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Enmey/MeleeHitInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_HitResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeleeHitInterface_MeleeHit_Statics::NewProp_HitResult = { "HitResult", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeleeHitInterface_eventMeleeHit_Parms, HitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(0, nullptr) }; // 4100991306
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeleeHitInterface_MeleeHit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeleeHitInterface_MeleeHit_Statics::NewProp_HitResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeleeHitInterface_MeleeHit_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeleeHitInterface_MeleeHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeleeHitInterface, nullptr, "MeleeHit", nullptr, nullptr, Z_Construct_UFunction_UMeleeHitInterface_MeleeHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeleeHitInterface_MeleeHit_Statics::PropPointers), sizeof(MeleeHitInterface_eventMeleeHit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeleeHitInterface_MeleeHit_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMeleeHitInterface_MeleeHit_Statics::Function_MetaDataParams) };
static_assert(sizeof(MeleeHitInterface_eventMeleeHit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMeleeHitInterface_MeleeHit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMeleeHitInterface_MeleeHit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IMeleeHitInterface::execMeleeHit)
{
	P_GET_STRUCT(FHitResult,Z_Param_HitResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MeleeHit_Implementation(Z_Param_HitResult);
	P_NATIVE_END;
}
// End Interface UMeleeHitInterface Function MeleeHit

// Begin Interface UMeleeHitInterface
void UMeleeHitInterface::StaticRegisterNativesUMeleeHitInterface()
{
	UClass* Class = UMeleeHitInterface::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "MeleeHit", &IMeleeHitInterface::execMeleeHit },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMeleeHitInterface);
UClass* Z_Construct_UClass_UMeleeHitInterface_NoRegister()
{
	return UMeleeHitInterface::StaticClass();
}
struct Z_Construct_UClass_UMeleeHitInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Enmey/MeleeHitInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMeleeHitInterface_MeleeHit, "MeleeHit" }, // 159204193
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IMeleeHitInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMeleeHitInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_Project_Capstone,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMeleeHitInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMeleeHitInterface_Statics::ClassParams = {
	&UMeleeHitInterface::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMeleeHitInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UMeleeHitInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMeleeHitInterface()
{
	if (!Z_Registration_Info_UClass_UMeleeHitInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMeleeHitInterface.OuterSingleton, Z_Construct_UClass_UMeleeHitInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMeleeHitInterface.OuterSingleton;
}
template<> PROJECT_CAPSTONE_API UClass* StaticClass<UMeleeHitInterface>()
{
	return UMeleeHitInterface::StaticClass();
}
UMeleeHitInterface::UMeleeHitInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMeleeHitInterface);
UMeleeHitInterface::~UMeleeHitInterface() {}
// End Interface UMeleeHitInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_2025_Unreal_Capstone_Capstone_unreal_Project_Capstone_Source_Project_Capstone_Public_Enmey_MeleeHitInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMeleeHitInterface, UMeleeHitInterface::StaticClass, TEXT("UMeleeHitInterface"), &Z_Registration_Info_UClass_UMeleeHitInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMeleeHitInterface), 1056268488U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_2025_Unreal_Capstone_Capstone_unreal_Project_Capstone_Source_Project_Capstone_Public_Enmey_MeleeHitInterface_h_1663793023(TEXT("/Script/Project_Capstone"),
	Z_CompiledInDeferFile_FID_2025_Unreal_Capstone_Capstone_unreal_Project_Capstone_Source_Project_Capstone_Public_Enmey_MeleeHitInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_2025_Unreal_Capstone_Capstone_unreal_Project_Capstone_Source_Project_Capstone_Public_Enmey_MeleeHitInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
