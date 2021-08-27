// Name: Remnant, Version: 1.0

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function LocationServicesBPLibrary.LocationServices.StopLocationServices
// ()
void ULocationServices::StopLocationServices()
{
	static auto fn = UObject::FindObject<UFunction>("Function LocationServicesBPLibrary.LocationServices.StopLocationServices");

	ULocationServices_StopLocationServices_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LocationServicesBPLibrary.LocationServices.StartLocationServices
// ()
void ULocationServices::StartLocationServices()
{
	static auto fn = UObject::FindObject<UFunction>("Function LocationServicesBPLibrary.LocationServices.StartLocationServices");

	ULocationServices_StartLocationServices_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LocationServicesBPLibrary.LocationServices.IsLocationAccuracyAvailable
// ()
void ULocationServices::IsLocationAccuracyAvailable()
{
	static auto fn = UObject::FindObject<UFunction>("Function LocationServicesBPLibrary.LocationServices.IsLocationAccuracyAvailable");

	ULocationServices_IsLocationAccuracyAvailable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LocationServicesBPLibrary.LocationServices.InitLocationServices
// ()
void ULocationServices::InitLocationServices()
{
	static auto fn = UObject::FindObject<UFunction>("Function LocationServicesBPLibrary.LocationServices.InitLocationServices");

	ULocationServices_InitLocationServices_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LocationServicesBPLibrary.LocationServices.GetLocationServicesImpl
// ()
void ULocationServices::GetLocationServicesImpl()
{
	static auto fn = UObject::FindObject<UFunction>("Function LocationServicesBPLibrary.LocationServices.GetLocationServicesImpl");

	ULocationServices_GetLocationServicesImpl_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LocationServicesBPLibrary.LocationServices.GetLastKnownLocation
// ()
void ULocationServices::GetLastKnownLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function LocationServicesBPLibrary.LocationServices.GetLastKnownLocation");

	ULocationServices_GetLastKnownLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LocationServicesBPLibrary.LocationServices.AreLocationServicesEnabled
// ()
void ULocationServices::AreLocationServicesEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function LocationServicesBPLibrary.LocationServices.AreLocationServicesEnabled");

	ULocationServices_AreLocationServicesEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
