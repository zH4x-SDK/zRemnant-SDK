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

// BlueprintGeneratedClass RootWraith_Projectile.RootWraith_Projectile_C
// 0x0000
class ARootWraith_Projectile_C : public ABP_Projectile_Stick_Sphere_Base_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass RootWraith_Projectile.RootWraith_Projectile_C");
		return ptr;
	}



	void ReceiveBeginPlay();
	void ExecuteUbergraph_RootWraith_Projectile();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
