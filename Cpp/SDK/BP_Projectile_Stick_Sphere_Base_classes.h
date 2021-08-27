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

// BlueprintGeneratedClass BP_Projectile_Stick_Sphere_Base.BP_Projectile_Stick_Sphere_Base_C
// 0x0000
class ABP_Projectile_Stick_Sphere_Base_C : public AProjectileSphere
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Projectile_Stick_Sphere_Base.BP_Projectile_Stick_Sphere_Base_C");
		return ptr;
	}



	void ShouldDoQuickDissolve();
	void ReceiveTick();
	void OnProjectileStop();
	void OnProjectileHit();
	void DoDissolve();
	void ExecuteUbergraph_BP_Projectile_Stick_Sphere_Base();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
