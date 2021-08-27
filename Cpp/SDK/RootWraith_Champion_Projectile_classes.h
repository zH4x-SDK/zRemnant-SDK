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

// BlueprintGeneratedClass RootWraith_Champion_Projectile.RootWraith_Champion_Projectile_C
// 0x0000
class ARootWraith_Champion_Projectile_C : public ABP_Projectile_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass RootWraith_Champion_Projectile.RootWraith_Champion_Projectile_C");
		return ptr;
	}



	void Get_Skeletal_Mesh_Component();
	void Attach_Arrow_Static();
	void Attach_Arrow_To_Character();
	void OnServer_Attach_To_Character();
	void MC_On_Attach_To_Character();
	void Server_AttachStatic();
	void MC_AttachStatic();
	void ReceiveBeginPlay();
	void OnDestroyed_Event_1();
	void ExecuteUbergraph_RootWraith_Champion_Projectile();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
