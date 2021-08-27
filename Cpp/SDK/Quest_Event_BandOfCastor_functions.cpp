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

// Function Quest_Event_BandOfCastor.Quest_Event_BandOfCastor_C.AllDestroyed
// ()
void AQuest_Event_BandOfCastor_C::AllDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Event_BandOfCastor.Quest_Event_BandOfCastor_C.AllDestroyed");

	AQuest_Event_BandOfCastor_C_AllDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
