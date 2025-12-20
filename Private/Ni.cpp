// Copyright Epic Games, Inc. All Rights Reserved.

#include "Ni.h"
#include "Ni/public/common.h"

#define LOCTEXT_NAMESPACE "FNiModule"

void FNiModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
}

void FNiModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FNiModule, Ni)


#ifdef NI_MEMORYTRACKER
namespace NiT
{
	MemoryTracker MemoryTracker::Instance;
}
#endif