// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MoveItEditor/Public/AnimGraphNode_AdditiveBlendSpace.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimGraphNode_AdditiveBlendSpace() {}
// Cross Module References
	MOVEITEDITOR_API UClass* Z_Construct_UClass_UAnimGraphNode_AdditiveBlendSpace_NoRegister();
	MOVEITEDITOR_API UClass* Z_Construct_UClass_UAnimGraphNode_AdditiveBlendSpace();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_Base();
	UPackage* Z_Construct_UPackage__Script_MoveItEditor();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimationGroupReference();
// End Cross Module References
	void UAnimGraphNode_AdditiveBlendSpace::StaticRegisterNativesUAnimGraphNode_AdditiveBlendSpace()
	{
	}
	UClass* Z_Construct_UClass_UAnimGraphNode_AdditiveBlendSpace_NoRegister()
	{
		return UAnimGraphNode_AdditiveBlendSpace::StaticClass();
	}
	struct Z_Construct_UClass_UAnimGraphNode_AdditiveBlendSpace_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SyncGroup_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SyncGroup;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimGraphNode_AdditiveBlendSpace_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimGraphNode_Base,
		(UObject* (*)())Z_Construct_UPackage__Script_MoveItEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_AdditiveBlendSpace_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AnimGraphNode_AdditiveBlendSpace.h" },
		{ "ModuleRelativePath", "Public/AnimGraphNode_AdditiveBlendSpace.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_AdditiveBlendSpace_Statics::NewProp_SyncGroup_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Sync group settings for this player.  Sync groups keep related animations with different lengths synchronized.\n" },
		{ "ModuleRelativePath", "Public/AnimGraphNode_AdditiveBlendSpace.h" },
		{ "ToolTip", "Sync group settings for this player.  Sync groups keep related animations with different lengths synchronized." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimGraphNode_AdditiveBlendSpace_Statics::NewProp_SyncGroup = { "SyncGroup", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimGraphNode_AdditiveBlendSpace, SyncGroup), Z_Construct_UScriptStruct_FAnimationGroupReference, METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_AdditiveBlendSpace_Statics::NewProp_SyncGroup_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_AdditiveBlendSpace_Statics::NewProp_SyncGroup_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimGraphNode_AdditiveBlendSpace_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimGraphNode_AdditiveBlendSpace_Statics::NewProp_SyncGroup,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimGraphNode_AdditiveBlendSpace_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimGraphNode_AdditiveBlendSpace>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAnimGraphNode_AdditiveBlendSpace_Statics::ClassParams = {
		&UAnimGraphNode_AdditiveBlendSpace::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnimGraphNode_AdditiveBlendSpace_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_AdditiveBlendSpace_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_AdditiveBlendSpace_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_AdditiveBlendSpace_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimGraphNode_AdditiveBlendSpace()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAnimGraphNode_AdditiveBlendSpace_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAnimGraphNode_AdditiveBlendSpace, 3581767496);
	template<> MOVEITEDITOR_API UClass* StaticClass<UAnimGraphNode_AdditiveBlendSpace>()
	{
		return UAnimGraphNode_AdditiveBlendSpace::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimGraphNode_AdditiveBlendSpace(Z_Construct_UClass_UAnimGraphNode_AdditiveBlendSpace, &UAnimGraphNode_AdditiveBlendSpace::StaticClass, TEXT("/Script/MoveItEditor"), TEXT("UAnimGraphNode_AdditiveBlendSpace"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimGraphNode_AdditiveBlendSpace);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
