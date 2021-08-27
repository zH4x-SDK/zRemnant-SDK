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
// Enums
//---------------------------------------------------------------------------

// Enum PhysXVehicles.EWheelSweepType
enum class PhysXVehicles_EWheelSweepType : uint8_t
{
	SimpleAndComplex               = 0,
	Simple                         = 1,
	Complex                        = 2,
	EWheelSweepType_MAX            = 3,

};

// Enum PhysXVehicles.EVehicleDifferential4W
enum class PhysXVehicles_EVehicleDifferential4W : uint8_t
{
	EVehicleDifferential4W__LimitedSlip_4W = 0,
	EVehicleDifferential4W__LimitedSlip_FrontDrive = 1,
	EVehicleDifferential4W__LimitedSlip_RearDrive = 2,
	EVehicleDifferential4W__Open_4W = 3,
	EVehicleDifferential4W__Open_FrontDrive = 4,
	EVehicleDifferential4W__Open_RearDrive = 5,
	EVehicleDifferential4W__EVehicleDifferential4W_MAX = 6,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct PhysXVehicles.AnimNode_WheelHandler
// 0x0000
struct FAnimNode_WheelHandler : public FAnimNode_SkeletalControlBase
{

};

// ScriptStruct PhysXVehicles.TireConfigMaterialFriction
// 0x0000
struct FTireConfigMaterialFriction
{

};

// ScriptStruct PhysXVehicles.VehicleAnimInstanceProxy
// 0x0000
struct FVehicleAnimInstanceProxy : public FAnimInstanceProxy
{

};

// ScriptStruct PhysXVehicles.VehicleInputRate
// 0x0000
struct FVehicleInputRate
{

};

// ScriptStruct PhysXVehicles.ReplicatedVehicleState
// 0x0000
struct FReplicatedVehicleState
{

};

// ScriptStruct PhysXVehicles.WheelSetup
// 0x0000
struct FWheelSetup
{

};

// ScriptStruct PhysXVehicles.VehicleTransmissionData
// 0x0000
struct FVehicleTransmissionData
{

};

// ScriptStruct PhysXVehicles.VehicleGearData
// 0x0000
struct FVehicleGearData
{

};

// ScriptStruct PhysXVehicles.VehicleEngineData
// 0x0000
struct FVehicleEngineData
{

};

// ScriptStruct PhysXVehicles.VehicleDifferential4WData
// 0x0000
struct FVehicleDifferential4WData
{

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
