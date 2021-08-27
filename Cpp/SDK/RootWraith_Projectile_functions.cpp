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

// Function RootWraith_Projectile.RootWraith_Projectile_C.ReceiveBeginPlay
// ()
void ARootWraith_Projectile_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function RootWraith_Projectile.RootWraith_Projectile_C.ReceiveBeginPlay");

	ARootWraith_Projectile_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function RootWraith_Projectile.RootWraith_Projectile_C.ExecuteUbergraph_RootWraith_Projectile
// ()
void ARootWraith_Projectile_C::ExecuteUbergraph_RootWraith_Projectile()
{
	static auto fn = UObject::FindObject<UFunction>("Function RootWraith_Projectile.RootWraith_Projectile_C.ExecuteUbergraph_RootWraith_Projectile");

	ARootWraith_Projectile_C_ExecuteUbergraph_RootWraith_Projectile_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
