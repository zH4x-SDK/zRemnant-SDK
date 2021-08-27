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

// BlueprintGeneratedClass Dialog_Tutorial.Dialog_Tutorial_C
// 0x0000
class ADialog_Tutorial_C : public ADialog_InGameBase_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Dialog_Tutorial.Dialog_Tutorial_C");
		return ptr;
	}



	void Init();
	void OnEndDialog();
	void ExecuteUbergraph_Dialog_Tutorial();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
