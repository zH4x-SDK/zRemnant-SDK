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

// WidgetBlueprintGeneratedClass Widget_ItemStatMiniVertical.Widget_ItemStatMiniVertical_C
// 0x0000
class UWidget_ItemStatMiniVertical_C : public UWidget_StatBase_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_ItemStatMiniVertical.Widget_ItemStatMiniVertical_C");
		return ptr;
	}



	void Get_StatValue_ColorAndOpacity_1();
	void Refresh();
	void Construct();
	void Init();
	void ExecuteUbergraph_Widget_ItemStatMiniVertical();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
