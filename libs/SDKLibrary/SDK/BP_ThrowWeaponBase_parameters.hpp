#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ThrowWeaponBase

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Pal_structs.hpp"


namespace SDK::Params
{

// Function BP_ThrowWeaponBase.BP_ThrowWeaponBase_C.ChangeRideThrowMontage
// 0x0148 (0x0148 - 0x0000)
struct BP_ThrowWeaponBase_C_ChangeRideThrowMontage final
{
public:
	class UBP_ShooterAnime_ThrowBase_C*           ShooterAnime;                                      // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                           NextMontage;                                       // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CameraForward;                                     // 0x0010(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                PlayerForward;                                     // 0x0028(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalPlayerCharacter*                    Player;                                            // 0x0040(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetActorRightVector_ReturnValue;          // 0x0048(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Dot_VectorVector_ReturnValue;             // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Dot_VectorVector_ReturnValue_1;           // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue_1;       // 0x0071(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3A11[0x6];                                     // 0x0072(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_GetActorForwardVector_ReturnValue;        // 0x0078(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_GetCameraRotator_ReturnValue;             // 0x0090(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_Vector_Normal2D_ReturnValue;              // 0x00A8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GreaterGreater_VectorRotator_ReturnValue; // 0x00C0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Vector_Normal2D_ReturnValue_1;            // 0x00D8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x00F0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalPlayerCharacter*                    K2Node_DynamicCast_AsPal_Player_Character;         // 0x00F8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0100(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3A12[0x7];                                     // 0x0101(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalRiderComponent*                     CallFunc_GetComponentByClass_ReturnValue;          // 0x0108(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	EPalRidePositionType                          CallFunc_GetCurrentRidePositionType_ReturnValue;   // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsRiding_ReturnValue;                     // 0x0111(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0112(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3A13[0x5];                                     // 0x0113(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue_1;                   // 0x0118(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0120(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3A14[0x7];                                     // 0x0121(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalShooterComponent*                   CallFunc_GetComponentByClass_ReturnValue_1;        // 0x0128(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPalShooterAnimeAssetBase*              CallFunc_GetThrowAnimAsset_ReturnValue;            // 0x0130(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_ShooterAnime_ThrowBase_C*           K2Node_DynamicCast_AsBP_Shooter_Anime_Throw_Base;  // 0x0138(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0140(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ThrowWeaponBase_C_ChangeRideThrowMontage) == 0x000008, "Wrong alignment on BP_ThrowWeaponBase_C_ChangeRideThrowMontage");
static_assert(sizeof(BP_ThrowWeaponBase_C_ChangeRideThrowMontage) == 0x000148, "Wrong size on BP_ThrowWeaponBase_C_ChangeRideThrowMontage");
static_assert(offsetof(BP_ThrowWeaponBase_C_ChangeRideThrowMontage, ShooterAnime) == 0x000000, "Member 'BP_ThrowWeaponBase_C_ChangeRideThrowMontage::ShooterAnime' has a wrong offset!");
static_assert(offsetof(BP_ThrowWeaponBase_C_ChangeRideThrowMontage, NextMontage) == 0x000008, "Member 'BP_ThrowWeaponBase_C_ChangeRideThrowMontage::NextMontage' has a wrong offset!");
static_assert(offsetof(BP_ThrowWeaponBase_C_ChangeRideThrowMontage, CameraForward) == 0x000010, "Member 'BP_ThrowWeaponBase_C_ChangeRideThrowMontage::CameraForward' has a wrong offset!");
static_assert(offsetof(BP_ThrowWeaponBase_C_ChangeRideThrowMontage, PlayerForward) == 0x000028, "Member 'BP_ThrowWeaponBase_C_ChangeRideThrowMontage::PlayerForward' has a wrong offset!");
static_assert(offsetof(BP_ThrowWeaponBase_C_ChangeRideThrowMontage, Player) == 0x000040, "Member 'BP_ThrowWeaponBase_C_ChangeRideThrowMontage::Player' has a wrong offset!");
static_assert(offsetof(BP_ThrowWeaponBase_C_ChangeRideThrowMontage, CallFunc_GetActorRightVector_ReturnValue) == 0x000048, "Member 'BP_ThrowWeaponBase_C_ChangeRideThrowMontage::CallFunc_GetActorRightVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ThrowWeaponBase_C_ChangeRideThrowMontage, CallFunc_Dot_VectorVector_ReturnValue) == 0x000060, "Member 'BP_ThrowWeaponBase_C_ChangeRideThrowMontage::CallFunc_Dot_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ThrowWeaponBase_C_ChangeRideThrowMontage, CallFunc_Dot_VectorVector_ReturnValue_1) == 0x000068, "Member 'BP_ThrowWeaponBase_C_ChangeRideThrowMontage::CallFunc_Dot_VectorVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ThrowWeaponBase_C_ChangeRideThrowMontage, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x000070, "Member 'BP_ThrowWeaponBase_C_ChangeRideThrowMontage::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ThrowWeaponBase_C_ChangeRideThrowMontage, CallFunc_Greater_DoubleDouble_ReturnValue_1) == 0x000071, "Member 'BP_ThrowWeaponBase_C_ChangeRideThrowMontage::CallFunc_Greater_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ThrowWeaponBase_C_ChangeRideThrowMontage, CallFunc_GetActorForwardVector_ReturnValue) == 0x000078, "Member 'BP_ThrowWeaponBase_C_ChangeRideThrowMontage::CallFunc_GetActorForwardVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ThrowWeaponBase_C_ChangeRideThrowMontage, CallFunc_GetCameraRotator_ReturnValue) == 0x000090, "Member 'BP_ThrowWeaponBase_C_ChangeRideThrowMontage::CallFunc_GetCameraRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ThrowWeaponBase_C_ChangeRideThrowMontage, CallFunc_Vector_Normal2D_ReturnValue) == 0x0000A8, "Member 'BP_ThrowWeaponBase_C_ChangeRideThrowMontage::CallFunc_Vector_Normal2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ThrowWeaponBase_C_ChangeRideThrowMontage, CallFunc_GreaterGreater_VectorRotator_ReturnValue) == 0x0000C0, "Member 'BP_ThrowWeaponBase_C_ChangeRideThrowMontage::CallFunc_GreaterGreater_VectorRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ThrowWeaponBase_C_ChangeRideThrowMontage, CallFunc_Vector_Normal2D_ReturnValue_1) == 0x0000D8, "Member 'BP_ThrowWeaponBase_C_ChangeRideThrowMontage::CallFunc_Vector_Normal2D_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ThrowWeaponBase_C_ChangeRideThrowMontage, CallFunc_GetOwner_ReturnValue) == 0x0000F0, "Member 'BP_ThrowWeaponBase_C_ChangeRideThrowMontage::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ThrowWeaponBase_C_ChangeRideThrowMontage, K2Node_DynamicCast_AsPal_Player_Character) == 0x0000F8, "Member 'BP_ThrowWeaponBase_C_ChangeRideThrowMontage::K2Node_DynamicCast_AsPal_Player_Character' has a wrong offset!");
static_assert(offsetof(BP_ThrowWeaponBase_C_ChangeRideThrowMontage, K2Node_DynamicCast_bSuccess) == 0x000100, "Member 'BP_ThrowWeaponBase_C_ChangeRideThrowMontage::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_ThrowWeaponBase_C_ChangeRideThrowMontage, CallFunc_GetComponentByClass_ReturnValue) == 0x000108, "Member 'BP_ThrowWeaponBase_C_ChangeRideThrowMontage::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ThrowWeaponBase_C_ChangeRideThrowMontage, CallFunc_GetCurrentRidePositionType_ReturnValue) == 0x000110, "Member 'BP_ThrowWeaponBase_C_ChangeRideThrowMontage::CallFunc_GetCurrentRidePositionType_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ThrowWeaponBase_C_ChangeRideThrowMontage, CallFunc_IsRiding_ReturnValue) == 0x000111, "Member 'BP_ThrowWeaponBase_C_ChangeRideThrowMontage::CallFunc_IsRiding_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ThrowWeaponBase_C_ChangeRideThrowMontage, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000112, "Member 'BP_ThrowWeaponBase_C_ChangeRideThrowMontage::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ThrowWeaponBase_C_ChangeRideThrowMontage, CallFunc_GetOwner_ReturnValue_1) == 0x000118, "Member 'BP_ThrowWeaponBase_C_ChangeRideThrowMontage::CallFunc_GetOwner_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ThrowWeaponBase_C_ChangeRideThrowMontage, CallFunc_BooleanAND_ReturnValue) == 0x000120, "Member 'BP_ThrowWeaponBase_C_ChangeRideThrowMontage::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ThrowWeaponBase_C_ChangeRideThrowMontage, CallFunc_GetComponentByClass_ReturnValue_1) == 0x000128, "Member 'BP_ThrowWeaponBase_C_ChangeRideThrowMontage::CallFunc_GetComponentByClass_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ThrowWeaponBase_C_ChangeRideThrowMontage, CallFunc_GetThrowAnimAsset_ReturnValue) == 0x000130, "Member 'BP_ThrowWeaponBase_C_ChangeRideThrowMontage::CallFunc_GetThrowAnimAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ThrowWeaponBase_C_ChangeRideThrowMontage, K2Node_DynamicCast_AsBP_Shooter_Anime_Throw_Base) == 0x000138, "Member 'BP_ThrowWeaponBase_C_ChangeRideThrowMontage::K2Node_DynamicCast_AsBP_Shooter_Anime_Throw_Base' has a wrong offset!");
static_assert(offsetof(BP_ThrowWeaponBase_C_ChangeRideThrowMontage, K2Node_DynamicCast_bSuccess_1) == 0x000140, "Member 'BP_ThrowWeaponBase_C_ChangeRideThrowMontage::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");

// Function BP_ThrowWeaponBase.BP_ThrowWeaponBase_C.ExecuteUbergraph_BP_ThrowWeaponBase
// 0x0008 (0x0008 - 0x0000)
struct BP_ThrowWeaponBase_C_ExecuteUbergraph_BP_ThrowWeaponBase final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EWeaponNotifyType                             K2Node_Event_type;                                 // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ThrowWeaponBase_C_ExecuteUbergraph_BP_ThrowWeaponBase) == 0x000004, "Wrong alignment on BP_ThrowWeaponBase_C_ExecuteUbergraph_BP_ThrowWeaponBase");
static_assert(sizeof(BP_ThrowWeaponBase_C_ExecuteUbergraph_BP_ThrowWeaponBase) == 0x000008, "Wrong size on BP_ThrowWeaponBase_C_ExecuteUbergraph_BP_ThrowWeaponBase");
static_assert(offsetof(BP_ThrowWeaponBase_C_ExecuteUbergraph_BP_ThrowWeaponBase, EntryPoint) == 0x000000, "Member 'BP_ThrowWeaponBase_C_ExecuteUbergraph_BP_ThrowWeaponBase::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_ThrowWeaponBase_C_ExecuteUbergraph_BP_ThrowWeaponBase, K2Node_Event_type) == 0x000004, "Member 'BP_ThrowWeaponBase_C_ExecuteUbergraph_BP_ThrowWeaponBase::K2Node_Event_type' has a wrong offset!");
static_assert(offsetof(BP_ThrowWeaponBase_C_ExecuteUbergraph_BP_ThrowWeaponBase, K2Node_SwitchEnum_CmpSuccess) == 0x000005, "Member 'BP_ThrowWeaponBase_C_ExecuteUbergraph_BP_ThrowWeaponBase::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

// Function BP_ThrowWeaponBase.BP_ThrowWeaponBase_C.GetBulletShootRotation
// 0x0088 (0x0088 - 0x0000)
struct BP_ThrowWeaponBase_C_GetBulletShootRotation final
{
public:
	struct FRotator                               BulletRotate;                                      // 0x0000(0x0018)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_GetTargetLocation_Location;               // 0x0018(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_FindOwnerPalCharacter_ReturnValue;        // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalSkeletalMeshComponent*              CallFunc_GetMainMesh_ReturnValue;                  // 0x0038(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetSocketLocation_ReturnValue;            // 0x0040(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x0058(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_MakeRotFromX_ReturnValue;                 // 0x0070(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_ThrowWeaponBase_C_GetBulletShootRotation) == 0x000008, "Wrong alignment on BP_ThrowWeaponBase_C_GetBulletShootRotation");
static_assert(sizeof(BP_ThrowWeaponBase_C_GetBulletShootRotation) == 0x000088, "Wrong size on BP_ThrowWeaponBase_C_GetBulletShootRotation");
static_assert(offsetof(BP_ThrowWeaponBase_C_GetBulletShootRotation, BulletRotate) == 0x000000, "Member 'BP_ThrowWeaponBase_C_GetBulletShootRotation::BulletRotate' has a wrong offset!");
static_assert(offsetof(BP_ThrowWeaponBase_C_GetBulletShootRotation, CallFunc_GetTargetLocation_Location) == 0x000018, "Member 'BP_ThrowWeaponBase_C_GetBulletShootRotation::CallFunc_GetTargetLocation_Location' has a wrong offset!");
static_assert(offsetof(BP_ThrowWeaponBase_C_GetBulletShootRotation, CallFunc_FindOwnerPalCharacter_ReturnValue) == 0x000030, "Member 'BP_ThrowWeaponBase_C_GetBulletShootRotation::CallFunc_FindOwnerPalCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ThrowWeaponBase_C_GetBulletShootRotation, CallFunc_GetMainMesh_ReturnValue) == 0x000038, "Member 'BP_ThrowWeaponBase_C_GetBulletShootRotation::CallFunc_GetMainMesh_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ThrowWeaponBase_C_GetBulletShootRotation, CallFunc_GetSocketLocation_ReturnValue) == 0x000040, "Member 'BP_ThrowWeaponBase_C_GetBulletShootRotation::CallFunc_GetSocketLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ThrowWeaponBase_C_GetBulletShootRotation, CallFunc_Subtract_VectorVector_ReturnValue) == 0x000058, "Member 'BP_ThrowWeaponBase_C_GetBulletShootRotation::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ThrowWeaponBase_C_GetBulletShootRotation, CallFunc_MakeRotFromX_ReturnValue) == 0x000070, "Member 'BP_ThrowWeaponBase_C_GetBulletShootRotation::CallFunc_MakeRotFromX_ReturnValue' has a wrong offset!");

// Function BP_ThrowWeaponBase.BP_ThrowWeaponBase_C.GetRideMontageByDirection
// 0x0010 (0x0010 - 0x0000)
struct BP_ThrowWeaponBase_C_GetRideMontageByDirection final
{
public:
	bool                                          Suceess;                                           // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3A15[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimMontage*                           NextAnim;                                          // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ThrowWeaponBase_C_GetRideMontageByDirection) == 0x000008, "Wrong alignment on BP_ThrowWeaponBase_C_GetRideMontageByDirection");
static_assert(sizeof(BP_ThrowWeaponBase_C_GetRideMontageByDirection) == 0x000010, "Wrong size on BP_ThrowWeaponBase_C_GetRideMontageByDirection");
static_assert(offsetof(BP_ThrowWeaponBase_C_GetRideMontageByDirection, Suceess) == 0x000000, "Member 'BP_ThrowWeaponBase_C_GetRideMontageByDirection::Suceess' has a wrong offset!");
static_assert(offsetof(BP_ThrowWeaponBase_C_GetRideMontageByDirection, NextAnim) == 0x000008, "Member 'BP_ThrowWeaponBase_C_GetRideMontageByDirection::NextAnim' has a wrong offset!");

// Function BP_ThrowWeaponBase.BP_ThrowWeaponBase_C.GetTargetLocation
// 0x0048 (0x0048 - 0x0000)
struct BP_ThrowWeaponBase_C_GetTargetLocation final
{
public:
	struct FVector                                Location;                                          // 0x0000(0x0018)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetOwnerCharacter_ReturnValue;            // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalCharacterParameterComponent*        CallFunc_GetComponentByClass_ReturnValue;          // 0x0020(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetOverrideTargetLocation_ConsiderRide_ReturnValue; // 0x0028(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ThrowWeaponBase_C_GetTargetLocation) == 0x000008, "Wrong alignment on BP_ThrowWeaponBase_C_GetTargetLocation");
static_assert(sizeof(BP_ThrowWeaponBase_C_GetTargetLocation) == 0x000048, "Wrong size on BP_ThrowWeaponBase_C_GetTargetLocation");
static_assert(offsetof(BP_ThrowWeaponBase_C_GetTargetLocation, Location) == 0x000000, "Member 'BP_ThrowWeaponBase_C_GetTargetLocation::Location' has a wrong offset!");
static_assert(offsetof(BP_ThrowWeaponBase_C_GetTargetLocation, CallFunc_GetOwnerCharacter_ReturnValue) == 0x000018, "Member 'BP_ThrowWeaponBase_C_GetTargetLocation::CallFunc_GetOwnerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ThrowWeaponBase_C_GetTargetLocation, CallFunc_GetComponentByClass_ReturnValue) == 0x000020, "Member 'BP_ThrowWeaponBase_C_GetTargetLocation::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ThrowWeaponBase_C_GetTargetLocation, CallFunc_GetOverrideTargetLocation_ConsiderRide_ReturnValue) == 0x000028, "Member 'BP_ThrowWeaponBase_C_GetTargetLocation::CallFunc_GetOverrideTargetLocation_ConsiderRide_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ThrowWeaponBase_C_GetTargetLocation, CallFunc_IsValid_ReturnValue) == 0x000040, "Member 'BP_ThrowWeaponBase_C_GetTargetLocation::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function BP_ThrowWeaponBase.BP_ThrowWeaponBase_C.GetThrowObjectClass
// 0x0008 (0x0008 - 0x0000)
struct BP_ThrowWeaponBase_C_GetThrowObjectClass final
{
public:
	class UClass*                                 ThrowObject;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ThrowWeaponBase_C_GetThrowObjectClass) == 0x000008, "Wrong alignment on BP_ThrowWeaponBase_C_GetThrowObjectClass");
static_assert(sizeof(BP_ThrowWeaponBase_C_GetThrowObjectClass) == 0x000008, "Wrong size on BP_ThrowWeaponBase_C_GetThrowObjectClass");
static_assert(offsetof(BP_ThrowWeaponBase_C_GetThrowObjectClass, ThrowObject) == 0x000000, "Member 'BP_ThrowWeaponBase_C_GetThrowObjectClass::ThrowObject' has a wrong offset!");

// Function BP_ThrowWeaponBase.BP_ThrowWeaponBase_C.On Throw
// 0x0160 (0x0160 - 0x0000)
struct BP_ThrowWeaponBase_C_On_Throw final
{
public:
	class APalPlayerCharacter*                    CallFunc_GetPalmi_ReturnValue;                     // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalPlayerInventoryData*                CallFunc_GetLocalInventoryData_ReturnValue;        // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TMap<class FName, class APalWeaponBase*>      CallFunc_GetPalSphereActorMap_ReturnValue;         // 0x0010(0x0050)()
	class FName                                   CallFunc_GetNowEquipedBallItemID_OutBallItemID;    // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_GetBulletShootRotation_BulletRotate;      // 0x0068(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class APalWeaponBase*                         CallFunc_Map_Find_Value;                           // 0x0080(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3A16[0x3];                                     // 0x0089(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_CountItemNum_ReturnValue;                 // 0x008C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0091(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3A17[0x2];                                     // 0x0092(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetSneakAttackRate_ReturnValue;           // 0x0094(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetWeaponDamage_ReturnValue;              // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_DecrementBullet_ReturnValue;              // 0x009C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3A18[0x3];                                     // 0x009D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 CallFunc_GetThrowObjectClass_ThrowObject;          // 0x00A0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_FindOwnerPalCharacter_ReturnValue;        // 0x00A8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalSkeletalMeshComponent*              CallFunc_GetMainMesh_ReturnValue;                  // 0x00B0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPalLoadoutSelectorComponent*           CallFunc_GetComponentByClass_ReturnValue;          // 0x00B8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetSocketLocation_ReturnValue;            // 0x00C0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue_1;    // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3A19[0x7];                                     // 0x00D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x00E0(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x0140(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_FinishSpawningActor_ReturnValue;          // 0x0148(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalBullet*                             K2Node_DynamicCast_AsPal_Bullet;                   // 0x0150(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0158(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0159(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x015A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ThrowWeaponBase_C_On_Throw) == 0x000010, "Wrong alignment on BP_ThrowWeaponBase_C_On_Throw");
static_assert(sizeof(BP_ThrowWeaponBase_C_On_Throw) == 0x000160, "Wrong size on BP_ThrowWeaponBase_C_On_Throw");
static_assert(offsetof(BP_ThrowWeaponBase_C_On_Throw, CallFunc_GetPalmi_ReturnValue) == 0x000000, "Member 'BP_ThrowWeaponBase_C_On_Throw::CallFunc_GetPalmi_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ThrowWeaponBase_C_On_Throw, CallFunc_GetLocalInventoryData_ReturnValue) == 0x000008, "Member 'BP_ThrowWeaponBase_C_On_Throw::CallFunc_GetLocalInventoryData_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ThrowWeaponBase_C_On_Throw, CallFunc_GetPalSphereActorMap_ReturnValue) == 0x000010, "Member 'BP_ThrowWeaponBase_C_On_Throw::CallFunc_GetPalSphereActorMap_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ThrowWeaponBase_C_On_Throw, CallFunc_GetNowEquipedBallItemID_OutBallItemID) == 0x000060, "Member 'BP_ThrowWeaponBase_C_On_Throw::CallFunc_GetNowEquipedBallItemID_OutBallItemID' has a wrong offset!");
static_assert(offsetof(BP_ThrowWeaponBase_C_On_Throw, CallFunc_GetBulletShootRotation_BulletRotate) == 0x000068, "Member 'BP_ThrowWeaponBase_C_On_Throw::CallFunc_GetBulletShootRotation_BulletRotate' has a wrong offset!");
static_assert(offsetof(BP_ThrowWeaponBase_C_On_Throw, CallFunc_Map_Find_Value) == 0x000080, "Member 'BP_ThrowWeaponBase_C_On_Throw::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(BP_ThrowWeaponBase_C_On_Throw, CallFunc_Map_Find_ReturnValue) == 0x000088, "Member 'BP_ThrowWeaponBase_C_On_Throw::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ThrowWeaponBase_C_On_Throw, CallFunc_CountItemNum_ReturnValue) == 0x00008C, "Member 'BP_ThrowWeaponBase_C_On_Throw::CallFunc_CountItemNum_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ThrowWeaponBase_C_On_Throw, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000090, "Member 'BP_ThrowWeaponBase_C_On_Throw::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ThrowWeaponBase_C_On_Throw, CallFunc_Greater_IntInt_ReturnValue) == 0x000091, "Member 'BP_ThrowWeaponBase_C_On_Throw::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ThrowWeaponBase_C_On_Throw, CallFunc_GetSneakAttackRate_ReturnValue) == 0x000094, "Member 'BP_ThrowWeaponBase_C_On_Throw::CallFunc_GetSneakAttackRate_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ThrowWeaponBase_C_On_Throw, CallFunc_GetWeaponDamage_ReturnValue) == 0x000098, "Member 'BP_ThrowWeaponBase_C_On_Throw::CallFunc_GetWeaponDamage_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ThrowWeaponBase_C_On_Throw, CallFunc_DecrementBullet_ReturnValue) == 0x00009C, "Member 'BP_ThrowWeaponBase_C_On_Throw::CallFunc_DecrementBullet_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ThrowWeaponBase_C_On_Throw, CallFunc_GetThrowObjectClass_ThrowObject) == 0x0000A0, "Member 'BP_ThrowWeaponBase_C_On_Throw::CallFunc_GetThrowObjectClass_ThrowObject' has a wrong offset!");
static_assert(offsetof(BP_ThrowWeaponBase_C_On_Throw, CallFunc_FindOwnerPalCharacter_ReturnValue) == 0x0000A8, "Member 'BP_ThrowWeaponBase_C_On_Throw::CallFunc_FindOwnerPalCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ThrowWeaponBase_C_On_Throw, CallFunc_GetMainMesh_ReturnValue) == 0x0000B0, "Member 'BP_ThrowWeaponBase_C_On_Throw::CallFunc_GetMainMesh_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ThrowWeaponBase_C_On_Throw, CallFunc_GetComponentByClass_ReturnValue) == 0x0000B8, "Member 'BP_ThrowWeaponBase_C_On_Throw::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ThrowWeaponBase_C_On_Throw, CallFunc_GetSocketLocation_ReturnValue) == 0x0000C0, "Member 'BP_ThrowWeaponBase_C_On_Throw::CallFunc_GetSocketLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ThrowWeaponBase_C_On_Throw, CallFunc_EqualEqual_ObjectObject_ReturnValue_1) == 0x0000D8, "Member 'BP_ThrowWeaponBase_C_On_Throw::CallFunc_EqualEqual_ObjectObject_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ThrowWeaponBase_C_On_Throw, CallFunc_MakeTransform_ReturnValue) == 0x0000E0, "Member 'BP_ThrowWeaponBase_C_On_Throw::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ThrowWeaponBase_C_On_Throw, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x000140, "Member 'BP_ThrowWeaponBase_C_On_Throw::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ThrowWeaponBase_C_On_Throw, CallFunc_FinishSpawningActor_ReturnValue) == 0x000148, "Member 'BP_ThrowWeaponBase_C_On_Throw::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ThrowWeaponBase_C_On_Throw, K2Node_DynamicCast_AsPal_Bullet) == 0x000150, "Member 'BP_ThrowWeaponBase_C_On_Throw::K2Node_DynamicCast_AsPal_Bullet' has a wrong offset!");
static_assert(offsetof(BP_ThrowWeaponBase_C_On_Throw, K2Node_DynamicCast_bSuccess) == 0x000158, "Member 'BP_ThrowWeaponBase_C_On_Throw::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_ThrowWeaponBase_C_On_Throw, CallFunc_IsValid_ReturnValue) == 0x000159, "Member 'BP_ThrowWeaponBase_C_On_Throw::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ThrowWeaponBase_C_On_Throw, CallFunc_IsValid_ReturnValue_1) == 0x00015A, "Member 'BP_ThrowWeaponBase_C_On_Throw::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function BP_ThrowWeaponBase.BP_ThrowWeaponBase_C.OnWeaponNotify
// 0x0001 (0x0001 - 0x0000)
struct BP_ThrowWeaponBase_C_OnWeaponNotify final
{
public:
	EWeaponNotifyType                             Type;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ThrowWeaponBase_C_OnWeaponNotify) == 0x000001, "Wrong alignment on BP_ThrowWeaponBase_C_OnWeaponNotify");
static_assert(sizeof(BP_ThrowWeaponBase_C_OnWeaponNotify) == 0x000001, "Wrong size on BP_ThrowWeaponBase_C_OnWeaponNotify");
static_assert(offsetof(BP_ThrowWeaponBase_C_OnWeaponNotify, Type) == 0x000000, "Member 'BP_ThrowWeaponBase_C_OnWeaponNotify::Type' has a wrong offset!");

// Function BP_ThrowWeaponBase.BP_ThrowWeaponBase_C.ThrowEventDispatcher__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct BP_ThrowWeaponBase_C_ThrowEventDispatcher__DelegateSignature final
{
public:
	class AActor*                                 Bullet;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ThrowWeaponBase_C_ThrowEventDispatcher__DelegateSignature) == 0x000008, "Wrong alignment on BP_ThrowWeaponBase_C_ThrowEventDispatcher__DelegateSignature");
static_assert(sizeof(BP_ThrowWeaponBase_C_ThrowEventDispatcher__DelegateSignature) == 0x000008, "Wrong size on BP_ThrowWeaponBase_C_ThrowEventDispatcher__DelegateSignature");
static_assert(offsetof(BP_ThrowWeaponBase_C_ThrowEventDispatcher__DelegateSignature, Bullet) == 0x000000, "Member 'BP_ThrowWeaponBase_C_ThrowEventDispatcher__DelegateSignature::Bullet' has a wrong offset!");

// Function BP_ThrowWeaponBase.BP_ThrowWeaponBase_C.IsEnableAutoAim
// 0x0001 (0x0001 - 0x0000)
struct BP_ThrowWeaponBase_C_IsEnableAutoAim final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ThrowWeaponBase_C_IsEnableAutoAim) == 0x000001, "Wrong alignment on BP_ThrowWeaponBase_C_IsEnableAutoAim");
static_assert(sizeof(BP_ThrowWeaponBase_C_IsEnableAutoAim) == 0x000001, "Wrong size on BP_ThrowWeaponBase_C_IsEnableAutoAim");
static_assert(offsetof(BP_ThrowWeaponBase_C_IsEnableAutoAim, ReturnValue) == 0x000000, "Member 'BP_ThrowWeaponBase_C_IsEnableAutoAim::ReturnValue' has a wrong offset!");

}

