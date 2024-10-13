// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CommonBinkMediaPlayer.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UBinkMediaPlayer;
#ifdef COMMONBINKMEDIAPLAYER_CommonBinkMediaPlayer_generated_h
#error "CommonBinkMediaPlayer.generated.h already included, missing '#pragma once' in CommonBinkMediaPlayer.h"
#endif
#define COMMONBINKMEDIAPLAYER_CommonBinkMediaPlayer_generated_h

#define FID_LyraStarterGame_Plugins_CommonBinkMediaPlayer_Source_CommonBinkMediaPlayer_Public_CommonBinkMediaPlayer_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIsPlaying); \
	DECLARE_FUNCTION(execIsPaused); \
	DECLARE_FUNCTION(execIsLooping); \
	DECLARE_FUNCTION(execPlayFromStart); \
	DECLARE_FUNCTION(execPause); \
	DECLARE_FUNCTION(execPlay); \
	DECLARE_FUNCTION(execClose); \
	DECLARE_FUNCTION(execOpenUrl); \
	DECLARE_FUNCTION(execSetMedia); \
	DECLARE_FUNCTION(execSetLooping); \
	DECLARE_FUNCTION(execSetPlaybackRate); \
	DECLARE_FUNCTION(execGetPlaybackRate); \
	DECLARE_FUNCTION(execGetPlaybackTime); \
	DECLARE_FUNCTION(execGetMediaDuration);


#define FID_LyraStarterGame_Plugins_CommonBinkMediaPlayer_Source_CommonBinkMediaPlayer_Public_CommonBinkMediaPlayer_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCommonBinkMediaPlayer(); \
	friend struct Z_Construct_UClass_UCommonBinkMediaPlayer_Statics; \
public: \
	DECLARE_CLASS(UCommonBinkMediaPlayer, UWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CommonBinkMediaPlayer"), NO_API) \
	DECLARE_SERIALIZER(UCommonBinkMediaPlayer)


#define FID_LyraStarterGame_Plugins_CommonBinkMediaPlayer_Source_CommonBinkMediaPlayer_Public_CommonBinkMediaPlayer_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCommonBinkMediaPlayer(UCommonBinkMediaPlayer&&); \
	UCommonBinkMediaPlayer(const UCommonBinkMediaPlayer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCommonBinkMediaPlayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonBinkMediaPlayer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCommonBinkMediaPlayer) \
	NO_API virtual ~UCommonBinkMediaPlayer();


#define FID_LyraStarterGame_Plugins_CommonBinkMediaPlayer_Source_CommonBinkMediaPlayer_Public_CommonBinkMediaPlayer_h_17_PROLOG
#define FID_LyraStarterGame_Plugins_CommonBinkMediaPlayer_Source_CommonBinkMediaPlayer_Public_CommonBinkMediaPlayer_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_LyraStarterGame_Plugins_CommonBinkMediaPlayer_Source_CommonBinkMediaPlayer_Public_CommonBinkMediaPlayer_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_LyraStarterGame_Plugins_CommonBinkMediaPlayer_Source_CommonBinkMediaPlayer_Public_CommonBinkMediaPlayer_h_20_INCLASS_NO_PURE_DECLS \
	FID_LyraStarterGame_Plugins_CommonBinkMediaPlayer_Source_CommonBinkMediaPlayer_Public_CommonBinkMediaPlayer_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMMONBINKMEDIAPLAYER_API UClass* StaticClass<class UCommonBinkMediaPlayer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_LyraStarterGame_Plugins_CommonBinkMediaPlayer_Source_CommonBinkMediaPlayer_Public_CommonBinkMediaPlayer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
