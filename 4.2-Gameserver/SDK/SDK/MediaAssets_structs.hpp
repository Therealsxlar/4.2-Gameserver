#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EMediaWebcamCaptureDeviceFilter : uint8
{
	DepthSensor                    = 1,
	Front                          = 2,
	Rear                           = 4,
	Unknown                        = 8,
	EMediaWebcamCaptureDeviceFilter_MAX = 9,
};

enum class EMediaVideoCaptureDeviceFilter : uint8
{
	Card                           = 1,
	Software                       = 2,
	Unknown                        = 4,
	Webcam                         = 8,
	EMediaVideoCaptureDeviceFilter_MAX = 9,
};

enum class EMediaAudioCaptureDeviceFilter : uint8
{
	Card                           = 1,
	Microphone                     = 2,
	Software                       = 4,
	Unknown                        = 8,
	EMediaAudioCaptureDeviceFilter_MAX = 9,
};

enum class EMediaPlayerTrack : uint8
{
	Audio                          = 0,
	Caption                        = 1,
	Metadata                       = 2,
	Script                         = 3,
	Subtitle                       = 4,
	Text                           = 5,
	Video                          = 6,
	EMediaPlayerTrack_MAX          = 7,
};

enum class EMediaSoundChannels : int32
{
	Mono                           = 0,
	Stereo                         = 1,
	Surround                       = 2,
	EMediaSoundChannels_MAX        = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x28 - 0x0)
// ScriptStruct MediaAssets.MediaCaptureDevice
struct FMediaCaptureDevice
{
public:
	class FText                                  DisplayName;                                       // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Transient, NativeAccessSpecifierPublic)
	class FString                                URL;                                               // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
