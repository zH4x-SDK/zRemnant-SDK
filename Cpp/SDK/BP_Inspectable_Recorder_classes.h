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

// BlueprintGeneratedClass BP_Inspectable_Recorder.BP_Inspectable_Recorder_C
// 0x0000
class ABP_Inspectable_Recorder_C : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Inspectable_Recorder.BP_Inspectable_Recorder_C");
		return ptr;
	}



	void GetLore();
	void OnRep_IsPlaying();
	void SetLore();
	void OnRep_Lore();
	void StartTape();
	void StopTape();
	void OnPlay();
	void PlayPage();
	void OnDialogComplete();
	void AdvanceNextPage();
	void ExecuteUbergraph_BP_Inspectable_Recorder();
	void OnLoreNotify__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
