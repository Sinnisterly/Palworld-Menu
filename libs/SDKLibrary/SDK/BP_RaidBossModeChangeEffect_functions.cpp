#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_RaidBossModeChangeEffect

#include "Basic.hpp"

#include "BP_RaidBossModeChangeEffect_classes.hpp"
#include "BP_RaidBossModeChangeEffect_parameters.hpp"


namespace SDK
{

// Function BP_RaidBossModeChangeEffect.BP_RaidBossModeChangeEffect_C.ExecuteUbergraph_BP_RaidBossModeChangeEffect
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_RaidBossModeChangeEffect_C::ExecuteUbergraph_BP_RaidBossModeChangeEffect(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RaidBossModeChangeEffect_C", "ExecuteUbergraph_BP_RaidBossModeChangeEffect");

	Params::BP_RaidBossModeChangeEffect_C_ExecuteUbergraph_BP_RaidBossModeChangeEffect Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_RaidBossModeChangeEffect.BP_RaidBossModeChangeEffect_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_RaidBossModeChangeEffect_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RaidBossModeChangeEffect_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_RaidBossModeChangeEffect.BP_RaidBossModeChangeEffect_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_RaidBossModeChangeEffect_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RaidBossModeChangeEffect_C", "ReceiveTick");

	Params::BP_RaidBossModeChangeEffect_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_RaidBossModeChangeEffect.BP_RaidBossModeChangeEffect_C.Set Target Pal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalCharacter*                    Pal                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_RaidBossModeChangeEffect_C::Set_Target_Pal(class APalCharacter* Pal)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RaidBossModeChangeEffect_C", "Set Target Pal");

	Params::BP_RaidBossModeChangeEffect_C_Set_Target_Pal Parms{};

	Parms.Pal = Pal;

	UObject::ProcessEvent(Func, &Parms);
}

}

