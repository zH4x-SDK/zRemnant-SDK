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

// Enum CoreUObject.EInterpCurveMode
enum class CoreUObject_EInterpCurveMode : uint8_t
{
	CIM_Linear                     = 0,
	CIM_CurveAuto                  = 1,
	CIM_Constant                   = 2,
	CIM_CurveUser                  = 3,
	CIM_CurveBreak                 = 4,
	CIM_CurveAutoClamped           = 5,
	CIM_MAX                        = 6,

};

// Enum CoreUObject.ERangeBoundTypes
enum class CoreUObject_ERangeBoundTypes : uint8_t
{
	ERangeBoundTypes__Exclusive    = 0,
	ERangeBoundTypes__Inclusive    = 1,
	ERangeBoundTypes__Open         = 2,
	ERangeBoundTypes__ERangeBoundTypes_MAX = 3,

};

// Enum CoreUObject.ELocalizedTextSourceCategory
enum class CoreUObject_ELocalizedTextSourceCategory : uint8_t
{
	ELocalizedTextSourceCategory__Game = 0,
	ELocalizedTextSourceCategory__Engine = 1,
	ELocalizedTextSourceCategory__Editor = 2,
	ELocalizedTextSourceCategory__ELocalizedTextSourceCategory_MAX = 3,

};

// Enum CoreUObject.EAutomationEventType
enum class CoreUObject_EAutomationEventType : uint8_t
{
	EAutomationEventType__Info     = 0,
	EAutomationEventType__Warning  = 1,
	EAutomationEventType__Error    = 2,
	EAutomationEventType__EAutomationEventType_MAX = 3,

};

// Enum CoreUObject.ELifetimeCondition
enum class CoreUObject_ELifetimeCondition : uint8_t
{
	COND_None                      = 0,
	COND_InitialOnly               = 1,
	COND_OwnerOnly                 = 2,
	COND_SkipOwner                 = 3,
	COND_SimulatedOnly             = 4,
	COND_AutonomousOnly            = 5,
	COND_SimulatedOrPhysics        = 6,
	COND_InitialOrOwner            = 7,
	COND_Custom                    = 8,
	COND_ReplayOrOwner             = 9,
	COND_ReplayOnly                = 10,
	COND_SimulatedOnlyNoReplay     = 11,
	COND_SimulatedOrPhysicsNoReplay = 12,
	COND_SkipReplay                = 13,
	COND_Max                       = 14,

};

// Enum CoreUObject.EUnit
enum class CoreUObject_EUnit : uint8_t
{
	EUnit__Micrometers             = 0,
	EUnit__Millimeters             = 1,
	EUnit__Centimeters             = 2,
	EUnit__Meters                  = 3,
	EUnit__Kilometers              = 4,
	EUnit__Inches                  = 5,
	EUnit__Feet                    = 6,
	EUnit__Yards                   = 7,
	EUnit__Miles                   = 8,
	EUnit__Lightyears              = 9,
	EUnit__Degrees                 = 10,
	EUnit__Radians                 = 11,
	EUnit__MetersPerSecond         = 12,
	EUnit__KilometersPerHour       = 13,
	EUnit__MilesPerHour            = 14,
	EUnit__Celsius                 = 15,
	EUnit__Farenheit               = 16,
	EUnit__Kelvin                  = 17,
	EUnit__Micrograms              = 18,
	EUnit__Milligrams              = 19,
	EUnit__Grams                   = 20,
	EUnit__Kilograms               = 21,
	EUnit__MetricTons              = 22,
	EUnit__Ounces                  = 23,
	EUnit__Pounds                  = 24,
	EUnit__Stones                  = 25,
	EUnit__Newtons                 = 26,
	EUnit__PoundsForce             = 27,
	EUnit__KilogramsForce          = 28,
	EUnit__Hertz                   = 29,
	EUnit__Kilohertz               = 30,
	EUnit__Megahertz               = 31,
	EUnit__Gigahertz               = 32,
	EUnit__RevolutionsPerMinute    = 33,
	EUnit__Bytes                   = 34,
	EUnit__Kilobytes               = 35,
	EUnit__Megabytes               = 36,
	EUnit__Gigabytes               = 37,
	EUnit__Terabytes               = 38,
	EUnit__Lumens                  = 39,
	EUnit__Milliseconds            = 40,
	EUnit__Seconds                 = 41,
	EUnit__Minutes                 = 42,
	EUnit__Hours                   = 43,
	EUnit__Days                    = 44,
	EUnit__Months                  = 45,
	EUnit__Years                   = 46,
	EUnit__Multiplier              = 47,
	EUnit__Percentage              = 48,
	EUnit__Unspecified             = 49,
	EUnit__EUnit_MAX               = 50,

};

// Enum CoreUObject.EMouseCursor
enum class CoreUObject_EMouseCursor : uint8_t
{
	EMouseCursor__None             = 0,
	EMouseCursor__Default          = 1,
	EMouseCursor__TextEditBeam     = 2,
	EMouseCursor__ResizeLeftRight  = 3,
	EMouseCursor__ResizeUpDown     = 4,
	EMouseCursor__ResizeSouthEast  = 5,
	EMouseCursor__ResizeSouthWest  = 6,
	EMouseCursor__CardinalCross    = 7,
	EMouseCursor__Crosshairs       = 8,
	EMouseCursor__Hand             = 9,
	EMouseCursor__GrabHand         = 10,
	EMouseCursor__GrabHandClosed   = 11,
	EMouseCursor__SlashedCircle    = 12,
	EMouseCursor__EyeDropper       = 13,
	EMouseCursor__EMouseCursor_MAX = 14,

};

// Enum CoreUObject.EPixelFormat
enum class CoreUObject_EPixelFormat : uint8_t
{
	PF_Unknown                     = 0,
	PF_A32B32G32R32F               = 1,
	PF_B8G8R8A8                    = 2,
	PF_G8                          = 3,
	PF_G16                         = 4,
	PF_DXT1                        = 5,
	PF_DXT3                        = 6,
	PF_DXT5                        = 7,
	PF_UYVY                        = 8,
	PF_FloatRGB                    = 9,
	PF_FloatRGBA                   = 10,
	PF_DepthStencil                = 11,
	PF_ShadowDepth                 = 12,
	PF_R32_FLOAT                   = 13,
	PF_G16R16                      = 14,
	PF_G16R16F                     = 15,
	PF_G16R16F_FILTER              = 16,
	PF_G32R32F                     = 17,
	PF_A2B10G10R10                 = 18,
	PF_A16B16G16R16                = 19,
	PF_D24                         = 20,
	PF_R16F                        = 21,
	PF_R16F_FILTER                 = 22,
	PF_BC5                         = 23,
	PF_V8U8                        = 24,
	PF_A1                          = 25,
	PF_FloatR11G11B10              = 26,
	PF_A8                          = 27,
	PF_R32_UINT                    = 28,
	PF_R32_SINT                    = 29,
	PF_PVRTC2                      = 30,
	PF_PVRTC4                      = 31,
	PF_R16_UINT                    = 32,
	PF_R16_SINT                    = 33,
	PF_R16G16B16A16_UINT           = 34,
	PF_R16G16B16A16_SINT           = 35,
	PF_R5G6B5_UNORM                = 36,
	PF_R8G8B8A8                    = 37,
	PF_A8R8G8B8                    = 38,
	PF_BC4                         = 39,
	PF_R8G8                        = 40,
	PF_ATC_RGB                     = 41,
	PF_ATC_RGBA_E                  = 42,
	PF_ATC_RGBA_I                  = 43,
	PF_X24_G8                      = 44,
	PF_ETC1                        = 45,
	PF_ETC2_RGB                    = 46,
	PF_ETC2_RGBA                   = 47,
	PF_R32G32B32A32_UINT           = 48,
	PF_R16G16_UINT                 = 49,
	PF_ASTC_4x4                    = 50,
	PF_ASTC_6x6                    = 51,
	PF_ASTC_8x8                    = 52,
	PF_ASTC_10x10                  = 53,
	PF_ASTC_12x12                  = 54,
	PF_BC6H                        = 55,
	PF_BC7                         = 56,
	PF_R8_UINT                     = 57,
	PF_L8                          = 58,
	PF_XGXR8                       = 59,
	PF_R8G8B8A8_UINT               = 60,
	PF_R8G8B8A8_SNORM              = 61,
	PF_R16G16B16A16_UNORM          = 62,
	PF_R16G16B16A16_SNORM          = 63,
	PF_PLATFORM_HDR                = 64,
	PF_PLATFORM_HDR01              = 65,
	PF_PLATFORM_HDR02              = 66,
	PF_NV12                        = 67,
	PF_MAX_VALUE                   = 68,

};

// Enum CoreUObject.EAxis
enum class CoreUObject_EAxis : uint8_t
{
	EAxis__None                    = 0,
	EAxis__X                       = 1,
	EAxis__Y                       = 2,
	EAxis__Z                       = 3,
	EAxis__EAxis_MAX               = 4,

};

// Enum CoreUObject.ELogTimes
enum class CoreUObject_ELogTimes : uint8_t
{
	ELogTimes__None                = 0,
	ELogTimes__UTC                 = 1,
	ELogTimes__SinceGStartTime     = 2,
	ELogTimes__Local               = 3,
	ELogTimes__ELogTimes_MAX       = 4,

};

// Enum CoreUObject.ESearchDir
enum class CoreUObject_ESearchDir : uint8_t
{
	ESearchDir__FromStart          = 0,
	ESearchDir__FromEnd            = 1,
	ESearchDir__ESearchDir_MAX     = 2,

};

// Enum CoreUObject.ESearchCase
enum class CoreUObject_ESearchCase : uint8_t
{
	ESearchCase__CaseSensitive     = 0,
	ESearchCase__IgnoreCase        = 1,
	ESearchCase__ESearchCase_MAX   = 2,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct CoreUObject.JoinabilitySettings
// 0x0000
struct FJoinabilitySettings
{

};

// ScriptStruct CoreUObject.UniqueNetIdWrapper
// 0x0000
struct FUniqueNetIdWrapper
{

};

// ScriptStruct CoreUObject.Guid
// 0x0000
struct FGuid
{

};

// ScriptStruct CoreUObject.Vector
// 0x0000
struct FVector
{


	inline FVector() : X(0), Y(0), Z(0) {}

	inline FVector(float x, float y, float z) : X(x), Y(y), Z(z) {}

	inline FVector operator + (const FVector& other) const { return FVector(X + other.X, Y + other.Y, Z + other.Z); }

	inline FVector operator - (const FVector& other) const { return FVector(X - other.X, Y - other.Y, Z - other.Z); }

	inline FVector operator * (float scalar) const { return FVector(X * scalar, Y * scalar, Z * scalar); }

	inline FVector operator * (const FVector& other) const { return FVector(X * other.X, Y * other.Y, Z * other.Z); }

	inline FVector operator / (float scalar) const { return FVector(X / scalar, Y / scalar, Z / scalar); }

	inline FVector operator / (const FVector& other) const { return FVector(X / other.X, Y / other.Y, Z / other.Z); }

	inline FVector& operator=  (const FVector& other) { X = other.X; Y = other.Y; Z = other.Z; return *this; }

	inline FVector& operator+= (const FVector& other) { X += other.X; Y += other.Y; Z += other.Z; return *this; }

	inline FVector& operator-= (const FVector& other) { X -= other.X; Y -= other.Y; Z -= other.Z; return *this; }

	inline FVector& operator*= (const float other) { X *= other; Y *= other; Z *= other; return *this; }

	inline float Dot(const FVector& b) const { return (X * b.X) + (Y * b.Y) + (Z * b.Z); }

	inline float MagnitudeSqr() const { return Dot(*this); }

	inline float Magnitude() const { return std::sqrtf(MagnitudeSqr()); }

	inline FVector Unit() const
	{
		const float fMagnitude = Magnitude();
		return FVector(X / fMagnitude, Y / fMagnitude, Z / fMagnitude);
	}

	friend bool operator==(const FVector& first, const FVector& second) { return first.X == second.X && first.Y == second.Y && first.Z == second.Z; }

	friend bool operator!=(const FVector& first, const FVector& second) { return !(first == second); }

};

// ScriptStruct CoreUObject.Vector4
// 0x0000
struct FVector4
{

};

// ScriptStruct CoreUObject.Vector2D
// 0x0000
struct FVector2D
{


	inline FVector2D() : X(0), Y(0) {}

	inline FVector2D(float x, float y) : X(x), Y(y) {}

	inline FVector2D operator + (const FVector2D& other) const { return FVector2D(X + other.X, Y + other.Y); }

	inline FVector2D operator - (const FVector2D& other) const { return FVector2D(X - other.X, Y - other.Y); }

	inline FVector2D operator * (float scalar) const { return FVector2D(X * scalar, Y * scalar); }

	inline FVector2D operator * (const FVector2D& other) const { return FVector2D(X * other.X, Y * other.Y); }

	inline FVector2D operator / (float scalar) const { return FVector2D(X / scalar, Y / scalar); }

	inline FVector2D operator / (const FVector2D& other) const { return FVector2D(X / other.X, Y / other.Y); }

	inline FVector2D& operator=  (const FVector2D& other) { X = other.X; Y = other.Y; return *this; }

	inline FVector2D& operator+= (const FVector2D& other) { X += other.X; Y += other.Y; return *this; }

	inline FVector2D& operator-= (const FVector2D& other) { X -= other.X; Y -= other.Y; return *this; }

	inline FVector2D& operator*= (const float other) { X *= other; Y *= other; return *this; }

};

// ScriptStruct CoreUObject.TwoVectors
// 0x0000
struct FTwoVectors
{

};

// ScriptStruct CoreUObject.Plane
// 0x0000
struct FPlane : public FVector
{

};

// ScriptStruct CoreUObject.Rotator
// 0x0000
struct FRotator
{


	inline FRotator() : Pitch(0), Yaw(0), Roll(0) {}

	inline FRotator(float pitch, float yaw, float roll) : Pitch(pitch), Yaw(yaw), Roll(roll) {}

	inline float Size() { return sqrt(Pitch * Pitch + Yaw * Yaw + Roll * Roll); }

	inline FRotator Clamp()
	{
		FRotator r = { Pitch, Yaw, Roll };
		if (r.Yaw > 180.f)
			r.Yaw -= 360.f;
		else if (r.Yaw < -180.f)
			r.Yaw += 360.f;

		if (r.Pitch > 180.f)
			r.Pitch -= 360.f;
		else if (r.Pitch < -180.f)
			r.Pitch += 360.f;

		if (r.Pitch < -89.f)
			r.Pitch = -89.f;
		else if (r.Pitch > 89.f)
			r.Pitch = 89.f;

		r.Roll = 0.f;
		return r;
	}

	inline FRotator operator + (const FRotator& other) const { return FRotator(Pitch + other.Pitch, Yaw + other.Yaw, Roll + other.Roll); }

	inline FRotator operator - (const FRotator& other) const { return FRotator(Pitch - other.Pitch, Yaw - other.Yaw, Roll - other.Roll); }

	inline FRotator operator * (float scalar) const { return FRotator(Pitch * scalar, Yaw * scalar, Roll * scalar); }

	inline FRotator operator * (const FRotator& other) const { return FRotator(Pitch * other.Pitch, Yaw * other.Yaw, Roll * other.Roll); }

	inline FRotator operator / (float scalar) const { return FRotator(Pitch / scalar, Yaw / scalar, Roll / scalar); }

	inline FRotator operator / (const FRotator& other) const { return FRotator(Pitch / other.Pitch, Yaw / other.Yaw, Roll / other.Roll); }

	inline FRotator& operator=  (const FRotator& other) { Pitch = other.Pitch; Yaw = other.Yaw; Roll = other.Roll; return *this; }

	inline FRotator& operator+= (const FRotator& other) { Pitch += other.Pitch; Yaw += other.Yaw; Roll += other.Roll; return *this; }

	inline FRotator& operator-= (const FRotator& other) { Pitch -= other.Pitch; Yaw -= other.Yaw; Roll -= other.Roll; return *this; }

	inline FRotator& operator*= (const float other) { Pitch *= other; Yaw *= other; Roll *= other; return *this; }

};

// ScriptStruct CoreUObject.Quat
// 0x0000
struct FQuat
{

};

// ScriptStruct CoreUObject.PackedNormal
// 0x0000
struct FPackedNormal
{

};

// ScriptStruct CoreUObject.PackedRGB10A2N
// 0x0000
struct FPackedRGB10A2N
{

};

// ScriptStruct CoreUObject.PackedRGBA16N
// 0x0000
struct FPackedRGBA16N
{

};

// ScriptStruct CoreUObject.IntPoint
// 0x0000
struct FIntPoint
{

};

// ScriptStruct CoreUObject.IntVector
// 0x0000
struct FIntVector
{

};

// ScriptStruct CoreUObject.Color
// 0x0000
struct FColor
{

};

// ScriptStruct CoreUObject.LinearColor
// 0x0000
struct FLinearColor
{


	inline FLinearColor()
		: R(0), G(0), B(0), A(0)
	{ }

	inline FLinearColor(float r, float g, float b, float a)
		: R(r),
		  G(g),
		  B(b),
		  A(a)
	{ }

};

// ScriptStruct CoreUObject.Box
// 0x0000
struct FBox
{

};

// ScriptStruct CoreUObject.Box2D
// 0x0000
struct FBox2D
{

};

// ScriptStruct CoreUObject.BoxSphereBounds
// 0x0000
struct FBoxSphereBounds
{

};

// ScriptStruct CoreUObject.OrientedBox
// 0x0000
struct FOrientedBox
{

};

// ScriptStruct CoreUObject.Matrix
// 0x0000
struct FMatrix
{

};

// ScriptStruct CoreUObject.InterpCurvePointFloat
// 0x0000
struct FInterpCurvePointFloat
{

};

// ScriptStruct CoreUObject.InterpCurveFloat
// 0x0000
struct FInterpCurveFloat
{

};

// ScriptStruct CoreUObject.InterpCurvePointVector2D
// 0x0000
struct FInterpCurvePointVector2D
{

};

// ScriptStruct CoreUObject.InterpCurveVector2D
// 0x0000
struct FInterpCurveVector2D
{

};

// ScriptStruct CoreUObject.InterpCurvePointVector
// 0x0000
struct FInterpCurvePointVector
{

};

// ScriptStruct CoreUObject.InterpCurveVector
// 0x0000
struct FInterpCurveVector
{

};

// ScriptStruct CoreUObject.InterpCurvePointQuat
// 0x0000
struct FInterpCurvePointQuat
{

};

// ScriptStruct CoreUObject.InterpCurveQuat
// 0x0000
struct FInterpCurveQuat
{

};

// ScriptStruct CoreUObject.InterpCurvePointTwoVectors
// 0x0000
struct FInterpCurvePointTwoVectors
{

};

// ScriptStruct CoreUObject.InterpCurveTwoVectors
// 0x0000
struct FInterpCurveTwoVectors
{

};

// ScriptStruct CoreUObject.InterpCurvePointLinearColor
// 0x0000
struct FInterpCurvePointLinearColor
{

};

// ScriptStruct CoreUObject.InterpCurveLinearColor
// 0x0000
struct FInterpCurveLinearColor
{

};

// ScriptStruct CoreUObject.Transform
// 0x0000
struct FTransform
{

};

// ScriptStruct CoreUObject.RandomStream
// 0x0000
struct FRandomStream
{

};

// ScriptStruct CoreUObject.DateTime
// 0x0000
struct FDateTime
{

};

// ScriptStruct CoreUObject.FrameNumber
// 0x0000
struct FFrameNumber
{

};

// ScriptStruct CoreUObject.FrameRate
// 0x0000
struct FFrameRate
{

};

// ScriptStruct CoreUObject.FrameTime
// 0x0000
struct FFrameTime
{

};

// ScriptStruct CoreUObject.QualifiedFrameTime
// 0x0000
struct FQualifiedFrameTime
{

};

// ScriptStruct CoreUObject.Timecode
// 0x0000
struct FTimecode
{

};

// ScriptStruct CoreUObject.Timespan
// 0x0000
struct FTimespan
{

};

// ScriptStruct CoreUObject.SoftObjectPath
// 0x0000
struct FSoftObjectPath
{

};

// ScriptStruct CoreUObject.SoftClassPath
// 0x0000
struct FSoftClassPath : public FSoftObjectPath
{

};

// ScriptStruct CoreUObject.PrimaryAssetType
// 0x0000
struct FPrimaryAssetType
{

};

// ScriptStruct CoreUObject.PrimaryAssetId
// 0x0000
struct FPrimaryAssetId
{

};

// ScriptStruct CoreUObject.FallbackStruct
// 0x0000
struct FFallbackStruct
{

};

// ScriptStruct CoreUObject.FloatRangeBound
// 0x0000
struct FFloatRangeBound
{

};

// ScriptStruct CoreUObject.FloatRange
// 0x0000
struct FFloatRange
{

};

// ScriptStruct CoreUObject.Int32RangeBound
// 0x0000
struct FInt32RangeBound
{

};

// ScriptStruct CoreUObject.Int32Range
// 0x0000
struct FInt32Range
{

};

// ScriptStruct CoreUObject.FloatInterval
// 0x0000
struct FFloatInterval
{

};

// ScriptStruct CoreUObject.Int32Interval
// 0x0000
struct FInt32Interval
{

};

// ScriptStruct CoreUObject.PolyglotTextData
// 0x0000
struct FPolyglotTextData
{

};

// ScriptStruct CoreUObject.AutomationEvent
// 0x0000
struct FAutomationEvent
{

};

// ScriptStruct CoreUObject.AutomationExecutionEntry
// 0x0000
struct FAutomationExecutionEntry
{

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
