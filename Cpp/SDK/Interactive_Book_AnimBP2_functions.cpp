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

// Function Interactive_Book_AnimBP2.Interactive_Book_AnimBP2_C.ExecuteUbergraph_Interactive_Book_AnimBP2
// ()
void UInteractive_Book_AnimBP2_C::ExecuteUbergraph_Interactive_Book_AnimBP2()
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_Book_AnimBP2.Interactive_Book_AnimBP2_C.ExecuteUbergraph_Interactive_Book_AnimBP2");

	UInteractive_Book_AnimBP2_C_ExecuteUbergraph_Interactive_Book_AnimBP2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
