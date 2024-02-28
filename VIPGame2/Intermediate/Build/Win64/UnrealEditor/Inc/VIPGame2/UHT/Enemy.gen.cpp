// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VIPGame2/Enemy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemy() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_VIPGame2();
	VIPGAME2_API UClass* Z_Construct_UClass_UEnemy();
	VIPGAME2_API UClass* Z_Construct_UClass_UEnemy_NoRegister();
// End Cross Module References
	void UEnemy::StaticRegisterNativesUEnemy()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEnemy);
	UClass* Z_Construct_UClass_UEnemy_NoRegister()
	{
		return UEnemy::StaticClass();
	}
	struct Z_Construct_UClass_UEnemy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEnemy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_VIPGame2,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnemy_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemy_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Enemy.h" },
		{ "ModuleRelativePath", "Enemy.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEnemy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnemy>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEnemy_Statics::ClassParams = {
		&UEnemy::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEnemy_Statics::Class_MetaDataParams), Z_Construct_UClass_UEnemy_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UEnemy()
	{
		if (!Z_Registration_Info_UClass_UEnemy.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEnemy.OuterSingleton, Z_Construct_UClass_UEnemy_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEnemy.OuterSingleton;
	}
	template<> VIPGAME2_API UClass* StaticClass<UEnemy>()
	{
		return UEnemy::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEnemy);
	UEnemy::~UEnemy() {}
	struct Z_CompiledInDeferFile_FID_GitHubRepos_VIPGame2_VIPGame2_Source_VIPGame2_Enemy_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHubRepos_VIPGame2_VIPGame2_Source_VIPGame2_Enemy_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEnemy, UEnemy::StaticClass, TEXT("UEnemy"), &Z_Registration_Info_UClass_UEnemy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEnemy), 566990241U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHubRepos_VIPGame2_VIPGame2_Source_VIPGame2_Enemy_h_2274844254(TEXT("/Script/VIPGame2"),
		Z_CompiledInDeferFile_FID_GitHubRepos_VIPGame2_VIPGame2_Source_VIPGame2_Enemy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHubRepos_VIPGame2_VIPGame2_Source_VIPGame2_Enemy_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
