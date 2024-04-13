#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HttpBlueprint

#include "Basic.hpp"


namespace SDK
{

// Enum HttpBlueprint.EHttpVerbs
// NumValues: 0x0006
enum class EHttpVerbs : uint8
{
	Post                                     = 0,
	Put                                      = 1,
	Delete                                   = 2,
	Patch                                    = 3,
	Get                                      = 4,
	MAX                                      = 255,
};

// Enum HttpBlueprint.ERequestPresets
// NumValues: 0x0005
enum class ERequestPresets : uint8
{
	Json                                     = 0,
	Http                                     = 1,
	Url                                      = 2,
	Custom                                   = 3,
	ERequestPresets_MAX                      = 4,
};

// ScriptStruct HttpBlueprint.HttpHeader
// 0x0050 (0x0050 - 0x0000)
struct FHttpHeader final
{
public:
	TMap<class FString, class FString>            Headers;                                           // 0x0000(0x0050)(NativeAccessSpecifierPrivate)
};
static_assert(alignof(FHttpHeader) == 0x000008, "Wrong alignment on FHttpHeader");
static_assert(sizeof(FHttpHeader) == 0x000050, "Wrong size on FHttpHeader");
static_assert(offsetof(FHttpHeader, Headers) == 0x000000, "Member 'FHttpHeader::Headers' has a wrong offset!");

}
