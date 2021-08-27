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

// BlueprintGeneratedClass Dialog_Base.Dialog_Base_C
// 0x0000
class ADialog_Base_C : public ARemnantUIActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Dialog_Base.Dialog_Base_C");
		return ptr;
	}



	void ToggleInputMode();
	void UpdateMouse();
	void OnInputDeviceChanged();
	void ExecuteUbergraph_Dialog_Base();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
