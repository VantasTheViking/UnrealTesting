// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyProject2_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_MyProject2;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_MyProject2()
	{
		if (!Z_Registration_Info_UPackage__Script_MyProject2.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/MyProject2",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x83BFA57B,
				0x7E03CA0B,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_MyProject2.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_MyProject2.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_MyProject2(Z_Construct_UPackage__Script_MyProject2, TEXT("/Script/MyProject2"), Z_Registration_Info_UPackage__Script_MyProject2, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x83BFA57B, 0x7E03CA0B));
PRAGMA_ENABLE_DEPRECATION_WARNINGS