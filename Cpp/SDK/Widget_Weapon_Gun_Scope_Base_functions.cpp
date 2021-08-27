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

// Function Widget_Weapon_Gun_Scope_Base.Widget_Weapon_Gun_Scope_Base_C.Init
// ()
void UWidget_Weapon_Gun_Scope_Base_C::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Weapon_Gun_Scope_Base.Widget_Weapon_Gun_Scope_Base_C.Init");

	UWidget_Weapon_Gun_Scope_Base_C_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
