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

// WidgetBlueprintGeneratedClass Widget_TraitStat_Minor.Widget_TraitStat_Minor_C
// 0x0000
class UWidget_TraitStat_Minor_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_TraitStat_Minor.Widget_TraitStat_Minor_C");
		return ptr;
	}



	void Refresh();
	void Init();
	void GetPostfix();
	void GetPrefix();
	void GetPrevStatValueLabel();
	void GetStatValueLabel();
	void Construct();
	void ExecuteUbergraph_Widget_TraitStat_Minor();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
