#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_DebugMissWazaBullet

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_DebugMissWazaBullet.BP_DebugMissWazaBullet_C
// 0x0020 (0x02B0 - 0x0290)
class ABP_DebugMissWazaBullet_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0290(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                      Niagara;                                           // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                        Timer;                                             // 0x02A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_DebugMissWazaBullet(int32 EntryPoint);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_DebugMissWazaBullet_C">();
	}
	static class ABP_DebugMissWazaBullet_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_DebugMissWazaBullet_C>();
	}
};
static_assert(alignof(ABP_DebugMissWazaBullet_C) == 0x000008, "Wrong alignment on ABP_DebugMissWazaBullet_C");
static_assert(sizeof(ABP_DebugMissWazaBullet_C) == 0x0002B0, "Wrong size on ABP_DebugMissWazaBullet_C");
static_assert(offsetof(ABP_DebugMissWazaBullet_C, UberGraphFrame) == 0x000290, "Member 'ABP_DebugMissWazaBullet_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_DebugMissWazaBullet_C, Niagara) == 0x000298, "Member 'ABP_DebugMissWazaBullet_C::Niagara' has a wrong offset!");
static_assert(offsetof(ABP_DebugMissWazaBullet_C, DefaultSceneRoot) == 0x0002A0, "Member 'ABP_DebugMissWazaBullet_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_DebugMissWazaBullet_C, Timer) == 0x0002A8, "Member 'ABP_DebugMissWazaBullet_C::Timer' has a wrong offset!");

}

