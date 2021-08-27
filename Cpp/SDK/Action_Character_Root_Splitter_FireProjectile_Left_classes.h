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

// BlueprintGeneratedClass Action_Character_Root_Splitter_FireProjectile_Left.Action_Character_Root_Splitter_FireProjectile_Left_C
// 0x0000
class UAction_Character_Root_Splitter_FireProjectile_Left_C : public UAction_Fire_Projectile_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_Character_Root_Splitter_FireProjectile_Left.Action_Character_Root_Splitter_FireProjectile_Left_C");
		return ptr;
	}



	void ExecuteUbergraph_Action_Character_Root_Splitter_FireProjectile_Left();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
