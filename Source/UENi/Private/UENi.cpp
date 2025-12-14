// Copyright Epic Games, Inc. All Rights Reserved.

#include "UENi.h"
#include "UENi/public/common.h"

#define LOCTEXT_NAMESPACE "FUENiModule"

void FUENiModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
}

void FUENiModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FUENiModule, UENi)


#ifdef NI_MEMORYTRACKER
namespace NiT
{
	MemoryTracker MemoryTracker::Instance;
}
#endif