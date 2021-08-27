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

// BlueprintGeneratedClass BP_RemnantGameInstance.BP_RemnantGameInstance_C
// 0x0000
class UBP_RemnantGameInstance_C : public URemnantGameInstance
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_RemnantGameInstance.BP_RemnantGameInstance_C");
		return ptr;
	}



	void SpawnControllerDialog();
	void SpawnStatusChangeDialog();
	void AddStatusChangeDialog();
	void OnFailure_439D53B841727DC5E85A82B7BA56C0C0();
	void OnSuccess_439D53B841727DC5E85A82B7BA56C0C0();
	void OnFailure_52FD5A90473978B64A90089314AE6DE0();
	void OnSuccess_52FD5A90473978B64A90089314AE6DE0();
	void OnFailure_943CEC884E25F69E09D832B4BA241281();
	void OnSuccess_943CEC884E25F69E09D832B4BA241281();
	void ReceiveInit();
	void CreatePersistenceIOWidget();
	void OnControllerConnectionChanged_Event_1();
	void ReceiveShutdown();
	void CheckConnectionStatusChanges();
	void OnStatusChanged_Event_1();
	void StatusChangeDialogResult();
	void CheckStatusChangeDialogQueue();
	void CheckConnectionStatus();
	void OnOnlineUnavailable_Event_1();
	void OnShowEventMessage_Event_1();
	void OnWaitDialog_Event_1();
	void OnNetWaitDialog_Event_1();
	void OnPreQuitToMainMenu();
	void OnShowMatchmakingEventMessage_Event_1();
	void OnPresenceJoinResult_Event_1();
	void OnDialogResult_Event_1();
	void OnWaitCustomLoginDialog_Event_1();
	void OnLoginCompleted_Event_1();
	void OnExternalAuthFail_Event_1();
	void OnFullGameAvailable();
	void ExecuteUbergraph_BP_RemnantGameInstance();
	void EventOnPreQuitToMainMenu__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
