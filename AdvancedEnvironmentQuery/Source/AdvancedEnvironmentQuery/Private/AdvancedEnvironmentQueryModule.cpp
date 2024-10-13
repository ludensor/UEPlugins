// Copyright Nori. All Rights Reserved.

#include "Modules/ModuleManager.h"

class FAdvancedEnvironmentQueryModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};

#define LOCTEXT_NAMESPACE "FAdvancedEnvironmentQueryModule"

void FAdvancedEnvironmentQueryModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
}

void FAdvancedEnvironmentQueryModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
}

#undef LOCTEXT_NAMESPACE

IMPLEMENT_MODULE(FAdvancedEnvironmentQueryModule, AdvancedEnvironmentQuery)