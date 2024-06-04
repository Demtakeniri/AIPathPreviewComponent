// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AIPathPreviewComponent/ProceduralPath.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProceduralPath() {}
// Cross Module References
	AIPATHPREVIEWCOMPONENT_API UClass* Z_Construct_UClass_AProceduralPath();
	AIPATHPREVIEWCOMPONENT_API UClass* Z_Construct_UClass_AProceduralPath_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	PROCEDURALMESHCOMPONENT_API UClass* Z_Construct_UClass_UProceduralMeshComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AIPathPreviewComponent();
// End Cross Module References
	DEFINE_FUNCTION(AProceduralPath::execCreateTriangle)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CreateTriangle();
		P_NATIVE_END;
	}
	void AProceduralPath::StaticRegisterNativesAProceduralPath()
	{
		UClass* Class = AProceduralPath::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateTriangle", &AProceduralPath::execCreateTriangle },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AProceduralPath_CreateTriangle_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AProceduralPath_CreateTriangle_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "ModuleRelativePath", "ProceduralPath.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AProceduralPath_CreateTriangle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AProceduralPath, nullptr, "CreateTriangle", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AProceduralPath_CreateTriangle_Statics::Function_MetaDataParams), Z_Construct_UFunction_AProceduralPath_CreateTriangle_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AProceduralPath_CreateTriangle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AProceduralPath_CreateTriangle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AProceduralPath);
	UClass* Z_Construct_UClass_AProceduralPath_NoRegister()
	{
		return AProceduralPath::StaticClass();
	}
	struct Z_Construct_UClass_AProceduralPath_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_mesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AProceduralPath_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_AIPathPreviewComponent,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AProceduralPath_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AProceduralPath_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AProceduralPath_CreateTriangle, "CreateTriangle" }, // 4266231112
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AProceduralPath_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProceduralPath_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ProceduralPath.h" },
		{ "ModuleRelativePath", "ProceduralPath.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProceduralPath_Statics::NewProp_mesh_MetaData[] = {
		{ "Category", "ProceduralPath" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ProceduralPath.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProceduralPath_Statics::NewProp_mesh = { "mesh", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProceduralPath, mesh), Z_Construct_UClass_UProceduralMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AProceduralPath_Statics::NewProp_mesh_MetaData), Z_Construct_UClass_AProceduralPath_Statics::NewProp_mesh_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AProceduralPath_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralPath_Statics::NewProp_mesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AProceduralPath_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProceduralPath>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AProceduralPath_Statics::ClassParams = {
		&AProceduralPath::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AProceduralPath_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AProceduralPath_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AProceduralPath_Statics::Class_MetaDataParams), Z_Construct_UClass_AProceduralPath_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AProceduralPath_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AProceduralPath()
	{
		if (!Z_Registration_Info_UClass_AProceduralPath.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AProceduralPath.OuterSingleton, Z_Construct_UClass_AProceduralPath_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AProceduralPath.OuterSingleton;
	}
	template<> AIPATHPREVIEWCOMPONENT_API UClass* StaticClass<AProceduralPath>()
	{
		return AProceduralPath::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AProceduralPath);
	AProceduralPath::~AProceduralPath() {}
	struct Z_CompiledInDeferFile_FID_ThesisProject_Plugins_AIPathPreviewComponent_Source_AIPathPreviewComponent_ProceduralPath_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ThesisProject_Plugins_AIPathPreviewComponent_Source_AIPathPreviewComponent_ProceduralPath_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AProceduralPath, AProceduralPath::StaticClass, TEXT("AProceduralPath"), &Z_Registration_Info_UClass_AProceduralPath, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AProceduralPath), 3633249110U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ThesisProject_Plugins_AIPathPreviewComponent_Source_AIPathPreviewComponent_ProceduralPath_h_3599817844(TEXT("/Script/AIPathPreviewComponent"),
		Z_CompiledInDeferFile_FID_ThesisProject_Plugins_AIPathPreviewComponent_Source_AIPathPreviewComponent_ProceduralPath_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ThesisProject_Plugins_AIPathPreviewComponent_Source_AIPathPreviewComponent_ProceduralPath_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
