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

// BlueprintGeneratedClass BPI_TriggerObject.BPI_TriggerObject_C
// 0x0000
class UBPI_TriggerObject_C : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPI_TriggerObject.BPI_TriggerObject_C");
		return ptr;
	}



	void SetTriggerState();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
