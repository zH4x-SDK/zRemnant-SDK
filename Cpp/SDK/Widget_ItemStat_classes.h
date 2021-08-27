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

// WidgetBlueprintGeneratedClass Widget_ItemStat.Widget_ItemStat_C
// 0x0000
class UWidget_ItemStat_C : public UWidget_StatBase_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_ItemStat.Widget_ItemStat_C");
		return ptr;
	}



	void Get_PrevValue_ColorAndOpacity_1();
	void Refresh();
	void Get_Bullet_Visibility_1();
	void Get_StatName_ColorAndOpacity_1();
	void Get_StatValue_Visibility_1();
	void GetPostfix();
	void GetPrefix();
	void Get_StatValue_ColorAndOpacity_1();
	void GetStatValue();
	void GetStatName();
	void Construct();
	void OnBeginPreview_Event_1();
	void OnEndPreview_Event_1();
	void Init();
	void ExecuteUbergraph_Widget_ItemStat();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
