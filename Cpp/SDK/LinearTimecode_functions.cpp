// Name: Remnant, Version: 1.0

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function LinearTimecode.LinearTimecodeComponent.SetDropTimecodeFrameNumber
// ()
void ULinearTimecodeComponent::SetDropTimecodeFrameNumber()
{
	static auto fn = UObject::FindObject<UFunction>("Function LinearTimecode.LinearTimecodeComponent.SetDropTimecodeFrameNumber");

	ULinearTimecodeComponent_SetDropTimecodeFrameNumber_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LinearTimecode.LinearTimecodeComponent.GetDropTimeCodeFrameNumber
// ()
void ULinearTimecodeComponent::GetDropTimeCodeFrameNumber()
{
	static auto fn = UObject::FindObject<UFunction>("Function LinearTimecode.LinearTimecodeComponent.GetDropTimeCodeFrameNumber");

	ULinearTimecodeComponent_GetDropTimeCodeFrameNumber_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LinearTimecode.LinearTimecodeComponent.GetDropFrameNumber
// ()
void ULinearTimecodeComponent::GetDropFrameNumber()
{
	static auto fn = UObject::FindObject<UFunction>("Function LinearTimecode.LinearTimecodeComponent.GetDropFrameNumber");

	ULinearTimecodeComponent_GetDropFrameNumber_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LinearTimecode.DropTimecodeToStringConversion.Conv_DropTimecodeToString
// ()
void UDropTimecodeToStringConversion::Conv_DropTimecodeToString()
{
	static auto fn = UObject::FindObject<UFunction>("Function LinearTimecode.DropTimecodeToStringConversion.Conv_DropTimecodeToString");

	UDropTimecodeToStringConversion_Conv_DropTimecodeToString_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
