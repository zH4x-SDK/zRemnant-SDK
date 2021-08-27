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

// WidgetBlueprintGeneratedClass Widget_FocusWidget.Widget_FocusWidget_C
// 0x0000
class UWidget_FocusWidget_C : public UFocusWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_FocusWidget.Widget_FocusWidget_C");
		return ptr;
	}



	void GetCrafting();
	void GetInventory();
	void GetContextActor();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
