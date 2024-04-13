#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SunPosition

#include "Basic.hpp"

#include "SunPosition_structs.hpp"


namespace SDK::Params
{

// Function SunPosition.SunPositionFunctionLibrary.GetSunPosition
// 0x0050 (0x0050 - 0x0000)
struct SunPositionFunctionLibrary_GetSunPosition final
{
public:
	float                                         Latitude;                                          // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Longitude;                                         // 0x0004(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         TimeZone;                                          // 0x0008(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bIsDaylightSavingTime;                             // 0x000C(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_133F[0x3];                                     // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Year;                                              // 0x0010(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         Month;                                             // 0x0014(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         Day;                                               // 0x0018(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         Hours;                                             // 0x001C(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         Minutes;                                           // 0x0020(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         Seconds;                                           // 0x0024(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSunPositionData                       SunPositionData;                                   // 0x0028(0x0028)(Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(SunPositionFunctionLibrary_GetSunPosition) == 0x000008, "Wrong alignment on SunPositionFunctionLibrary_GetSunPosition");
static_assert(sizeof(SunPositionFunctionLibrary_GetSunPosition) == 0x000050, "Wrong size on SunPositionFunctionLibrary_GetSunPosition");
static_assert(offsetof(SunPositionFunctionLibrary_GetSunPosition, Latitude) == 0x000000, "Member 'SunPositionFunctionLibrary_GetSunPosition::Latitude' has a wrong offset!");
static_assert(offsetof(SunPositionFunctionLibrary_GetSunPosition, Longitude) == 0x000004, "Member 'SunPositionFunctionLibrary_GetSunPosition::Longitude' has a wrong offset!");
static_assert(offsetof(SunPositionFunctionLibrary_GetSunPosition, TimeZone) == 0x000008, "Member 'SunPositionFunctionLibrary_GetSunPosition::TimeZone' has a wrong offset!");
static_assert(offsetof(SunPositionFunctionLibrary_GetSunPosition, bIsDaylightSavingTime) == 0x00000C, "Member 'SunPositionFunctionLibrary_GetSunPosition::bIsDaylightSavingTime' has a wrong offset!");
static_assert(offsetof(SunPositionFunctionLibrary_GetSunPosition, Year) == 0x000010, "Member 'SunPositionFunctionLibrary_GetSunPosition::Year' has a wrong offset!");
static_assert(offsetof(SunPositionFunctionLibrary_GetSunPosition, Month) == 0x000014, "Member 'SunPositionFunctionLibrary_GetSunPosition::Month' has a wrong offset!");
static_assert(offsetof(SunPositionFunctionLibrary_GetSunPosition, Day) == 0x000018, "Member 'SunPositionFunctionLibrary_GetSunPosition::Day' has a wrong offset!");
static_assert(offsetof(SunPositionFunctionLibrary_GetSunPosition, Hours) == 0x00001C, "Member 'SunPositionFunctionLibrary_GetSunPosition::Hours' has a wrong offset!");
static_assert(offsetof(SunPositionFunctionLibrary_GetSunPosition, Minutes) == 0x000020, "Member 'SunPositionFunctionLibrary_GetSunPosition::Minutes' has a wrong offset!");
static_assert(offsetof(SunPositionFunctionLibrary_GetSunPosition, Seconds) == 0x000024, "Member 'SunPositionFunctionLibrary_GetSunPosition::Seconds' has a wrong offset!");
static_assert(offsetof(SunPositionFunctionLibrary_GetSunPosition, SunPositionData) == 0x000028, "Member 'SunPositionFunctionLibrary_GetSunPosition::SunPositionData' has a wrong offset!");

}

