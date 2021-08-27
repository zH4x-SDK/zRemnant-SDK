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

// Function Role.Role_C.RemoveRoleBox
// ()
void URole_C::RemoveRoleBox()
{
	static auto fn = UObject::FindObject<UFunction>("Function Role.Role_C.RemoveRoleBox");

	URole_C_RemoveRoleBox_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Role.Role_C.Construct
// ()
void URole_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Role.Role_C.Construct");

	URole_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Role.Role_C.ExecuteUbergraph_Role
// ()
void URole_C::ExecuteUbergraph_Role()
{
	static auto fn = UObject::FindObject<UFunction>("Function Role.Role_C.ExecuteUbergraph_Role");

	URole_C_ExecuteUbergraph_Role_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
