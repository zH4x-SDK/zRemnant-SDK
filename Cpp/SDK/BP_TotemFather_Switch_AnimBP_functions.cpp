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

// Function BP_TotemFather_Switch_AnimBP.BP_TotemFather_Switch_AnimBP_C.ExecuteUbergraph_BP_TotemFather_Switch_AnimBP
// ()
void UBP_TotemFather_Switch_AnimBP_C::ExecuteUbergraph_BP_TotemFather_Switch_AnimBP()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TotemFather_Switch_AnimBP.BP_TotemFather_Switch_AnimBP_C.ExecuteUbergraph_BP_TotemFather_Switch_AnimBP");

	UBP_TotemFather_Switch_AnimBP_C_ExecuteUbergraph_BP_TotemFather_Switch_AnimBP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
