#pragma once

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

// BlueprintGeneratedClass Action_Fire_Projectile.Action_Fire_Projectile_C
// 0x0000
class UAction_Fire_Projectile_C : public UActionBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_Fire_Projectile.Action_Fire_Projectile_C");
		return ptr;
	}



	void GetAutoArc();
	void FireTheProjectile();
	void OnActionStart();
	void ExecuteUbergraph_Action_Fire_Projectile();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
