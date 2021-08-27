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

// Function Item_Material_Base.Item_Material_Base_C.ReceiveTick
// ()
void AItem_Material_Base_C::ReceiveTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function Item_Material_Base.Item_Material_Base_C.ReceiveTick");

	AItem_Material_Base_C_ReceiveTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Item_Material_Base.Item_Material_Base_C.ExecuteUbergraph_Item_Material_Base
// ()
void AItem_Material_Base_C::ExecuteUbergraph_Item_Material_Base()
{
	static auto fn = UObject::FindObject<UFunction>("Function Item_Material_Base.Item_Material_Base_C.ExecuteUbergraph_Item_Material_Base");

	AItem_Material_Base_C_ExecuteUbergraph_Item_Material_Base_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
