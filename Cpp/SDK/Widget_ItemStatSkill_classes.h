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

// WidgetBlueprintGeneratedClass Widget_ItemStatSkill.Widget_ItemStatSkill_C
// 0x0000
class UWidget_ItemStatSkill_C : public UWidget_StatBase_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_ItemStatSkill.Widget_ItemStatSkill_C");
		return ptr;
	}



	void Refresh();
	void Construct();
	void Init();
	void ExecuteUbergraph_Widget_ItemStatSkill();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
