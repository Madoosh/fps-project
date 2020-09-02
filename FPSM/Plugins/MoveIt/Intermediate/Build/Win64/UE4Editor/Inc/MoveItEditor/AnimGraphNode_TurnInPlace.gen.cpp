// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MoveItEditor/Public/AnimGraphNode_TurnInPlace.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimGraphNode_TurnInPlace() {}
// Cross Module References
	MOVEITEDITOR_API UClass* Z_Construct_UClass_UAnimGraphNode_TurnInPlace_NoRegister();
	MOVEITEDITOR_API UClass* Z_Construct_UClass_UAnimGraphNode_TurnInPlace();
	MOVEITEDITOR_API UClass* Z_Construct_UClass_UAnimGraphNode_AdditiveBlendSpace();
	UPackage* Z_Construct_UPackage__Script_MoveItEditor();
	MOVEIT_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_TurnInPlace();
// End Cross Module References
	void UAnimGraphNode_TurnInPlace::StaticRegisterNativesUAnimGraphNode_TurnInPlace()
	{
	}
	UClass* Z_Construct_UClass_UAnimGraphNode_TurnInPlace_NoRegister()
	{
		return UAnimGraphNode_TurnInPlace::StaticClass();
	}
	struct Z_Construct_UClass_UAnimGraphNode_TurnInPlace_Statics
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
	UObject* (*const Z_Construct_UClass_UAnimGraphNode_TurnInPlace_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimGraphNode_AdditiveBlendSpace,
		(UObject* (*)())Z_Construct_UPackage__Script_MoveItEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_TurnInPlace_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AnimGraphNode_TurnInPlace.h" },
		{ "ModuleRelativePath", "Public/AnimGraphNode_TurnInPlace.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_TurnInPlace_Statics::NewProp_Node_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/AnimGraphNode_TurnInPlace.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimGraphNode_TurnInPlace_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimGraphNode_TurnInPlace, Node), Z_Construct_UScriptStruct_FAnimNode_TurnInPlace, METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_TurnInPlace_Statics::NewProp_Node_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_TurnInPlace_Statics::NewProp_Node_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimGraphNode_TurnInPlace_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimGraphNode_TurnInPlace_Statics::NewProp_Node,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimGraphNode_TurnInPlace_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimGraphNode_TurnInPlace>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAnimGraphNode_TurnInPlace_Statics::ClassParams = {
		&UAnimGraphNode_TurnInPlace::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnimGraphNode_TurnInPlace_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_TurnInPlace_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_TurnInPlace_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_TurnInPlace_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimGraphNode_TurnInPlace()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAnimGraphNode_TurnInPlace_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAnimGraphNode_TurnInPlace, 3828470472);
	template<> MOVEITEDITOR_API UClass* StaticClass<UAnimGraphNode_TurnInPlace>()
	{
		return UAnimGraphNode_TurnInPlace::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimGraphNode_TurnInPlace(Z_Construct_UClass_UAnimGraphNode_TurnInPlace, &UAnimGraphNode_TurnInPlace::StaticClass, TEXT("/Script/MoveItEditor"), TEXT("UAnimGraphNode_TurnInPlace"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimGraphNode_TurnInPlace);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
