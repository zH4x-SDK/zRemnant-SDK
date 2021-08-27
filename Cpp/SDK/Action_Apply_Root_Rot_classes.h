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

// BlueprintGeneratedClass Action_Apply_Root_Rot.Action_Apply_Root_Rot_C
// 0x0000
class UAction_Apply_Root_Rot_C : public UAction_Buff_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_Apply_Root_Rot.Action_Apply_Root_Rot_C");
		return ptr;
	}



	void Clear_Timer();
	void Get_Owners_Transform();
	void OnActionStart();
	void OnActionStop();
	void ApplyCough();
	void OnRestore();
	void OnDead_Event_1();
	void ExecuteUbergraph_Action_Apply_Root_Rot();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
