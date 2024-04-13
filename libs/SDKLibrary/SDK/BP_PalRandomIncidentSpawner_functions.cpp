#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PalRandomIncidentSpawner

#include "Basic.hpp"

#include "BP_PalRandomIncidentSpawner_classes.hpp"
#include "BP_PalRandomIncidentSpawner_parameters.hpp"


namespace SDK
{

// Function BP_PalRandomIncidentSpawner.BP_PalRandomIncidentSpawner_C.AddWalkPath
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             PathName                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>                   PointList                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_PalRandomIncidentSpawner_C::AddWalkPath(const class FName& PathName, const TArray<class AActor*>& PointList)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalRandomIncidentSpawner_C", "AddWalkPath");

	Params::BP_PalRandomIncidentSpawner_C_AddWalkPath Parms{};

	Parms.PathName = PathName;
	Parms.PointList = std::move(PointList);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalRandomIncidentSpawner.BP_PalRandomIncidentSpawner_C.Collect Walk Path Point
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USceneComponent*                  SceneRoot                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>                   Actors                                                 (Parm, OutParm)

void ABP_PalRandomIncidentSpawner_C::Collect_Walk_Path_Point(class USceneComponent* SceneRoot, TArray<class AActor*>* Actors)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalRandomIncidentSpawner_C", "Collect Walk Path Point");

	Params::BP_PalRandomIncidentSpawner_C_Collect_Walk_Path_Point Parms{};

	Parms.SceneRoot = SceneRoot;

	UObject::ProcessEvent(Func, &Parms);

	if (Actors != nullptr)
		*Actors = std::move(Parms.Actors);
}


// Function BP_PalRandomIncidentSpawner.BP_PalRandomIncidentSpawner_C.Create Walk Path
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class AActor*>                   PointArray                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FF_NPC_PathWalkArray             PathArray                                              (Parm, OutParm, HasGetValueTypeHash)

void ABP_PalRandomIncidentSpawner_C::Create_Walk_Path(TArray<class AActor*>& PointArray, struct FF_NPC_PathWalkArray* PathArray)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalRandomIncidentSpawner_C", "Create Walk Path");

	Params::BP_PalRandomIncidentSpawner_C_Create_Walk_Path Parms{};

	Parms.PointArray = std::move(PointArray);

	UObject::ProcessEvent(Func, &Parms);

	PointArray = std::move(Parms.PointArray);

	if (PathArray != nullptr)
		*PathArray = std::move(Parms.PathArray);
}


// Function BP_PalRandomIncidentSpawner.BP_PalRandomIncidentSpawner_C.CreateDebugShape
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  Delta                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PalRandomIncidentSpawner_C::CreateDebugShape(double Delta)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalRandomIncidentSpawner_C", "CreateDebugShape");

	Params::BP_PalRandomIncidentSpawner_C_CreateDebugShape Parms{};

	Parms.Delta = Delta;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalRandomIncidentSpawner.BP_PalRandomIncidentSpawner_C.DestroyCollisionComponents
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PalRandomIncidentSpawner_C::DestroyCollisionComponents()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalRandomIncidentSpawner_C", "DestroyCollisionComponents");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PalRandomIncidentSpawner.BP_PalRandomIncidentSpawner_C.EditorSetup_WalkPointRef
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_PalRandomIncidentSpawner_C::EditorSetup_WalkPointRef()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalRandomIncidentSpawner_C", "EditorSetup_WalkPointRef");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PalRandomIncidentSpawner.BP_PalRandomIncidentSpawner_C.ExecuteUbergraph_BP_PalRandomIncidentSpawner
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PalRandomIncidentSpawner_C::ExecuteUbergraph_BP_PalRandomIncidentSpawner(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalRandomIncidentSpawner_C", "ExecuteUbergraph_BP_PalRandomIncidentSpawner");

	Params::BP_PalRandomIncidentSpawner_C_ExecuteUbergraph_BP_PalRandomIncidentSpawner Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalRandomIncidentSpawner.BP_PalRandomIncidentSpawner_C.OnIncidentNotify
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalIncidentNotifyListener*       Listener                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// EPalIncidentState                       IncidentState                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPalIncidentNotifyParameter      Param_Parameter                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void ABP_PalRandomIncidentSpawner_C::OnIncidentNotify(class UPalIncidentNotifyListener* Listener, EPalIncidentState IncidentState, const struct FPalIncidentNotifyParameter& Param_Parameter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalRandomIncidentSpawner_C", "OnIncidentNotify");

	Params::BP_PalRandomIncidentSpawner_C_OnIncidentNotify Parms{};

	Parms.Listener = Listener;
	Parms.IncidentState = IncidentState;
	Parms.Param_Parameter = std::move(Param_Parameter);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalRandomIncidentSpawner.BP_PalRandomIncidentSpawner_C.OnIncidentSpawned
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UPalIncidentBase*                 Incident                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalIncidentDynamicParameterRandom*DynamicParameter                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_PalRandomIncidentSpawner_C::OnIncidentSpawned(class UPalIncidentBase* Incident, class UPalIncidentDynamicParameterRandom* DynamicParameter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalRandomIncidentSpawner_C", "OnIncidentSpawned");

	Params::BP_PalRandomIncidentSpawner_C_OnIncidentSpawned Parms{};

	Parms.Incident = Incident;
	Parms.DynamicParameter = DynamicParameter;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalRandomIncidentSpawner.BP_PalRandomIncidentSpawner_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_PalRandomIncidentSpawner_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalRandomIncidentSpawner_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PalRandomIncidentSpawner.BP_PalRandomIncidentSpawner_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PalRandomIncidentSpawner_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalRandomIncidentSpawner_C", "ReceiveTick");

	Params::BP_PalRandomIncidentSpawner_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalRandomIncidentSpawner.BP_PalRandomIncidentSpawner_C.ReleaseIncident
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PalRandomIncidentSpawner_C::ReleaseIncident()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalRandomIncidentSpawner_C", "ReleaseIncident");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PalRandomIncidentSpawner.BP_PalRandomIncidentSpawner_C.SetAreaRadiuses
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PalRandomIncidentSpawner_C::SetAreaRadiuses()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalRandomIncidentSpawner_C", "SetAreaRadiuses");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PalRandomIncidentSpawner.BP_PalRandomIncidentSpawner_C.SetupIncident
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalIncidentBase*                 Incident                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalIncidentDynamicParameterRandom*Param_Parameter                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_PalRandomIncidentSpawner_C::SetupIncident(class UPalIncidentBase* Incident, class UPalIncidentDynamicParameterRandom* Param_Parameter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalRandomIncidentSpawner_C", "SetupIncident");

	Params::BP_PalRandomIncidentSpawner_C_SetupIncident Parms{};

	Parms.Incident = Incident;
	Parms.Param_Parameter = Param_Parameter;

	UObject::ProcessEvent(Func, &Parms);
}

}

