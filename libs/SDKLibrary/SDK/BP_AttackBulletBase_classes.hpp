#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AttackBulletBase

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_structs.hpp"
#include "Pal_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_AttackBulletBase.BP_AttackBulletBase_C
// 0x0008 (0x0370 - 0x0368)
class ABP_AttackBulletBase_C : public APalBullet
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0368(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_BP_AttackBulletBase(int32 EntryPoint);
	void GetBulletAttackType(EPalAttackType* AttackType);
	void GetBulletElementType(EPalElementType* NewParam);
	void GetEffectType(EPalAdditionalEffectType* Effect);
	void GetEffectValue(int32* Value);
	void GetExplosionClass(class UClass** ExplosionClass);
	void GetOverrideNetworkOwner(class AActor** Actor);
	void GetOwnerActor(class AActor** OwnerActor);
	void OnHitToActor(class UPrimitiveComponent* HitComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FHitResult& Hit);
	void ReceiveTick(float DeltaSeconds);
	bool SetBulletHoleDecal(const struct FHitResult& Hit, float LifeSpan, float FadeTime, float FadeScreenSize);
	void SpawnBulletHole(const struct FHitResult& Hit_Result);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AttackBulletBase_C">();
	}
	static class ABP_AttackBulletBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_AttackBulletBase_C>();
	}
};
static_assert(alignof(ABP_AttackBulletBase_C) == 0x000008, "Wrong alignment on ABP_AttackBulletBase_C");
static_assert(sizeof(ABP_AttackBulletBase_C) == 0x000370, "Wrong size on ABP_AttackBulletBase_C");
static_assert(offsetof(ABP_AttackBulletBase_C, UberGraphFrame) == 0x000368, "Member 'ABP_AttackBulletBase_C::UberGraphFrame' has a wrong offset!");

}
