#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FPassiveSkillCollectItemLotteryData

#include "Basic.hpp"

#include "Pal_structs.hpp"


namespace SDK
{

// UserDefinedStruct FPassiveSkillCollectItemLotteryData.FPassiveSkillCollectItemLotteryData
// 0x0010 (0x0010 - 0x0000)
struct FFPassiveSkillCollectItemLotteryData final
{
public:
	struct FPalDataTableRowName_ItemData          ItemName_8_CCCAF9734028CBCB1128F581A807E03D;       // 0x0000(0x0008)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	int32                                         Num_5_C1A7466C4A786389B583A880FA47DA9C;            // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Rate_7_919E446648F253D9B9351FAD51539CB8;           // 0x000C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FFPassiveSkillCollectItemLotteryData) == 0x000004, "Wrong alignment on FFPassiveSkillCollectItemLotteryData");
static_assert(sizeof(FFPassiveSkillCollectItemLotteryData) == 0x000010, "Wrong size on FFPassiveSkillCollectItemLotteryData");
static_assert(offsetof(FFPassiveSkillCollectItemLotteryData, ItemName_8_CCCAF9734028CBCB1128F581A807E03D) == 0x000000, "Member 'FFPassiveSkillCollectItemLotteryData::ItemName_8_CCCAF9734028CBCB1128F581A807E03D' has a wrong offset!");
static_assert(offsetof(FFPassiveSkillCollectItemLotteryData, Num_5_C1A7466C4A786389B583A880FA47DA9C) == 0x000008, "Member 'FFPassiveSkillCollectItemLotteryData::Num_5_C1A7466C4A786389B583A880FA47DA9C' has a wrong offset!");
static_assert(offsetof(FFPassiveSkillCollectItemLotteryData, Rate_7_919E446648F253D9B9351FAD51539CB8) == 0x00000C, "Member 'FFPassiveSkillCollectItemLotteryData::Rate_7_919E446648F253D9B9351FAD51539CB8' has a wrong offset!");

}
