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

// WidgetBlueprintGeneratedClass Widget_OkDialog.Widget_OkDialog_C
// 0x0000
class UWidget_OkDialog_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_OkDialog.Widget_OkDialog_C");
		return ptr;
	}



	void Init();
	void Construct();
	void BndEvt__No_K2Node_ComponentBoundEvent_240_OnAdvButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_Widget_OkDialog();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
