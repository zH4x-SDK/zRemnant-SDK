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

// BlueprintGeneratedClass BP_RadialShortcutComponent.BP_RadialShortcutComponent_C
// 0x0000
class UBP_RadialShortcutComponent_C : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_RadialShortcutComponent.BP_RadialShortcutComponent_C");
		return ptr;
	}



	void HandleEntitlement();
	void ValidateEntitlements();
	void AutoPopulate();
	void HasSlottedItem();
	void OnRep_Items();
	void AutoSlotItem();
	void RemoveBySlot();
	void RemoveByItem();
	void SetSlot();
	void GetSlotCount();
	void GetSlot();
	void ServerSetSlot();
	void UseItem();
	void SimulateSetSlot();
	void ServerUseItem();
	void ReceiveBeginPlay();
	void OnAddItem();
	void ExecuteUbergraph_BP_RadialShortcutComponent();
	void OnSlotUsed__DelegateSignature();
	void OnChanged__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
