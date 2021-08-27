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

// Class PlayFabParty.PlayFabPartyNetConnection
// 0x0000
class UPlayFabPartyNetConnection : public UIpConnection
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlayFabParty.PlayFabPartyNetConnection");
		return ptr;
	}



};

// Class PlayFabParty.PlayFabPartyNetDriver
// 0x0000
class UPlayFabPartyNetDriver : public UIpNetDriver
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlayFabParty.PlayFabPartyNetDriver");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
