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

// Class PhysXVehicles.WheeledVehicleMovementComponent
// 0x0000
class UWheeledVehicleMovementComponent : public UPawnMovementComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PhysXVehicles.WheeledVehicleMovementComponent");
		return ptr;
	}



	void SetUseAutoGears();
	void SetThrottleInput();
	void SetTargetGear();
	void SetSteeringInput();
	void SetHandbrakeInput();
	void SetGroupsToIgnoreMask();
	void SetGroupsToIgnore();
	void SetGroupsToAvoidMask();
	void SetGroupsToAvoid();
	void SetGearUp();
	void SetGearDown();
	void SetBrakeInput();
	void SetAvoidanceGroupMask();
	void SetAvoidanceGroup();
	void SetAvoidanceEnabled();
	void ServerUpdateState();
	void GetUseAutoGears();
	void GetTargetGear();
	void GetForwardSpeed();
	void GetEngineRotationSpeed();
	void GetEngineMaxRotationSpeed();
	void GetCurrentGear();
};

// Class PhysXVehicles.SimpleWheeledVehicleMovementComponent
// 0x0000
class USimpleWheeledVehicleMovementComponent : public UWheeledVehicleMovementComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PhysXVehicles.SimpleWheeledVehicleMovementComponent");
		return ptr;
	}



	void SetSteerAngle();
	void SetDriveTorque();
	void SetBrakeTorque();
};

// Class PhysXVehicles.TireConfig
// 0x0000
class UTireConfig : public UDataAsset
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PhysXVehicles.TireConfig");
		return ptr;
	}



};

// Class PhysXVehicles.VehicleAnimInstance
// 0x0000
class UVehicleAnimInstance : public UAnimInstance
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PhysXVehicles.VehicleAnimInstance");
		return ptr;
	}



	void GetVehicle();
};

// Class PhysXVehicles.VehicleWheel
// 0x0000
class UVehicleWheel : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PhysXVehicles.VehicleWheel");
		return ptr;
	}



	void IsInAir();
	void GetSuspensionOffset();
	void GetSteerAngle();
	void GetRotationAngle();
};

// Class PhysXVehicles.WheeledVehicle
// 0x0000
class AWheeledVehicle : public APawn
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PhysXVehicles.WheeledVehicle");
		return ptr;
	}



};

// Class PhysXVehicles.WheeledVehicleMovementComponent4W
// 0x0000
class UWheeledVehicleMovementComponent4W : public UWheeledVehicleMovementComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PhysXVehicles.WheeledVehicleMovementComponent4W");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
