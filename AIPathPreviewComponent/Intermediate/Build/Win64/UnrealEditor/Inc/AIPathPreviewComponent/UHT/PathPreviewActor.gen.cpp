// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AIPathPreviewComponent/Public/PathPreviewActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePathPreviewActor() {}
// Cross Module References
	AIPATHPREVIEWCOMPONENT_API UClass* Z_Construct_UClass_APathPreviewActor();
	AIPATHPREVIEWCOMPONENT_API UClass* Z_Construct_UClass_APathPreviewActor_NoRegister();
	AIPATHPREVIEWCOMPONENT_API UClass* Z_Construct_UClass_UPathPreviewSettings_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	PROCEDURALMESHCOMPONENT_API UClass* Z_Construct_UClass_UProceduralMeshComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AIPathPreviewComponent();
// End Cross Module References
	DEFINE_FUNCTION(APathPreviewActor::execPopulateUV1)
	{
		P_GET_STRUCT(FVector,Z_Param_Current);
		P_GET_UBOOL(Z_Param_IsEdgeArray);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PopulateUV1_Implementation(Z_Param_Current,Z_Param_IsEdgeArray);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APathPreviewActor::execClearMesh)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearMesh_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APathPreviewActor::execShowPathPreview)
	{
		P_GET_TARRAY_REF(FVector,Z_Param_Out_InPoints);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShowPathPreview_Implementation(Z_Param_Out_InPoints);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APathPreviewActor::execGenerateVerticesAndBuildMesh)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GenerateVerticesAndBuildMesh_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APathPreviewActor::execProjectPointsOnGround)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ProjectPointsOnGround_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APathPreviewActor::execMakeTriangles)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MakeTriangles();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APathPreviewActor::execCalculateVertices)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CalculateVertices();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APathPreviewActor::execCalculateUpVectors)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CalculateUpVectors();
		P_NATIVE_END;
	}
	struct PathPreviewActor_eventPopulateUV1_Parms
	{
		FVector Current;
		bool IsEdgeArray;
	};
	struct PathPreviewActor_eventShowPathPreview_Parms
	{
		TArray<FVector> InPoints;
	};
	static FName NAME_APathPreviewActor_ClearMesh = FName(TEXT("ClearMesh"));
	void APathPreviewActor::ClearMesh()
	{
		ProcessEvent(FindFunctionChecked(NAME_APathPreviewActor_ClearMesh),NULL);
	}
	static FName NAME_APathPreviewActor_GenerateVerticesAndBuildMesh = FName(TEXT("GenerateVerticesAndBuildMesh"));
	void APathPreviewActor::GenerateVerticesAndBuildMesh()
	{
		ProcessEvent(FindFunctionChecked(NAME_APathPreviewActor_GenerateVerticesAndBuildMesh),NULL);
	}
	static FName NAME_APathPreviewActor_PopulateUV1 = FName(TEXT("PopulateUV1"));
	void APathPreviewActor::PopulateUV1(FVector Current, bool IsEdgeArray)
	{
		PathPreviewActor_eventPopulateUV1_Parms Parms;
		Parms.Current=Current;
		Parms.IsEdgeArray=IsEdgeArray ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_APathPreviewActor_PopulateUV1),&Parms);
	}
	static FName NAME_APathPreviewActor_ProjectPointsOnGround = FName(TEXT("ProjectPointsOnGround"));
	void APathPreviewActor::ProjectPointsOnGround()
	{
		ProcessEvent(FindFunctionChecked(NAME_APathPreviewActor_ProjectPointsOnGround),NULL);
	}
	static FName NAME_APathPreviewActor_ShowPathPreview = FName(TEXT("ShowPathPreview"));
	void APathPreviewActor::ShowPathPreview(TArray<FVector> const& InPoints)
	{
		PathPreviewActor_eventShowPathPreview_Parms Parms;
		Parms.InPoints=InPoints;
		ProcessEvent(FindFunctionChecked(NAME_APathPreviewActor_ShowPathPreview),&Parms);
	}
	void APathPreviewActor::StaticRegisterNativesAPathPreviewActor()
	{
		UClass* Class = APathPreviewActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CalculateUpVectors", &APathPreviewActor::execCalculateUpVectors },
			{ "CalculateVertices", &APathPreviewActor::execCalculateVertices },
			{ "ClearMesh", &APathPreviewActor::execClearMesh },
			{ "GenerateVerticesAndBuildMesh", &APathPreviewActor::execGenerateVerticesAndBuildMesh },
			{ "MakeTriangles", &APathPreviewActor::execMakeTriangles },
			{ "PopulateUV1", &APathPreviewActor::execPopulateUV1 },
			{ "ProjectPointsOnGround", &APathPreviewActor::execProjectPointsOnGround },
			{ "ShowPathPreview", &APathPreviewActor::execShowPathPreview },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APathPreviewActor_CalculateUpVectors_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APathPreviewActor_CalculateUpVectors_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// <summary>\n/// Calculates the up vectors for each point in order to generate the mesh facing the right direction\n/// </summary>\n" },
#endif
		{ "ModuleRelativePath", "Public/PathPreviewActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<summary>\nCalculates the up vectors for each point in order to generate the mesh facing the right direction\n</summary>" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APathPreviewActor_CalculateUpVectors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APathPreviewActor, nullptr, "CalculateUpVectors", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APathPreviewActor_CalculateUpVectors_Statics::Function_MetaDataParams), Z_Construct_UFunction_APathPreviewActor_CalculateUpVectors_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_APathPreviewActor_CalculateUpVectors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APathPreviewActor_CalculateUpVectors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APathPreviewActor_CalculateVertices_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APathPreviewActor_CalculateVertices_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// <summary>\n/// foreach point in the path array, calculates four other Vectors.\n/// </summary>\n" },
#endif
		{ "ModuleRelativePath", "Public/PathPreviewActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<summary>\nforeach point in the path array, calculates four other Vectors.\n</summary>" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APathPreviewActor_CalculateVertices_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APathPreviewActor, nullptr, "CalculateVertices", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APathPreviewActor_CalculateVertices_Statics::Function_MetaDataParams), Z_Construct_UFunction_APathPreviewActor_CalculateVertices_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_APathPreviewActor_CalculateVertices()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APathPreviewActor_CalculateVertices_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APathPreviewActor_ClearMesh_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APathPreviewActor_ClearMesh_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// <summary>\n/// Function that clears the procedural mesh section.\n/// </summary>\n" },
#endif
		{ "ModuleRelativePath", "Public/PathPreviewActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<summary>\nFunction that clears the procedural mesh section.\n</summary>" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APathPreviewActor_ClearMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APathPreviewActor, nullptr, "ClearMesh", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APathPreviewActor_ClearMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_APathPreviewActor_ClearMesh_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_APathPreviewActor_ClearMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APathPreviewActor_ClearMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APathPreviewActor_GenerateVerticesAndBuildMesh_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APathPreviewActor_GenerateVerticesAndBuildMesh_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// <summary>\n/// Function that generate the whole procedural mesh section, calling all other function in order.\n/// </summary>\n" },
#endif
		{ "ModuleRelativePath", "Public/PathPreviewActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<summary>\nFunction that generate the whole procedural mesh section, calling all other function in order.\n</summary>" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APathPreviewActor_GenerateVerticesAndBuildMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APathPreviewActor, nullptr, "GenerateVerticesAndBuildMesh", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APathPreviewActor_GenerateVerticesAndBuildMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_APathPreviewActor_GenerateVerticesAndBuildMesh_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_APathPreviewActor_GenerateVerticesAndBuildMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APathPreviewActor_GenerateVerticesAndBuildMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APathPreviewActor_MakeTriangles_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APathPreviewActor_MakeTriangles_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// <summary>\n/// Add All vertices to the array of triangles in the right order\n/// </summary>\n" },
#endif
		{ "ModuleRelativePath", "Public/PathPreviewActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<summary>\nAdd All vertices to the array of triangles in the right order\n</summary>" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APathPreviewActor_MakeTriangles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APathPreviewActor, nullptr, "MakeTriangles", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APathPreviewActor_MakeTriangles_Statics::Function_MetaDataParams), Z_Construct_UFunction_APathPreviewActor_MakeTriangles_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_APathPreviewActor_MakeTriangles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APathPreviewActor_MakeTriangles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APathPreviewActor_PopulateUV1_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_Current;
		static void NewProp_IsEdgeArray_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsEdgeArray;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APathPreviewActor_PopulateUV1_Statics::NewProp_Current = { "Current", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PathPreviewActor_eventPopulateUV1_Parms, Current), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_APathPreviewActor_PopulateUV1_Statics::NewProp_IsEdgeArray_SetBit(void* Obj)
	{
		((PathPreviewActor_eventPopulateUV1_Parms*)Obj)->IsEdgeArray = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APathPreviewActor_PopulateUV1_Statics::NewProp_IsEdgeArray = { "IsEdgeArray", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PathPreviewActor_eventPopulateUV1_Parms), &Z_Construct_UFunction_APathPreviewActor_PopulateUV1_Statics::NewProp_IsEdgeArray_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APathPreviewActor_PopulateUV1_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APathPreviewActor_PopulateUV1_Statics::NewProp_Current,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APathPreviewActor_PopulateUV1_Statics::NewProp_IsEdgeArray,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APathPreviewActor_PopulateUV1_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// <summary>\n/// Function used in case the mesh has to be affected by difficult terrain. uses a LineTrace to see where the given point is located.\n/// In case it is located on a difficult terrain, it reads the type of terrain and sets the UV1 value of that point to the \n/// corresponding UV1 value.\n/// </summary>\n/// <param name=\"Current\">\n/// The point to consider\n/// </param>\n/// <param name=\"IsEdgeArray\">\n/// bool to differentiate between mid-array and edge-array\n/// </param>\n" },
#endif
		{ "ModuleRelativePath", "Public/PathPreviewActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<summary>\nFunction used in case the mesh has to be affected by difficult terrain. uses a LineTrace to see where the given point is located.\nIn case it is located on a difficult terrain, it reads the type of terrain and sets the UV1 value of that point to the\ncorresponding UV1 value.\n</summary>\n<param name=\"Current\">\nThe point to consider\n</param>\n<param name=\"IsEdgeArray\">\nbool to differentiate between mid-array and edge-array\n</param>" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APathPreviewActor_PopulateUV1_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APathPreviewActor, nullptr, "PopulateUV1", nullptr, nullptr, Z_Construct_UFunction_APathPreviewActor_PopulateUV1_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APathPreviewActor_PopulateUV1_Statics::PropPointers), sizeof(PathPreviewActor_eventPopulateUV1_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C820C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APathPreviewActor_PopulateUV1_Statics::Function_MetaDataParams), Z_Construct_UFunction_APathPreviewActor_PopulateUV1_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APathPreviewActor_PopulateUV1_Statics::PropPointers) < 2048);
	static_assert(sizeof(PathPreviewActor_eventPopulateUV1_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_APathPreviewActor_PopulateUV1()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APathPreviewActor_PopulateUV1_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APathPreviewActor_ProjectPointsOnGround_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APathPreviewActor_ProjectPointsOnGround_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// <summary>\n/// Function used to make the points stick to the ground in case of heigth differences between multiple points, it takes each point\n/// and perform a LineTrace starting above the point and ending below it to see if there's walkable ground where the point should lie.\n/// </summary>\n" },
#endif
		{ "ModuleRelativePath", "Public/PathPreviewActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<summary>\nFunction used to make the points stick to the ground in case of heigth differences between multiple points, it takes each point\nand perform a LineTrace starting above the point and ending below it to see if there's walkable ground where the point should lie.\n</summary>" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APathPreviewActor_ProjectPointsOnGround_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APathPreviewActor, nullptr, "ProjectPointsOnGround", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APathPreviewActor_ProjectPointsOnGround_Statics::Function_MetaDataParams), Z_Construct_UFunction_APathPreviewActor_ProjectPointsOnGround_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_APathPreviewActor_ProjectPointsOnGround()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APathPreviewActor_ProjectPointsOnGround_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APathPreviewActor_ShowPathPreview_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_InPoints_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InPoints_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InPoints;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APathPreviewActor_ShowPathPreview_Statics::NewProp_InPoints_Inner = { "InPoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APathPreviewActor_ShowPathPreview_Statics::NewProp_InPoints_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_APathPreviewActor_ShowPathPreview_Statics::NewProp_InPoints = { "InPoints", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PathPreviewActor_eventShowPathPreview_Parms, InPoints), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APathPreviewActor_ShowPathPreview_Statics::NewProp_InPoints_MetaData), Z_Construct_UFunction_APathPreviewActor_ShowPathPreview_Statics::NewProp_InPoints_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APathPreviewActor_ShowPathPreview_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APathPreviewActor_ShowPathPreview_Statics::NewProp_InPoints_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APathPreviewActor_ShowPathPreview_Statics::NewProp_InPoints,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APathPreviewActor_ShowPathPreview_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// <summary>\n/// The function that Clears the mesh and sets the PathPoints before calling \"GenerateVertices()\".\n/// </summary>\n/// <param name=\"InPoints\">\n/// The given array of points.\n/// </param>\n" },
#endif
		{ "ModuleRelativePath", "Public/PathPreviewActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<summary>\nThe function that Clears the mesh and sets the PathPoints before calling \"GenerateVertices()\".\n</summary>\n<param name=\"InPoints\">\nThe given array of points.\n</param>" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APathPreviewActor_ShowPathPreview_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APathPreviewActor, nullptr, "ShowPathPreview", nullptr, nullptr, Z_Construct_UFunction_APathPreviewActor_ShowPathPreview_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APathPreviewActor_ShowPathPreview_Statics::PropPointers), sizeof(PathPreviewActor_eventShowPathPreview_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APathPreviewActor_ShowPathPreview_Statics::Function_MetaDataParams), Z_Construct_UFunction_APathPreviewActor_ShowPathPreview_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APathPreviewActor_ShowPathPreview_Statics::PropPointers) < 2048);
	static_assert(sizeof(PathPreviewActor_eventShowPathPreview_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_APathPreviewActor_ShowPathPreview()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APathPreviewActor_ShowPathPreview_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APathPreviewActor);
	UClass* Z_Construct_UClass_APathPreviewActor_NoRegister()
	{
		return APathPreviewActor::StaticClass();
	}
	struct Z_Construct_UClass_APathPreviewActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProceduralMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ProceduralMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Settings;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PathPoints_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PathPoints_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PathPoints;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Vertices_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Vertices_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Vertices;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Triangles_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Triangles_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Triangles;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Normals_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Normals_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Normals;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CrossUpVectors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CrossUpVectors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CrossUpVectors;
		static const UECodeGen_Private::FStructPropertyParams NewProp_UV0_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UV0_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_UV0;
		static const UECodeGen_Private::FStructPropertyParams NewProp_UV1_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UV1_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_UV1;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APathPreviewActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_AIPathPreviewComponent,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APathPreviewActor_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_APathPreviewActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APathPreviewActor_CalculateUpVectors, "CalculateUpVectors" }, // 1309223744
		{ &Z_Construct_UFunction_APathPreviewActor_CalculateVertices, "CalculateVertices" }, // 261018937
		{ &Z_Construct_UFunction_APathPreviewActor_ClearMesh, "ClearMesh" }, // 1737499487
		{ &Z_Construct_UFunction_APathPreviewActor_GenerateVerticesAndBuildMesh, "GenerateVerticesAndBuildMesh" }, // 3549326622
		{ &Z_Construct_UFunction_APathPreviewActor_MakeTriangles, "MakeTriangles" }, // 4119772272
		{ &Z_Construct_UFunction_APathPreviewActor_PopulateUV1, "PopulateUV1" }, // 3431043789
		{ &Z_Construct_UFunction_APathPreviewActor_ProjectPointsOnGround, "ProjectPointsOnGround" }, // 3666093124
		{ &Z_Construct_UFunction_APathPreviewActor_ShowPathPreview, "ShowPathPreview" }, // 4178404819
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APathPreviewActor_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APathPreviewActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PathPreviewActor.h" },
		{ "ModuleRelativePath", "Public/PathPreviewActor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APathPreviewActor_Statics::NewProp_ProceduralMesh_MetaData[] = {
		{ "Category", "PathPreviewActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PathPreviewActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APathPreviewActor_Statics::NewProp_ProceduralMesh = { "ProceduralMesh", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APathPreviewActor, ProceduralMesh), Z_Construct_UClass_UProceduralMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APathPreviewActor_Statics::NewProp_ProceduralMesh_MetaData), Z_Construct_UClass_APathPreviewActor_Statics::NewProp_ProceduralMesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APathPreviewActor_Statics::NewProp_Settings_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/PathPreviewActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APathPreviewActor_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APathPreviewActor, Settings), Z_Construct_UClass_UPathPreviewSettings_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APathPreviewActor_Statics::NewProp_Settings_MetaData), Z_Construct_UClass_APathPreviewActor_Statics::NewProp_Settings_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_APathPreviewActor_Statics::NewProp_PathPoints_Inner = { "PathPoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APathPreviewActor_Statics::NewProp_PathPoints_MetaData[] = {
		{ "Category", "Internal Variables" },
		{ "ModuleRelativePath", "Public/PathPreviewActor.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_APathPreviewActor_Statics::NewProp_PathPoints = { "PathPoints", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APathPreviewActor, PathPoints), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APathPreviewActor_Statics::NewProp_PathPoints_MetaData), Z_Construct_UClass_APathPreviewActor_Statics::NewProp_PathPoints_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_APathPreviewActor_Statics::NewProp_Vertices_Inner = { "Vertices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APathPreviewActor_Statics::NewProp_Vertices_MetaData[] = {
		{ "Category", "Internal Variables" },
		{ "ModuleRelativePath", "Public/PathPreviewActor.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_APathPreviewActor_Statics::NewProp_Vertices = { "Vertices", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APathPreviewActor, Vertices), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APathPreviewActor_Statics::NewProp_Vertices_MetaData), Z_Construct_UClass_APathPreviewActor_Statics::NewProp_Vertices_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_APathPreviewActor_Statics::NewProp_Triangles_Inner = { "Triangles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APathPreviewActor_Statics::NewProp_Triangles_MetaData[] = {
		{ "Category", "Internal Variables" },
		{ "ModuleRelativePath", "Public/PathPreviewActor.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_APathPreviewActor_Statics::NewProp_Triangles = { "Triangles", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APathPreviewActor, Triangles), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APathPreviewActor_Statics::NewProp_Triangles_MetaData), Z_Construct_UClass_APathPreviewActor_Statics::NewProp_Triangles_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_APathPreviewActor_Statics::NewProp_Normals_Inner = { "Normals", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APathPreviewActor_Statics::NewProp_Normals_MetaData[] = {
		{ "Category", "Internal Variables" },
		{ "ModuleRelativePath", "Public/PathPreviewActor.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_APathPreviewActor_Statics::NewProp_Normals = { "Normals", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APathPreviewActor, Normals), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APathPreviewActor_Statics::NewProp_Normals_MetaData), Z_Construct_UClass_APathPreviewActor_Statics::NewProp_Normals_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_APathPreviewActor_Statics::NewProp_CrossUpVectors_Inner = { "CrossUpVectors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APathPreviewActor_Statics::NewProp_CrossUpVectors_MetaData[] = {
		{ "Category", "Internal Variables" },
		{ "ModuleRelativePath", "Public/PathPreviewActor.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_APathPreviewActor_Statics::NewProp_CrossUpVectors = { "CrossUpVectors", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APathPreviewActor, CrossUpVectors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APathPreviewActor_Statics::NewProp_CrossUpVectors_MetaData), Z_Construct_UClass_APathPreviewActor_Statics::NewProp_CrossUpVectors_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_APathPreviewActor_Statics::NewProp_UV0_Inner = { "UV0", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APathPreviewActor_Statics::NewProp_UV0_MetaData[] = {
		{ "Category", "Internal Variables" },
		{ "ModuleRelativePath", "Public/PathPreviewActor.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_APathPreviewActor_Statics::NewProp_UV0 = { "UV0", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APathPreviewActor, UV0), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APathPreviewActor_Statics::NewProp_UV0_MetaData), Z_Construct_UClass_APathPreviewActor_Statics::NewProp_UV0_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_APathPreviewActor_Statics::NewProp_UV1_Inner = { "UV1", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APathPreviewActor_Statics::NewProp_UV1_MetaData[] = {
		{ "Category", "Internal Variables" },
		{ "ModuleRelativePath", "Public/PathPreviewActor.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_APathPreviewActor_Statics::NewProp_UV1 = { "UV1", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APathPreviewActor, UV1), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APathPreviewActor_Statics::NewProp_UV1_MetaData), Z_Construct_UClass_APathPreviewActor_Statics::NewProp_UV1_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APathPreviewActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APathPreviewActor_Statics::NewProp_ProceduralMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APathPreviewActor_Statics::NewProp_Settings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APathPreviewActor_Statics::NewProp_PathPoints_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APathPreviewActor_Statics::NewProp_PathPoints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APathPreviewActor_Statics::NewProp_Vertices_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APathPreviewActor_Statics::NewProp_Vertices,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APathPreviewActor_Statics::NewProp_Triangles_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APathPreviewActor_Statics::NewProp_Triangles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APathPreviewActor_Statics::NewProp_Normals_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APathPreviewActor_Statics::NewProp_Normals,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APathPreviewActor_Statics::NewProp_CrossUpVectors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APathPreviewActor_Statics::NewProp_CrossUpVectors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APathPreviewActor_Statics::NewProp_UV0_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APathPreviewActor_Statics::NewProp_UV0,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APathPreviewActor_Statics::NewProp_UV1_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APathPreviewActor_Statics::NewProp_UV1,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APathPreviewActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APathPreviewActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APathPreviewActor_Statics::ClassParams = {
		&APathPreviewActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_APathPreviewActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_APathPreviewActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APathPreviewActor_Statics::Class_MetaDataParams), Z_Construct_UClass_APathPreviewActor_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APathPreviewActor_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_APathPreviewActor()
	{
		if (!Z_Registration_Info_UClass_APathPreviewActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APathPreviewActor.OuterSingleton, Z_Construct_UClass_APathPreviewActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APathPreviewActor.OuterSingleton;
	}
	template<> AIPATHPREVIEWCOMPONENT_API UClass* StaticClass<APathPreviewActor>()
	{
		return APathPreviewActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APathPreviewActor);
	APathPreviewActor::~APathPreviewActor() {}
	struct Z_CompiledInDeferFile_FID_Users_davi__thesisproject_ThesisProject_Plugins_AIPathPreviewComponent_Source_AIPathPreviewComponent_Public_PathPreviewActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_davi__thesisproject_ThesisProject_Plugins_AIPathPreviewComponent_Source_AIPathPreviewComponent_Public_PathPreviewActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APathPreviewActor, APathPreviewActor::StaticClass, TEXT("APathPreviewActor"), &Z_Registration_Info_UClass_APathPreviewActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APathPreviewActor), 1113214821U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_davi__thesisproject_ThesisProject_Plugins_AIPathPreviewComponent_Source_AIPathPreviewComponent_Public_PathPreviewActor_h_3613074364(TEXT("/Script/AIPathPreviewComponent"),
		Z_CompiledInDeferFile_FID_Users_davi__thesisproject_ThesisProject_Plugins_AIPathPreviewComponent_Source_AIPathPreviewComponent_Public_PathPreviewActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_davi__thesisproject_ThesisProject_Plugins_AIPathPreviewComponent_Source_AIPathPreviewComponent_Public_PathPreviewActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
