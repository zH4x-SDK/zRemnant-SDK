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

// BlueprintGeneratedClass BP_Character_Root_Broken_Axe_Projectile_L.BP_Character_Root_Broken_Axe_Projectile_L_C
// 0x0000
class ABP_Character_Root_Broken_Axe_Projectile_L_C : public ABP_Projectile_Box_Base_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Character_Root_Broken_Axe_Projectile_L.BP_Character_Root_Broken_Axe_Projectile_L_C");
		return ptr;
	}



	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_Character_Root_Broken_Axe_Projectile_L();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
