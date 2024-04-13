#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AudioAnalyzer

#include "Basic.hpp"

#include "AudioAnalyzer_classes.hpp"
#include "AudioAnalyzer_parameters.hpp"


namespace SDK
{

// Function AudioAnalyzer.AudioAnalyzer.StartAnalyzing
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                          WorldContextObject                                     (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAudioBus*                        AudioBusToAnalyze                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAudioAnalyzer::StartAnalyzing(const class UObject* WorldContextObject, class UAudioBus* AudioBusToAnalyze)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AudioAnalyzer", "StartAnalyzing");

	Params::AudioAnalyzer_StartAnalyzing Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.AudioBusToAnalyze = AudioBusToAnalyze;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function AudioAnalyzer.AudioAnalyzer.StopAnalyzing
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                          WorldContextObject                                     (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAudioAnalyzer::StopAnalyzing(const class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AudioAnalyzer", "StopAnalyzing");

	Params::AudioAnalyzer_StopAnalyzing Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}

