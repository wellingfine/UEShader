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

// 默认的要注释掉，不然会出现【重定义多次初始化】
// IMPLEMENT_PRIMARY_GAME_MODULE( FDefaultGameModuleImpl, UEShader, "UEShader" );
