#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Player_ForUI

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_structs.hpp"
#include "Pal_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Player_ForUI.BP_Player_ForUI_C
// 0x0050 (0x02F0 - 0x02A0)
class ABP_Player_ForUI_C final : public APalUIDisplayCharacter
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02A0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UPalSkeletalMeshComponent*              Hair;                                              // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPalSkeletalMeshComponent*              Head;                                              // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       Sphere;                                            // 0x02B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnAppliedBodyMesh;                                 // 0x02C0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnAppliedHeadMesh;                                 // 0x02D0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnAppliedHairMesh;                                 // 0x02E0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void CopyWeapon(class UClass* WeaponClass);
	void ExecuteUbergraph_BP_Player_ForUI(int32 EntryPoint);
	void OnAppliedBodyMesh__DelegateSignature(const struct FLinearColor& BodyMeshBasColor);
	void OnAppliedBodyMesh_Binded(const class UPalSkeletalMeshComponent* SkeletalMeshComponent);
	void OnAppliedHairMesh__DelegateSignature(const struct FLinearColor& HairMeshBaseColor);
	void OnAppliedHairMesh_Binded(const class UPalSkeletalMeshComponent* SkeletalMeshComponent);
	void OnAppliedHeadMesh__DelegateSignature(const struct FLinearColor& BrowMeshBaseColor, const struct FLinearColor& EyeMeshBaseColor);
	void OnAppliedHeadMesh_Binded(const class UPalSkeletalMeshComponent* SkeletalMeshComponent);
	void ReceiveBeginPlay();
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Player_ForUI_C">();
	}
	static class ABP_Player_ForUI_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Player_ForUI_C>();
	}
};
static_assert(alignof(ABP_Player_ForUI_C) == 0x000008, "Wrong alignment on ABP_Player_ForUI_C");
static_assert(sizeof(ABP_Player_ForUI_C) == 0x0002F0, "Wrong size on ABP_Player_ForUI_C");
static_assert(offsetof(ABP_Player_ForUI_C, UberGraphFrame) == 0x0002A0, "Member 'ABP_Player_ForUI_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_Player_ForUI_C, Hair) == 0x0002A8, "Member 'ABP_Player_ForUI_C::Hair' has a wrong offset!");
static_assert(offsetof(ABP_Player_ForUI_C, Head) == 0x0002B0, "Member 'ABP_Player_ForUI_C::Head' has a wrong offset!");
static_assert(offsetof(ABP_Player_ForUI_C, Sphere) == 0x0002B8, "Member 'ABP_Player_ForUI_C::Sphere' has a wrong offset!");
static_assert(offsetof(ABP_Player_ForUI_C, OnAppliedBodyMesh) == 0x0002C0, "Member 'ABP_Player_ForUI_C::OnAppliedBodyMesh' has a wrong offset!");
static_assert(offsetof(ABP_Player_ForUI_C, OnAppliedHeadMesh) == 0x0002D0, "Member 'ABP_Player_ForUI_C::OnAppliedHeadMesh' has a wrong offset!");
static_assert(offsetof(ABP_Player_ForUI_C, OnAppliedHairMesh) == 0x0002E0, "Member 'ABP_Player_ForUI_C::OnAppliedHairMesh' has a wrong offset!");

}

