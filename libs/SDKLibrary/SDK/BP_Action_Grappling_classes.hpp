#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Action_Grappling

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "Pal_structs.hpp"
#include "Pal_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Action_Grappling.BP_Action_Grappling_C
// 0x01C0 (0x0300 - 0x0140)
class UBP_Action_Grappling_C final : public UPalActionBase
{
public:
	uint8                                         Pad_3B50[0x8];                                     // 0x0138(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0140(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	double                                        MoveSpeed;                                         // 0x0148(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                TargetLocation;                                    // 0x0150(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   FlagName;                                          // 0x0168(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             Out_Hit;                                           // 0x0170(0x00E8)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          IsClimb;                                           // 0x0258(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3B51[0x7];                                     // 0x0259(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                MoveVec;                                           // 0x0260(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsJumping;                                         // 0x0278(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3B52[0x7];                                     // 0x0279(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                Move_End_Location;                                 // 0x0280(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        DelaySpeedRate;                                    // 0x0298(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CurrentTime;                                       // 0x02A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                PrevLocation;                                      // 0x02A8(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CurrentVelocity;                                   // 0x02C0(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        JumpPower;                                         // 0x02D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        ReleaseVelocityRare;                               // 0x02E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        EasingTime;                                        // 0x02E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsEndCompleted;                                    // 0x02F0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void CalcCurrentVelocity(float DeltaTime);
	void CalcMoveVector(const struct FVector& PlayerLocation, double DeltaTime, struct FVector* Param_MoveVec);
	void CanClamb(bool* Result);
	void Disable_Movement(bool Disable);
	void DisableShooter(bool Disable);
	void ExecuteUbergraph_BP_Action_Grappling(int32 EntryPoint);
	void GetCurrentSpeed(double* CurrentSpeed);
	struct FVector GetReleaseVelocity();
	void IsMoveingEnd(const struct FVector& PlayerLocation, double InCapsuleRadius, double InCapsuleHelfHeight, bool* IsMovingEnd);
	void IsPlayerFalling(bool* IsFalling);
	void LookAtTargetLocation(float DeltaTime);
	void NotifyFinishToWeapon();
	void NotifyStartToWeapon();
	void OnBeginAction();
	void OnBlendOut_2F3E188F4888411060D43AB280C66179(class FName NotifyName);
	void OnBreakAction();
	void OnCompleted_2F3E188F4888411060D43AB280C66179(class FName NotifyName);
	void OnEndAction();
	void OnInterrupted_2F3E188F4888411060D43AB280C66179(class FName NotifyName);
	void OnNotifyBegin_2F3E188F4888411060D43AB280C66179(class FName NotifyName);
	void OnNotifyEnd_2F3E188F4888411060D43AB280C66179(class FName NotifyName);
	void SetGravityDisable(bool IsDisable);
	void SetPlayerVelocity(const struct FVector& Velocity);
	void TickAction(float DeltaTime);
	void UpdateGraplingMove(float DeltaTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Action_Grappling_C">();
	}
	static class UBP_Action_Grappling_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_Action_Grappling_C>();
	}
};
static_assert(alignof(UBP_Action_Grappling_C) == 0x000010, "Wrong alignment on UBP_Action_Grappling_C");
static_assert(sizeof(UBP_Action_Grappling_C) == 0x000300, "Wrong size on UBP_Action_Grappling_C");
static_assert(offsetof(UBP_Action_Grappling_C, UberGraphFrame) == 0x000140, "Member 'UBP_Action_Grappling_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_Action_Grappling_C, MoveSpeed) == 0x000148, "Member 'UBP_Action_Grappling_C::MoveSpeed' has a wrong offset!");
static_assert(offsetof(UBP_Action_Grappling_C, TargetLocation) == 0x000150, "Member 'UBP_Action_Grappling_C::TargetLocation' has a wrong offset!");
static_assert(offsetof(UBP_Action_Grappling_C, FlagName) == 0x000168, "Member 'UBP_Action_Grappling_C::FlagName' has a wrong offset!");
static_assert(offsetof(UBP_Action_Grappling_C, Out_Hit) == 0x000170, "Member 'UBP_Action_Grappling_C::Out_Hit' has a wrong offset!");
static_assert(offsetof(UBP_Action_Grappling_C, IsClimb) == 0x000258, "Member 'UBP_Action_Grappling_C::IsClimb' has a wrong offset!");
static_assert(offsetof(UBP_Action_Grappling_C, MoveVec) == 0x000260, "Member 'UBP_Action_Grappling_C::MoveVec' has a wrong offset!");
static_assert(offsetof(UBP_Action_Grappling_C, IsJumping) == 0x000278, "Member 'UBP_Action_Grappling_C::IsJumping' has a wrong offset!");
static_assert(offsetof(UBP_Action_Grappling_C, Move_End_Location) == 0x000280, "Member 'UBP_Action_Grappling_C::Move_End_Location' has a wrong offset!");
static_assert(offsetof(UBP_Action_Grappling_C, DelaySpeedRate) == 0x000298, "Member 'UBP_Action_Grappling_C::DelaySpeedRate' has a wrong offset!");
static_assert(offsetof(UBP_Action_Grappling_C, CurrentTime) == 0x0002A0, "Member 'UBP_Action_Grappling_C::CurrentTime' has a wrong offset!");
static_assert(offsetof(UBP_Action_Grappling_C, PrevLocation) == 0x0002A8, "Member 'UBP_Action_Grappling_C::PrevLocation' has a wrong offset!");
static_assert(offsetof(UBP_Action_Grappling_C, CurrentVelocity) == 0x0002C0, "Member 'UBP_Action_Grappling_C::CurrentVelocity' has a wrong offset!");
static_assert(offsetof(UBP_Action_Grappling_C, JumpPower) == 0x0002D8, "Member 'UBP_Action_Grappling_C::JumpPower' has a wrong offset!");
static_assert(offsetof(UBP_Action_Grappling_C, ReleaseVelocityRare) == 0x0002E0, "Member 'UBP_Action_Grappling_C::ReleaseVelocityRare' has a wrong offset!");
static_assert(offsetof(UBP_Action_Grappling_C, EasingTime) == 0x0002E8, "Member 'UBP_Action_Grappling_C::EasingTime' has a wrong offset!");
static_assert(offsetof(UBP_Action_Grappling_C, IsEndCompleted) == 0x0002F0, "Member 'UBP_Action_Grappling_C::IsEndCompleted' has a wrong offset!");

}
