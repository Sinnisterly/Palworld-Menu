#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_GoBackTeritory

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BPI_GoBackTeritory.BPI_GoBackTeritory_C
// 0x0000 (0x0028 - 0x0028)
class IBPI_GoBackTeritory_C final : public IInterface
{
public:
	void GoBack_Teritory();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPI_GoBackTeritory_C">();
	}
	static class IBPI_GoBackTeritory_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IBPI_GoBackTeritory_C>();
	}
};
static_assert(alignof(IBPI_GoBackTeritory_C) == 0x000008, "Wrong alignment on IBPI_GoBackTeritory_C");
static_assert(sizeof(IBPI_GoBackTeritory_C) == 0x000028, "Wrong size on IBPI_GoBackTeritory_C");

}

