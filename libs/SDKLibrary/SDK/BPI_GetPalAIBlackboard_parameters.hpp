#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_GetPalAIBlackboard

#include "Basic.hpp"


namespace SDK::Params
{

// Function BPI_GetPalAIBlackboard.BPI_GetPalAIBlackboard_C.GetLeaderBB
// 0x0008 (0x0008 - 0x0000)
struct BPI_GetPalAIBlackboard_C_GetLeaderBB final
{
public:
	class UBP_PalAIBlackboard_Common_C*           LeaderPalBrackboard;                               // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_GetPalAIBlackboard_C_GetLeaderBB) == 0x000008, "Wrong alignment on BPI_GetPalAIBlackboard_C_GetLeaderBB");
static_assert(sizeof(BPI_GetPalAIBlackboard_C_GetLeaderBB) == 0x000008, "Wrong size on BPI_GetPalAIBlackboard_C_GetLeaderBB");
static_assert(offsetof(BPI_GetPalAIBlackboard_C_GetLeaderBB, LeaderPalBrackboard) == 0x000000, "Member 'BPI_GetPalAIBlackboard_C_GetLeaderBB::LeaderPalBrackboard' has a wrong offset!");

// Function BPI_GetPalAIBlackboard.BPI_GetPalAIBlackboard_C.GetMyBB
// 0x0008 (0x0008 - 0x0000)
struct BPI_GetPalAIBlackboard_C_GetMyBB final
{
public:
	class UBP_PalAIBlackboard_Common_C*           PalBrackboard;                                     // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_GetPalAIBlackboard_C_GetMyBB) == 0x000008, "Wrong alignment on BPI_GetPalAIBlackboard_C_GetMyBB");
static_assert(sizeof(BPI_GetPalAIBlackboard_C_GetMyBB) == 0x000008, "Wrong size on BPI_GetPalAIBlackboard_C_GetMyBB");
static_assert(offsetof(BPI_GetPalAIBlackboard_C_GetMyBB, PalBrackboard) == 0x000000, "Member 'BPI_GetPalAIBlackboard_C_GetMyBB::PalBrackboard' has a wrong offset!");

}

