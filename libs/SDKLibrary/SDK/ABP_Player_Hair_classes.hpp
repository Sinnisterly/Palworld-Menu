#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_Player_Hair

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "ABP_Player_Hair_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass ABP_Player_Hair.ABP_Player_Hair_C
// 0x05F0 (0x0940 - 0x0350)
class UABP_Player_Hair_C final : public UAnimInstance
{
public:
	uint8                                         Pad_3B80[0x8];                                     // 0x0348(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0350(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct ABP_Player_Hair::FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables;                           // 0x0358(0x0002)(HasGetValueTypeHash)
	uint8                                         Pad_3B81[0x6];                                     // 0x035A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_PropertyAccess;             // 0x0360(0x0008)()
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_Base;                       // 0x0368(0x0008)()
	struct FAnimNode_Root                         AnimGraphNode_Root_1;                              // 0x0370(0x0020)()
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose;                     // 0x0390(0x00C8)()
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x0458(0x0020)()
	struct FAnimNode_CopyPoseFromMesh             AnimGraphNode_CopyPoseFromMesh_1;                  // 0x0478(0x01D8)(ContainsInstancedReference)
	struct FAnimNode_LinkedAnimLayer              AnimGraphNode_LinkedAnimLayer;                     // 0x0650(0x00C8)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool;                     // 0x0718(0x0048)()
	struct FAnimNode_CopyPoseFromMesh             AnimGraphNode_CopyPoseFromMesh;                    // 0x0760(0x01D8)(ContainsInstancedReference)
	bool                                          IsDedicatedServer;                                 // 0x0938(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void AnimGraph(struct FPoseLink* Param_AnimGraph);
	void BlueprintBeginPlay();
	void ExecuteUbergraph_ABP_Player_Hair(int32 EntryPoint);
	void HairLayer(const struct FPoseLink& InPose, struct FPoseLink* Param_HairLayer);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ABP_Player_Hair_C">();
	}
	static class UABP_Player_Hair_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UABP_Player_Hair_C>();
	}
};
static_assert(alignof(UABP_Player_Hair_C) == 0x000010, "Wrong alignment on UABP_Player_Hair_C");
static_assert(sizeof(UABP_Player_Hair_C) == 0x000940, "Wrong size on UABP_Player_Hair_C");
static_assert(offsetof(UABP_Player_Hair_C, UberGraphFrame) == 0x000350, "Member 'UABP_Player_Hair_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UABP_Player_Hair_C, __AnimBlueprintMutables) == 0x000358, "Member 'UABP_Player_Hair_C::__AnimBlueprintMutables' has a wrong offset!");
static_assert(offsetof(UABP_Player_Hair_C, AnimBlueprintExtension_PropertyAccess) == 0x000360, "Member 'UABP_Player_Hair_C::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(UABP_Player_Hair_C, AnimBlueprintExtension_Base) == 0x000368, "Member 'UABP_Player_Hair_C::AnimBlueprintExtension_Base' has a wrong offset!");
static_assert(offsetof(UABP_Player_Hair_C, AnimGraphNode_Root_1) == 0x000370, "Member 'UABP_Player_Hair_C::AnimGraphNode_Root_1' has a wrong offset!");
static_assert(offsetof(UABP_Player_Hair_C, AnimGraphNode_LinkedInputPose) == 0x000390, "Member 'UABP_Player_Hair_C::AnimGraphNode_LinkedInputPose' has a wrong offset!");
static_assert(offsetof(UABP_Player_Hair_C, AnimGraphNode_Root) == 0x000458, "Member 'UABP_Player_Hair_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UABP_Player_Hair_C, AnimGraphNode_CopyPoseFromMesh_1) == 0x000478, "Member 'UABP_Player_Hair_C::AnimGraphNode_CopyPoseFromMesh_1' has a wrong offset!");
static_assert(offsetof(UABP_Player_Hair_C, AnimGraphNode_LinkedAnimLayer) == 0x000650, "Member 'UABP_Player_Hair_C::AnimGraphNode_LinkedAnimLayer' has a wrong offset!");
static_assert(offsetof(UABP_Player_Hair_C, AnimGraphNode_BlendListByBool) == 0x000718, "Member 'UABP_Player_Hair_C::AnimGraphNode_BlendListByBool' has a wrong offset!");
static_assert(offsetof(UABP_Player_Hair_C, AnimGraphNode_CopyPoseFromMesh) == 0x000760, "Member 'UABP_Player_Hair_C::AnimGraphNode_CopyPoseFromMesh' has a wrong offset!");
static_assert(offsetof(UABP_Player_Hair_C, IsDedicatedServer) == 0x000938, "Member 'UABP_Player_Hair_C::IsDedicatedServer' has a wrong offset!");

}
