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

// WidgetBlueprintGeneratedClass Widget_ZoneEntering.Widget_ZoneEntering_C
// 0x0000
class UWidget_ZoneEntering_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_ZoneEntering.Widget_ZoneEntering_C");
		return ptr;
	}



	void Show();
	void Construct();
	void Destruct();
	void ExecuteUbergraph_Widget_ZoneEntering();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif