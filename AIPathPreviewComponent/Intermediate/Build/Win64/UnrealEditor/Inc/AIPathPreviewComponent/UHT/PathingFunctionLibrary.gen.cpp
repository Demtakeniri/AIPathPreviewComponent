// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AIPathPreviewComponent/Public/PathingFunctionLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePathingFunctionLibrary() {}
// Cross Module References
	AIPATHPREVIEWCOMPONENT_API UClass* Z_Construct_UClass_UPathingFunctionLibrary();
	AIPATHPREVIEWCOMPONENT_API UClass* Z_Construct_UClass_UPathingFunctionLibrary_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AIPathPreviewComponent();
// End Cross Module References
	DEFINE_FUNCTION(UPathingFunctionLibrary::execAddAveragePoints)
	{
		P_GET_TARRAY_REF(FVector,Z_Param_Out_InPoints);
		P_GET_PROPERTY(FFloatProperty,Z_Param_MaxSectionLenght);
		P_GET_TARRAY_REF(FVector,Z_Param_Out_OutPoints);
		P_GET_OBJECT(UWorld,Z_Param_World);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPathingFunctionLibrary::AddAveragePoints(Z_Param_Out_InPoints,Z_Param_MaxSectionLenght,Z_Param_Out_OutPoints,Z_Param_World);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPathingFunctionLibrary::execCheckForHeightDifferences)
	{
		P_GET_TARRAY_REF(FVector,Z_Param_Out_InPoints);
		P_GET_TARRAY_REF(FVector,Z_Param_Out_OutPoints);
		P_GET_OBJECT(UWorld,Z_Param_World);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPathingFunctionLibrary::CheckForHeightDifferences(Z_Param_Out_InPoints,Z_Param_Out_OutPoints,Z_Param_World);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPathingFunctionLibrary::execSmoothPathPoints)
	{
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Points);
		P_GET_PROPERTY(FIntProperty,Z_Param_Iterations);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Alpha);
		P_GET_PROPERTY(FFloatProperty,Z_Param_MaxDotProduct);
		P_GET_TARRAY_REF(FVector,Z_Param_Out_OutPoints);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPathingFunctionLibrary::SmoothPathPoints(Z_Param_Out_Points,Z_Param_Iterations,Z_Param_Alpha,Z_Param_MaxDotProduct,Z_Param_Out_OutPoints);
		P_NATIVE_END;
	}
	void UPathingFunctionLibrary::StaticRegisterNativesUPathingFunctionLibrary()
	{
		UClass* Class = UPathingFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddAveragePoints", &UPathingFunctionLibrary::execAddAveragePoints },
			{ "CheckForHeightDifferences", &UPathingFunctionLibrary::execCheckForHeightDifferences },
			{ "SmoothPathPoints", &UPathingFunctionLibrary::execSmoothPathPoints },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPathingFunctionLibrary_AddAveragePoints_Statics
	{
		struct PathingFunctionLibrary_eventAddAveragePoints_Parms
		{
			TArray<FVector> InPoints;
			float MaxSectionLenght;
			TArray<FVector> OutPoints;
			UWorld* World;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InPoints_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InPoints_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InPoints;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxSectionLenght;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutPoints_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutPoints;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPathingFunctionLibrary_AddAveragePoints_Statics::NewProp_InPoints_Inner = { "InPoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPathingFunctionLibrary_AddAveragePoints_Statics::NewProp_InPoints_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPathingFunctionLibrary_AddAveragePoints_Statics::NewProp_InPoints = { "InPoints", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PathingFunctionLibrary_eventAddAveragePoints_Parms, InPoints), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPathingFunctionLibrary_AddAveragePoints_Statics::NewProp_InPoints_MetaData), Z_Construct_UFunction_UPathingFunctionLibrary_AddAveragePoints_Statics::NewProp_InPoints_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPathingFunctionLibrary_AddAveragePoints_Statics::NewProp_MaxSectionLenght = { "MaxSectionLenght", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PathingFunctionLibrary_eventAddAveragePoints_Parms, MaxSectionLenght), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPathingFunctionLibrary_AddAveragePoints_Statics::NewProp_OutPoints_Inner = { "OutPoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPathingFunctionLibrary_AddAveragePoints_Statics::NewProp_OutPoints = { "OutPoints", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PathingFunctionLibrary_eventAddAveragePoints_Parms, OutPoints), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPathingFunctionLibrary_AddAveragePoints_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PathingFunctionLibrary_eventAddAveragePoints_Parms, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPathingFunctionLibrary_AddAveragePoints_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPathingFunctionLibrary_AddAveragePoints_Statics::NewProp_InPoints_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPathingFunctionLibrary_AddAveragePoints_Statics::NewProp_InPoints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPathingFunctionLibrary_AddAveragePoints_Statics::NewProp_MaxSectionLenght,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPathingFunctionLibrary_AddAveragePoints_Statics::NewProp_OutPoints_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPathingFunctionLibrary_AddAveragePoints_Statics::NewProp_OutPoints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPathingFunctionLibrary_AddAveragePoints_Statics::NewProp_World,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPathingFunctionLibrary_AddAveragePoints_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// <summary>\n/// Function that cehcks the array of points and adds average points in case two of them are too far apart.\n/// </summary>\n/// <param name=\"InPoints\"> The array of points to inspecct\n/// </param>\n/// <param name=\"MaxSectionLenght\"> The Lenght that needs to be reached between two points for the system to create an intermediate one.\n/// </param>\n/// <param name=\"OutPoints\"> Out Paramenter containing the new points.\n/// </param>\n/// <param name=\"World\"> Reference to the World\n/// </param>\n" },
#endif
		{ "ModuleRelativePath", "Public/PathingFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<summary>\nFunction that cehcks the array of points and adds average points in case two of them are too far apart.\n</summary>\n<param name=\"InPoints\"> The array of points to inspecct\n</param>\n<param name=\"MaxSectionLenght\"> The Lenght that needs to be reached between two points for the system to create an intermediate one.\n</param>\n<param name=\"OutPoints\"> Out Paramenter containing the new points.\n</param>\n<param name=\"World\"> Reference to the World\n</param>" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPathingFunctionLibrary_AddAveragePoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPathingFunctionLibrary, nullptr, "AddAveragePoints", nullptr, nullptr, Z_Construct_UFunction_UPathingFunctionLibrary_AddAveragePoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPathingFunctionLibrary_AddAveragePoints_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPathingFunctionLibrary_AddAveragePoints_Statics::PathingFunctionLibrary_eventAddAveragePoints_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPathingFunctionLibrary_AddAveragePoints_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPathingFunctionLibrary_AddAveragePoints_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPathingFunctionLibrary_AddAveragePoints_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPathingFunctionLibrary_AddAveragePoints_Statics::PathingFunctionLibrary_eventAddAveragePoints_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPathingFunctionLibrary_AddAveragePoints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPathingFunctionLibrary_AddAveragePoints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPathingFunctionLibrary_CheckForHeightDifferences_Statics
	{
		struct PathingFunctionLibrary_eventCheckForHeightDifferences_Parms
		{
			TArray<FVector> InPoints;
			TArray<FVector> OutPoints;
			UWorld* World;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InPoints_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InPoints_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InPoints;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutPoints_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutPoints;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPathingFunctionLibrary_CheckForHeightDifferences_Statics::NewProp_InPoints_Inner = { "InPoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPathingFunctionLibrary_CheckForHeightDifferences_Statics::NewProp_InPoints_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPathingFunctionLibrary_CheckForHeightDifferences_Statics::NewProp_InPoints = { "InPoints", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PathingFunctionLibrary_eventCheckForHeightDifferences_Parms, InPoints), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPathingFunctionLibrary_CheckForHeightDifferences_Statics::NewProp_InPoints_MetaData), Z_Construct_UFunction_UPathingFunctionLibrary_CheckForHeightDifferences_Statics::NewProp_InPoints_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPathingFunctionLibrary_CheckForHeightDifferences_Statics::NewProp_OutPoints_Inner = { "OutPoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPathingFunctionLibrary_CheckForHeightDifferences_Statics::NewProp_OutPoints = { "OutPoints", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PathingFunctionLibrary_eventCheckForHeightDifferences_Parms, OutPoints), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPathingFunctionLibrary_CheckForHeightDifferences_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PathingFunctionLibrary_eventCheckForHeightDifferences_Parms, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPathingFunctionLibrary_CheckForHeightDifferences_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPathingFunctionLibrary_CheckForHeightDifferences_Statics::NewProp_InPoints_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPathingFunctionLibrary_CheckForHeightDifferences_Statics::NewProp_InPoints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPathingFunctionLibrary_CheckForHeightDifferences_Statics::NewProp_OutPoints_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPathingFunctionLibrary_CheckForHeightDifferences_Statics::NewProp_OutPoints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPathingFunctionLibrary_CheckForHeightDifferences_Statics::NewProp_World,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPathingFunctionLibrary_CheckForHeightDifferences_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// <summary>\n/// Function that cycle the array of points to spot HeightDifferences.\n/// </summary>\n/// <param name=\"InPoints\">The given Path Points.\n/// </param>\n/// <param name=\"OutPoints\"> Out Parameter containing the new points.\n/// </param>\n/// <param name=\"World\"> Reference to the world\n/// </param>\n" },
#endif
		{ "ModuleRelativePath", "Public/PathingFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<summary>\nFunction that cycle the array of points to spot HeightDifferences.\n</summary>\n<param name=\"InPoints\">The given Path Points.\n</param>\n<param name=\"OutPoints\"> Out Parameter containing the new points.\n</param>\n<param name=\"World\"> Reference to the world\n</param>" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPathingFunctionLibrary_CheckForHeightDifferences_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPathingFunctionLibrary, nullptr, "CheckForHeightDifferences", nullptr, nullptr, Z_Construct_UFunction_UPathingFunctionLibrary_CheckForHeightDifferences_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPathingFunctionLibrary_CheckForHeightDifferences_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPathingFunctionLibrary_CheckForHeightDifferences_Statics::PathingFunctionLibrary_eventCheckForHeightDifferences_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPathingFunctionLibrary_CheckForHeightDifferences_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPathingFunctionLibrary_CheckForHeightDifferences_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPathingFunctionLibrary_CheckForHeightDifferences_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPathingFunctionLibrary_CheckForHeightDifferences_Statics::PathingFunctionLibrary_eventCheckForHeightDifferences_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPathingFunctionLibrary_CheckForHeightDifferences()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPathingFunctionLibrary_CheckForHeightDifferences_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPathingFunctionLibrary_SmoothPathPoints_Statics
	{
		struct PathingFunctionLibrary_eventSmoothPathPoints_Parms
		{
			TArray<FVector> Points;
			int32 Iterations;
			float Alpha;
			float MaxDotProduct;
			TArray<FVector> OutPoints;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Points_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Points_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Points;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Iterations;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Alpha;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxDotProduct;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutPoints_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutPoints;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPathingFunctionLibrary_SmoothPathPoints_Statics::NewProp_Points_Inner = { "Points", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPathingFunctionLibrary_SmoothPathPoints_Statics::NewProp_Points_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPathingFunctionLibrary_SmoothPathPoints_Statics::NewProp_Points = { "Points", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PathingFunctionLibrary_eventSmoothPathPoints_Parms, Points), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPathingFunctionLibrary_SmoothPathPoints_Statics::NewProp_Points_MetaData), Z_Construct_UFunction_UPathingFunctionLibrary_SmoothPathPoints_Statics::NewProp_Points_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPathingFunctionLibrary_SmoothPathPoints_Statics::NewProp_Iterations = { "Iterations", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PathingFunctionLibrary_eventSmoothPathPoints_Parms, Iterations), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPathingFunctionLibrary_SmoothPathPoints_Statics::NewProp_Alpha = { "Alpha", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PathingFunctionLibrary_eventSmoothPathPoints_Parms, Alpha), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPathingFunctionLibrary_SmoothPathPoints_Statics::NewProp_MaxDotProduct = { "MaxDotProduct", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PathingFunctionLibrary_eventSmoothPathPoints_Parms, MaxDotProduct), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPathingFunctionLibrary_SmoothPathPoints_Statics::NewProp_OutPoints_Inner = { "OutPoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPathingFunctionLibrary_SmoothPathPoints_Statics::NewProp_OutPoints = { "OutPoints", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PathingFunctionLibrary_eventSmoothPathPoints_Parms, OutPoints), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPathingFunctionLibrary_SmoothPathPoints_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPathingFunctionLibrary_SmoothPathPoints_Statics::NewProp_Points_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPathingFunctionLibrary_SmoothPathPoints_Statics::NewProp_Points,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPathingFunctionLibrary_SmoothPathPoints_Statics::NewProp_Iterations,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPathingFunctionLibrary_SmoothPathPoints_Statics::NewProp_Alpha,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPathingFunctionLibrary_SmoothPathPoints_Statics::NewProp_MaxDotProduct,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPathingFunctionLibrary_SmoothPathPoints_Statics::NewProp_OutPoints_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPathingFunctionLibrary_SmoothPathPoints_Statics::NewProp_OutPoints,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPathingFunctionLibrary_SmoothPathPoints_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// <summary>\n/// Function that uses the Chaikin's Algorithm to smooth out angles of the given path.\n/// </summary>\n/// <param name=\"Points\"> The Path points\n/// </param>\n/// <param name=\"Iterations\"> Number of Iterations to do. (More Iterations = Smoother curves but more expensive operation)\n/// </param>\n/// <param name=\"Alpha\"> Distance from a point where to create the two smoothing points. (Closer to 1 means closer to the point)\n/// </param>\n/// <param name=\"MaxDotProduct\"> How hard an angle has to be in order to be smoothed out by the system (currently not used)\n/// </param>\n/// <param name=\"OutPoints\"> Out parameter containing the new points\n/// </param>\n" },
#endif
		{ "ModuleRelativePath", "Public/PathingFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<summary>\nFunction that uses the Chaikin's Algorithm to smooth out angles of the given path.\n</summary>\n<param name=\"Points\"> The Path points\n</param>\n<param name=\"Iterations\"> Number of Iterations to do. (More Iterations = Smoother curves but more expensive operation)\n</param>\n<param name=\"Alpha\"> Distance from a point where to create the two smoothing points. (Closer to 1 means closer to the point)\n</param>\n<param name=\"MaxDotProduct\"> How hard an angle has to be in order to be smoothed out by the system (currently not used)\n</param>\n<param name=\"OutPoints\"> Out parameter containing the new points\n</param>" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPathingFunctionLibrary_SmoothPathPoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPathingFunctionLibrary, nullptr, "SmoothPathPoints", nullptr, nullptr, Z_Construct_UFunction_UPathingFunctionLibrary_SmoothPathPoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPathingFunctionLibrary_SmoothPathPoints_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPathingFunctionLibrary_SmoothPathPoints_Statics::PathingFunctionLibrary_eventSmoothPathPoints_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPathingFunctionLibrary_SmoothPathPoints_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPathingFunctionLibrary_SmoothPathPoints_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPathingFunctionLibrary_SmoothPathPoints_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPathingFunctionLibrary_SmoothPathPoints_Statics::PathingFunctionLibrary_eventSmoothPathPoints_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPathingFunctionLibrary_SmoothPathPoints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPathingFunctionLibrary_SmoothPathPoints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPathingFunctionLibrary);
	UClass* Z_Construct_UClass_UPathingFunctionLibrary_NoRegister()
	{
		return UPathingFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UPathingFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPathingFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_AIPathPreviewComponent,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPathingFunctionLibrary_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UPathingFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPathingFunctionLibrary_AddAveragePoints, "AddAveragePoints" }, // 1781926741
		{ &Z_Construct_UFunction_UPathingFunctionLibrary_CheckForHeightDifferences, "CheckForHeightDifferences" }, // 4114006933
		{ &Z_Construct_UFunction_UPathingFunctionLibrary_SmoothPathPoints, "SmoothPathPoints" }, // 2716806721
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPathingFunctionLibrary_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPathingFunctionLibrary_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "PathingFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/PathingFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPathingFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPathingFunctionLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPathingFunctionLibrary_Statics::ClassParams = {
		&UPathingFunctionLibrary::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPathingFunctionLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UPathingFunctionLibrary_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UPathingFunctionLibrary()
	{
		if (!Z_Registration_Info_UClass_UPathingFunctionLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPathingFunctionLibrary.OuterSingleton, Z_Construct_UClass_UPathingFunctionLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPathingFunctionLibrary.OuterSingleton;
	}
	template<> AIPATHPREVIEWCOMPONENT_API UClass* StaticClass<UPathingFunctionLibrary>()
	{
		return UPathingFunctionLibrary::StaticClass();
	}
	UPathingFunctionLibrary::UPathingFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPathingFunctionLibrary);
	UPathingFunctionLibrary::~UPathingFunctionLibrary() {}
	struct Z_CompiledInDeferFile_FID_Users_davi__thesisproject_ThesisProject_Plugins_AIPathPreviewComponent_Source_AIPathPreviewComponent_Public_PathingFunctionLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_davi__thesisproject_ThesisProject_Plugins_AIPathPreviewComponent_Source_AIPathPreviewComponent_Public_PathingFunctionLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPathingFunctionLibrary, UPathingFunctionLibrary::StaticClass, TEXT("UPathingFunctionLibrary"), &Z_Registration_Info_UClass_UPathingFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPathingFunctionLibrary), 1545618882U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_davi__thesisproject_ThesisProject_Plugins_AIPathPreviewComponent_Source_AIPathPreviewComponent_Public_PathingFunctionLibrary_h_314781714(TEXT("/Script/AIPathPreviewComponent"),
		Z_CompiledInDeferFile_FID_Users_davi__thesisproject_ThesisProject_Plugins_AIPathPreviewComponent_Source_AIPathPreviewComponent_Public_PathingFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_davi__thesisproject_ThesisProject_Plugins_AIPathPreviewComponent_Source_AIPathPreviewComponent_Public_PathingFunctionLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
