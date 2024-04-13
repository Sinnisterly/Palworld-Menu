#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_NPCWeaponGenerator

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_NPCWeaponGenerator.BP_NPCWeaponGenerator_C
// 0x0008 (0x00A0 - 0x0098)
class UBP_NPCWeaponGenerator_C final : public UPalNPCWeaponGenerator
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0098(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_BP_NPCWeaponGenerator(int32 EntryPoint);
	void OnSpawnEvent(class APalWeaponBase* WeaponActor);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_NPCWeaponGenerator_C">();
	}
	static class UBP_NPCWeaponGenerator_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_NPCWeaponGenerator_C>();
	}
};
static_assert(alignof(UBP_NPCWeaponGenerator_C) == 0x000008, "Wrong alignment on UBP_NPCWeaponGenerator_C");
static_assert(sizeof(UBP_NPCWeaponGenerator_C) == 0x0000A0, "Wrong size on UBP_NPCWeaponGenerator_C");
static_assert(offsetof(UBP_NPCWeaponGenerator_C, UberGraphFrame) == 0x000098, "Member 'UBP_NPCWeaponGenerator_C::UberGraphFrame' has a wrong offset!");

}

