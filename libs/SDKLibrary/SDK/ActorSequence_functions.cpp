#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ActorSequence

#include "Basic.hpp"

#include "ActorSequence_classes.hpp"


namespace SDK
{

// Function ActorSequence.ActorSequenceComponent.PauseSequence
// (Final, Native, Public, BlueprintCallable)

void UActorSequenceComponent::PauseSequence()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ActorSequenceComponent", "PauseSequence");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function ActorSequence.ActorSequenceComponent.PlaySequence
// (Final, Native, Public, BlueprintCallable)

void UActorSequenceComponent::PlaySequence()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ActorSequenceComponent", "PlaySequence");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function ActorSequence.ActorSequenceComponent.StopSequence
// (Final, Native, Public, BlueprintCallable)

void UActorSequenceComponent::StopSequence()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ActorSequenceComponent", "StopSequence");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

}

