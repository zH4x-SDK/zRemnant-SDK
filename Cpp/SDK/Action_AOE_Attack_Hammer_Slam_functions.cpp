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

// Function Action_AOE_Attack_Hammer_Slam.Action_AOE_Attack_Hammer_Slam_C.IsValidTarget
// ()
void UAction_AOE_Attack_Hammer_Slam_C::IsValidTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_AOE_Attack_Hammer_Slam.Action_AOE_Attack_Hammer_Slam_C.IsValidTarget");

	UAction_AOE_Attack_Hammer_Slam_C_IsValidTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_AOE_Attack_Hammer_Slam.Action_AOE_Attack_Hammer_Slam_C.Get Socket Location
// ()
void UAction_AOE_Attack_Hammer_Slam_C::Get_Socket_Location()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_AOE_Attack_Hammer_Slam.Action_AOE_Attack_Hammer_Slam_C.Get Socket Location");

	UAction_AOE_Attack_Hammer_Slam_C_Get_Socket_Location_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
