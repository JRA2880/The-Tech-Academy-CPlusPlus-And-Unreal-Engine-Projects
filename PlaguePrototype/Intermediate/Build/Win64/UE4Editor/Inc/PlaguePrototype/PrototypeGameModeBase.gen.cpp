// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlaguePrototype/PrototypeGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePrototypeGameModeBase() {}
// Cross Module References
	PLAGUEPROTOTYPE_API UClass* Z_Construct_UClass_APrototypeGameModeBase_NoRegister();
	PLAGUEPROTOTYPE_API UClass* Z_Construct_UClass_APrototypeGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_PlaguePrototype();
// End Cross Module References
	static FName NAME_APrototypeGameModeBase_IncreasePlayerScore = FName(TEXT("IncreasePlayerScore"));
	void APrototypeGameModeBase::IncreasePlayerScore()
	{
		ProcessEvent(FindFunctionChecked(NAME_APrototypeGameModeBase_IncreasePlayerScore),NULL);
	}
	static FName NAME_APrototypeGameModeBase_SpawnNewZombie = FName(TEXT("SpawnNewZombie"));
	void APrototypeGameModeBase::SpawnNewZombie()
	{
		ProcessEvent(FindFunctionChecked(NAME_APrototypeGameModeBase_SpawnNewZombie),NULL);
	}
	void APrototypeGameModeBase::StaticRegisterNativesAPrototypeGameModeBase()
	{
	}
	struct Z_Construct_UFunction_APrototypeGameModeBase_IncreasePlayerScore_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APrototypeGameModeBase_IncreasePlayerScore_Statics::Function_MetaDataParams[] = {
		{ "Category", "Score" },
		{ "ModuleRelativePath", "PrototypeGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APrototypeGameModeBase_IncreasePlayerScore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APrototypeGameModeBase, nullptr, "IncreasePlayerScore", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APrototypeGameModeBase_IncreasePlayerScore_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APrototypeGameModeBase_IncreasePlayerScore_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APrototypeGameModeBase_IncreasePlayerScore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APrototypeGameModeBase_IncreasePlayerScore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APrototypeGameModeBase_SpawnNewZombie_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APrototypeGameModeBase_SpawnNewZombie_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic" },
		{ "ModuleRelativePath", "PrototypeGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APrototypeGameModeBase_SpawnNewZombie_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APrototypeGameModeBase, nullptr, "SpawnNewZombie", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APrototypeGameModeBase_SpawnNewZombie_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APrototypeGameModeBase_SpawnNewZombie_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APrototypeGameModeBase_SpawnNewZombie()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APrototypeGameModeBase_SpawnNewZombie_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_APrototypeGameModeBase_NoRegister()
	{
		return APrototypeGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_APrototypeGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APrototypeGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_PlaguePrototype,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APrototypeGameModeBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APrototypeGameModeBase_IncreasePlayerScore, "IncreasePlayerScore" }, // 778884517
		{ &Z_Construct_UFunction_APrototypeGameModeBase_SpawnNewZombie, "SpawnNewZombie" }, // 2297438401
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APrototypeGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "PrototypeGameModeBase.h" },
		{ "ModuleRelativePath", "PrototypeGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APrototypeGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APrototypeGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APrototypeGameModeBase_Statics::ClassParams = {
		&APrototypeGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_APrototypeGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APrototypeGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APrototypeGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APrototypeGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APrototypeGameModeBase, 936432286);
	template<> PLAGUEPROTOTYPE_API UClass* StaticClass<APrototypeGameModeBase>()
	{
		return APrototypeGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APrototypeGameModeBase(Z_Construct_UClass_APrototypeGameModeBase, &APrototypeGameModeBase::StaticClass, TEXT("/Script/PlaguePrototype"), TEXT("APrototypeGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APrototypeGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
