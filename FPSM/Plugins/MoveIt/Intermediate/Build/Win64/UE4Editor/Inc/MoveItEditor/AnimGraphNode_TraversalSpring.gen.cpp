// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MoveItEditor/Public/AnimGraphNode_TraversalSpring.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimGraphNode_TraversalSpring() {}
// Cross Module References
	MOVEITEDITOR_API UClass* Z_Construct_UClass_UAnimGraphNode_TraversalSpring_NoRegister();
	MOVEITEDITOR_API UClass* Z_Construct_UClass_UAnimGraphNode_TraversalSpring();
	MOVEITEDITOR_API UClass* Z_Construct_UClass_UAnimGraphNode_LocalSkeletalControlBase();
	UPackage* Z_Construct_UPackage__Script_MoveItEditor();
	MOVEIT_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_TraversalSpring();
// End Cross Module References
	void UAnimGraphNode_TraversalSpring::StaticRegisterNativesUAnimGraphNode_TraversalSpring()
	{
	}
	UClass* Z_Construct_UClass_UAnimGraphNode_TraversalSpring_NoRegister()
	{
		return UAnimGraphNode_TraversalSpring::StaticClass();
	}
	struct Z_Construct_UClass_UAnimGraphNode_TraversalSpring_Statics
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
	UObject* (*const Z_Construct_UClass_UAnimGraphNode_TraversalSpring_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimGraphNode_LocalSkeletalControlBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MoveItEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_TraversalSpring_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AnimGraphNode_TraversalSpring.h" },
		{ "ModuleRelativePath", "Public/AnimGraphNode_TraversalSpring.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_TraversalSpring_Statics::NewProp_Node_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/AnimGraphNode_TraversalSpring.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimGraphNode_TraversalSpring_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimGraphNode_TraversalSpring, Node), Z_Construct_UScriptStruct_FAnimNode_TraversalSpring, METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_TraversalSpring_Statics::NewProp_Node_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_TraversalSpring_Statics::NewProp_Node_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimGraphNode_TraversalSpring_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimGraphNode_TraversalSpring_Statics::NewProp_Node,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimGraphNode_TraversalSpring_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimGraphNode_TraversalSpring>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAnimGraphNode_TraversalSpring_Statics::ClassParams = {
		&UAnimGraphNode_TraversalSpring::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnimGraphNode_TraversalSpring_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_TraversalSpring_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_TraversalSpring_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_TraversalSpring_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimGraphNode_TraversalSpring()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAnimGraphNode_TraversalSpring_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAnimGraphNode_TraversalSpring, 3705411708);
	template<> MOVEITEDITOR_API UClass* StaticClass<UAnimGraphNode_TraversalSpring>()
	{
		return UAnimGraphNode_TraversalSpring::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimGraphNode_TraversalSpring(Z_Construct_UClass_UAnimGraphNode_TraversalSpring, &UAnimGraphNode_TraversalSpring::StaticClass, TEXT("/Script/MoveItEditor"), TEXT("UAnimGraphNode_TraversalSpring"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimGraphNode_TraversalSpring);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
