// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MoveItEditor/Public/AnimGraphNode_LandFootIK.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimGraphNode_LandFootIK() {}
// Cross Module References
	MOVEITEDITOR_API UClass* Z_Construct_UClass_UAnimGraphNode_LandFootIK_NoRegister();
	MOVEITEDITOR_API UClass* Z_Construct_UClass_UAnimGraphNode_LandFootIK();
	MOVEITEDITOR_API UClass* Z_Construct_UClass_UAnimGraphNode_LocalSkeletalControlBase();
	UPackage* Z_Construct_UPackage__Script_MoveItEditor();
	MOVEIT_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_LandFootIK();
// End Cross Module References
	void UAnimGraphNode_LandFootIK::StaticRegisterNativesUAnimGraphNode_LandFootIK()
	{
	}
	UClass* Z_Construct_UClass_UAnimGraphNode_LandFootIK_NoRegister()
	{
		return UAnimGraphNode_LandFootIK::StaticClass();
	}
	struct Z_Construct_UClass_UAnimGraphNode_LandFootIK_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Node_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Node;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimGraphNode_LandFootIK_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimGraphNode_LocalSkeletalControlBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MoveItEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_LandFootIK_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AnimGraphNode_LandFootIK.h" },
		{ "ModuleRelativePath", "Public/AnimGraphNode_LandFootIK.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_LandFootIK_Statics::NewProp_Node_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/AnimGraphNode_LandFootIK.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimGraphNode_LandFootIK_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010008000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimGraphNode_LandFootIK, Node), Z_Construct_UScriptStruct_FAnimNode_LandFootIK, METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_LandFootIK_Statics::NewProp_Node_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_LandFootIK_Statics::NewProp_Node_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimGraphNode_LandFootIK_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimGraphNode_LandFootIK_Statics::NewProp_Node,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimGraphNode_LandFootIK_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimGraphNode_LandFootIK>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAnimGraphNode_LandFootIK_Statics::ClassParams = {
		&UAnimGraphNode_LandFootIK::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnimGraphNode_LandFootIK_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_LandFootIK_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_LandFootIK_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_LandFootIK_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimGraphNode_LandFootIK()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAnimGraphNode_LandFootIK_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAnimGraphNode_LandFootIK, 483537788);
	template<> MOVEITEDITOR_API UClass* StaticClass<UAnimGraphNode_LandFootIK>()
	{
		return UAnimGraphNode_LandFootIK::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimGraphNode_LandFootIK(Z_Construct_UClass_UAnimGraphNode_LandFootIK, &UAnimGraphNode_LandFootIK::StaticClass, TEXT("/Script/MoveItEditor"), TEXT("UAnimGraphNode_LandFootIK"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimGraphNode_LandFootIK);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
