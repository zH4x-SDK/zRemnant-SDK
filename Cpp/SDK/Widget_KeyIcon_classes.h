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

// WidgetBlueprintGeneratedClass Widget_KeyIcon.Widget_KeyIcon_C
// 0x0000
class UWidget_KeyIcon_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_KeyIcon.Widget_KeyIcon_C");
		return ptr;
	}



	void GetInputActionName();
	void ModifyKeyName();
	void SetActionText();
	void ExecuteUbergraph_Widget_KeyIcon();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
