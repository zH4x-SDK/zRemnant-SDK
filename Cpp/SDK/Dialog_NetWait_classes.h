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

// BlueprintGeneratedClass Dialog_NetWait.Dialog_NetWait_C
// 0x0000
class ADialog_NetWait_C : public ADialog_Base_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Dialog_NetWait.Dialog_NetWait_C");
		return ptr;
	}



	void EndDialog();
	void OnBeginDialog();
	void OnWaitDialog_Event_1();
	void ReceiveDestroyed();
	void ExecuteUbergraph_Dialog_NetWait();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
