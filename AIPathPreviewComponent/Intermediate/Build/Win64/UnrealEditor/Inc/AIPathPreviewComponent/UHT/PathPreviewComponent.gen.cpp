// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AIPathPreviewComponent/Public/PathPreviewComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePathPreviewComponent() {}
// Cross Module References
	AIPATHPREVIEWCOMPONENT_API UClass* Z_Construct_UClass_APathPreviewActor_NoRegister();
	AIPATHPREVIEWCOMPONENT_API UClass* Z_Construct_UClass_UPathPreviewComponent();
	AIPATHPREVIEWCOMPONENT_API UClass* Z_Construct_UClass_UPathPreviewComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_AIPathPreviewComponent();
// End Cross Module References
	DEFINE_FUNCTION(UPathPreviewComponent::execCalculatePathAndShowPreview)
	{
		P_GET_STRUCT(FVector,Z_Param_Start);
		P_GET_STRUCT(FVector,Z_Param_End);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CalculatePathAndShowPreview_Implementation(Z_Param_Start,Z_Param_End);
		P_NATIVE_END;
	}
	struct PathPreviewComponent_eventCalculatePathAndShowPreview_Parms
	{
		FVector Start;
		FVector End;
	};
	static FName NAME_UPathPreviewComponent_CalculatePathAndShowPreview = FName(TEXT("CalculatePathAndShowPreview"));
	void UPathPreviewComponent::CalculatePathAndShowPreview(FVector Start, FVector End)
	{
		PathPreviewComponent_eventCalculatePathAndShowPreview_Parms Parms;
		Parms.Start=Start;
		Parms.End=End;
		ProcessEvent(FindFunctionChecked(NAME_UPathPreviewComponent_CalculatePathAndShowPreview),&Parms);
	}
	void UPathPreviewComponent::StaticRegisterNativesUPathPreviewComponent()
	{
		UClass* Class = UPathPreviewComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CalculatePathAndShowPreview", &UPathPreviewComponent::execCalculatePathAndShowPreview },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPathPreviewComponent_CalculatePathAndShowPreview_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_Start;
		static const UECodeGen_Private::FStructPropertyParams NewProp_End;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPathPreviewComponent_CalculatePathAndShowPreview_Statics::NewProp_Start = { "Start", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PathPreviewComponent_eventCalculatePathAndShowPreview_Parms, Start), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPathPreviewComponent_CalculatePathAndShowPreview_Statics::NewProp_End = { "End", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PathPreviewComponent_eventCalculatePathAndShowPreview_Parms, End), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPathPreviewComponent_CalculatePathAndShowPreview_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPathPreviewComponent_CalculatePathAndShowPreview_Statics::NewProp_Start,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPathPreviewComponent_CalculatePathAndShowPreview_Statics::NewProp_End,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPathPreviewComponent_CalculatePathAndShowPreview_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// <summary>\n/// Function to Call when you want to build the path preview.\n/// </summary>\n/// <param name=\"Start\">The movement Start point</param>\n/// <param name=\"End\">The movement End point</param>\n" },
#endif
		{ "ModuleRelativePath", "Public/PathPreviewComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<summary>\nFunction to Call when you want to build the path preview.\n</summary>\n<param name=\"Start\">The movement Start point</param>\n<param name=\"End\">The movement End point</param>" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPathPreviewComponent_CalculatePathAndShowPreview_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPathPreviewComponent, nullptr, "CalculatePathAndShowPreview", nullptr, nullptr, Z_Construct_UFunction_UPathPreviewComponent_CalculatePathAndShowPreview_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPathPreviewComponent_CalculatePathAndShowPreview_Statics::PropPointers), sizeof(PathPreviewComponent_eventCalculatePathAndShowPreview_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C820C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPathPreviewComponent_CalculatePathAndShowPreview_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPathPreviewComponent_CalculatePathAndShowPreview_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPathPreviewComponent_CalculatePathAndShowPreview_Statics::PropPointers) < 2048);
	static_assert(sizeof(PathPreviewComponent_eventCalculatePathAndShowPreview_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPathPreviewComponent_CalculatePathAndShowPreview()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPathPreviewComponent_CalculatePathAndShowPreview_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPathPreviewComponent);
	UClass* Z_Construct_UClass_UPathPreviewComponent_NoRegister()
	{
		return UPathPreviewComponent::StaticClass();
	}
	struct Z_Construct_UClass_UPathPreviewComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AlwaysShow_MetaData[];
#endif
		static void NewProp_AlwaysShow_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_AlwaysShow;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PathPreviewActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PathPreviewActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPathPreviewComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AIPathPreviewComponent,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPathPreviewComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UPathPreviewComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPathPreviewComponent_CalculatePathAndShowPreview, "CalculatePathAndShowPreview" }, // 1424441378
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPathPreviewComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPathPreviewComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "PathPreviewComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/PathPreviewComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPathPreviewComponent_Statics::NewProp_AlwaysShow_MetaData[] = {
		{ "Category", "PathPreviewComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// <summary>\n/// Tick to always update the path preview mesh\n/// </summary>\n" },
#endif
		{ "ModuleRelativePath", "Public/PathPreviewComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<summary>\nTick to always update the path preview mesh\n</summary>" },
#endif
	};
#endif
	void Z_Construct_UClass_UPathPreviewComponent_Statics::NewProp_AlwaysShow_SetBit(void* Obj)
	{
		((UPathPreviewComponent*)Obj)->AlwaysShow = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPathPreviewComponent_Statics::NewProp_AlwaysShow = { "AlwaysShow", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPathPreviewComponent), &Z_Construct_UClass_UPathPreviewComponent_Statics::NewProp_AlwaysShow_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPathPreviewComponent_Statics::NewProp_AlwaysShow_MetaData), Z_Construct_UClass_UPathPreviewComponent_Statics::NewProp_AlwaysShow_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPathPreviewComponent_Statics::NewProp_PathPreviewActor_MetaData[] = {
		{ "Category", "PathPreviewComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// <summary>\n/// Reference to the path preview actor that this component will spawn on BeginPlay.\n/// </summary>\n" },
#endif
		{ "ModuleRelativePath", "Public/PathPreviewComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<summary>\nReference to the path preview actor that this component will spawn on BeginPlay.\n</summary>" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPathPreviewComponent_Statics::NewProp_PathPreviewActor = { "PathPreviewActor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPathPreviewComponent, PathPreviewActor), Z_Construct_UClass_APathPreviewActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPathPreviewComponent_Statics::NewProp_PathPreviewActor_MetaData), Z_Construct_UClass_UPathPreviewComponent_Statics::NewProp_PathPreviewActor_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPathPreviewComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPathPreviewComponent_Statics::NewProp_AlwaysShow,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPathPreviewComponent_Statics::NewProp_PathPreviewActor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPathPreviewComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPathPreviewComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPathPreviewComponent_Statics::ClassParams = {
		&UPathPreviewComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPathPreviewComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPathPreviewComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPathPreviewComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UPathPreviewComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPathPreviewComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UPathPreviewComponent()
	{
		if (!Z_Registration_Info_UClass_UPathPreviewComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPathPreviewComponent.OuterSingleton, Z_Construct_UClass_UPathPreviewComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPathPreviewComponent.OuterSingleton;
	}
	template<> AIPATHPREVIEWCOMPONENT_API UClass* StaticClass<UPathPreviewComponent>()
	{
		return UPathPreviewComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPathPreviewComponent);
	UPathPreviewComponent::~UPathPreviewComponent() {}
	struct Z_CompiledInDeferFile_FID_ThesisProject_Plugins_AIPathPreviewComponent_Source_AIPathPreviewComponent_Public_PathPreviewComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ThesisProject_Plugins_AIPathPreviewComponent_Source_AIPathPreviewComponent_Public_PathPreviewComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPathPreviewComponent, UPathPreviewComponent::StaticClass, TEXT("UPathPreviewComponent"), &Z_Registration_Info_UClass_UPathPreviewComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPathPreviewComponent), 2080679228U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ThesisProject_Plugins_AIPathPreviewComponent_Source_AIPathPreviewComponent_Public_PathPreviewComponent_h_2186296729(TEXT("/Script/AIPathPreviewComponent"),
		Z_CompiledInDeferFile_FID_ThesisProject_Plugins_AIPathPreviewComponent_Source_AIPathPreviewComponent_Public_PathPreviewComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ThesisProject_Plugins_AIPathPreviewComponent_Source_AIPathPreviewComponent_Public_PathPreviewComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
