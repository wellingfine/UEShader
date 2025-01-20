// Copyright Epic Games, Inc. All Rights Reserved.

#include "UEShader.h"
#include "Modules/ModuleManager.h"
#include "Misc/Paths.h"  

void FShaderLabModule::StartupModule() {
	FString ShaderDirectory = FPaths::Combine(FPaths::ProjectDir(), TEXT("Shaders"));
	AddShaderSourceDirectoryMapping("/Project", ShaderDirectory);
}

void FShaderLabModule::ShutdownModule(){
	ResetAllShaderSourceDirectoryMappings();
}

IMPLEMENT_PRIMARY_GAME_MODULE(FShaderLabModule, UEShader, "UEShader");
IMPLEMENT_PRIMARY_GAME_MODULE( FDefaultGameModuleImpl, UEShader, "UEShader" );
