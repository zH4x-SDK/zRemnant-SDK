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

// BlueprintGeneratedClass CreditsFL.CreditsFL_C
// 0x0000
class UCreditsFL_C : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CreditsFL.CreditsFL_C");
		return ptr;
	}



	void Get_Override_Data_for_Name();
	void Get_Roles_in_Section();
	void Get_Overriden_Names();
	void Get_Override_Data_for_Role();
	void Get_Overriden_Roles();
	void Simple_Text_Object__Title__to_Complex_Text_Object();
	void Simple_Credits_Section_to_Complex_Credits_Section();
	void Simple_Played_By_Names_to_Complex_Played_By_Names();
	void Simple_Text_Object__Role__to_Complex_Text_Object();
	void Simple_Roles_to_Complex_Roles();
	void Padding_Margin_To_Margin();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
