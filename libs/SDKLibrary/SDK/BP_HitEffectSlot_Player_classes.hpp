#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_HitEffectSlot_Player

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_structs.hpp"
#include "Pal_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_HitEffectSlot_Player.BP_HitEffectSlot_Player_C
// 0x0018 (0x0040 - 0x0028)
class UBP_HitEffectSlot_Player_C final : public UPalHitEffectSlot
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0028(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	TArray<class UNiagaraSystem*>                 LoadCache;                                         // 0x0030(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_BP_HitEffectSlot_Player(int32 EntryPoint);
	void LoadAndPlayEffect(TSoftObjectPtr<class UNiagaraSystem> EffectPath, const struct FTransform& Transform);
	void OnLoaded_9E6C8F9D4F39DAEE12ED13A974550770(class UObject* Loaded);
	void PlayHitEffect(const struct FPalDamageInfo& Info);
	void SpawnElementalHitEffectBullet(EPalElementType Element, const struct FVector& Location, double EffectScale);
	void SpawnElementalHitEffectFar(EPalElementType Element, const struct FVector& Location, double EffectScale, bool IsPoison);
	void SpawnElementalHitEffectNear(EPalElementType Element, const struct FVector& Location, double EffectScale);
	void SpawnSneakAttackEffect(const struct FVector& Location);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_HitEffectSlot_Player_C">();
	}
	static class UBP_HitEffectSlot_Player_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_HitEffectSlot_Player_C>();
	}
};
static_assert(alignof(UBP_HitEffectSlot_Player_C) == 0x000008, "Wrong alignment on UBP_HitEffectSlot_Player_C");
static_assert(sizeof(UBP_HitEffectSlot_Player_C) == 0x000040, "Wrong size on UBP_HitEffectSlot_Player_C");
static_assert(offsetof(UBP_HitEffectSlot_Player_C, UberGraphFrame) == 0x000028, "Member 'UBP_HitEffectSlot_Player_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_HitEffectSlot_Player_C, LoadCache) == 0x000030, "Member 'UBP_HitEffectSlot_Player_C::LoadCache' has a wrong offset!");

}

