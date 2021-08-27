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

// WidgetBlueprintGeneratedClass Widget_WaitDialog.Widget_WaitDialog_C
// 0x0000
class UWidget_WaitDialog_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_WaitDialog.Widget_WaitDialog_C");
		return ptr;
	}



	void UpdateCaption();
	void Init();
	void Close();
	void Construct();
	void CloseImmediate();
	void ExecuteUbergraph_Widget_WaitDialog();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
