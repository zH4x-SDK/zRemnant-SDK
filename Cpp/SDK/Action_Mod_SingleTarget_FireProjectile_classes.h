﻿#pragma once

// Name: Remnant, Version: 1.0


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Action_Mod_SingleTarget_FireProjectile.Action_Mod_SingleTarget_FireProjectile_C
// 0x0000
class UAction_Mod_SingleTarget_FireProjectile_C : public UAction_Buff_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_Mod_SingleTarget_FireProjectile.Action_Mod_SingleTarget_FireProjectile_C");
		return ptr;
	}



	void GetFiringDirection();
	void Get_Socket_Location_from_owner();
	void OnActionStart();
	void ExecuteUbergraph_Action_Mod_SingleTarget_FireProjectile();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
