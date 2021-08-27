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

// WidgetBlueprintGeneratedClass Widget_ItemStatPrimary.Widget_ItemStatPrimary_C
// 0x0000
class UWidget_ItemStatPrimary_C : public UWidget_StatBase_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_ItemStatPrimary.Widget_ItemStatPrimary_C");
		return ptr;
	}



	void LeftAligned();
	void Refresh();
	void Get_PrevValue_Text_1();
	void GetVisibility_1();
	void Get_StatValue_ColorAndOpacity_1();
	void Get_StatValue_Text_1();
	void Construct();
	void OnBeginPreview_Event_1();
	void OnEndPreview_Event_1();
	void Init();
	void ExecuteUbergraph_Widget_ItemStatPrimary();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
