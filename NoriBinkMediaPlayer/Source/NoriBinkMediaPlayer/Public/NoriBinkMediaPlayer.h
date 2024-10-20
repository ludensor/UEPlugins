// Copyright Nori. All Rights Reserved.

#pragma once

#include "Components/Widget.h"

#include "NoriBinkMediaPlayer.generated.h"

class SImage;
class UBinkMediaPlayer;
class UBinkMediaTexture;

/**
 *
 */
UCLASS()
class NORIBINKMEDIAPLAYER_API UNoriBinkMediaPlayer : public UWidget
{
	GENERATED_BODY()

public:
	UNoriBinkMediaPlayer(const FObjectInitializer& ObjectInitializer);

	UFUNCTION(BlueprintCallable, Category = "Bink Media Player")
	float GetMediaDuration() const;

	UFUNCTION(BlueprintCallable, Category = "Bink Media Player")
	float GetPlaybackTime() const;

	UFUNCTION(BlueprintCallable, Category = "Bink Media Player")
	float GetPlaybackRate() const;

	UFUNCTION(BlueprintCallable, Category = "Bink Media Player")
	void SetPlaybackRate(float PlaybackRate);

	UFUNCTION(BlueprintCallable, Category = "Bink Media Player")
	void SetLooping(bool bShouldLoopPlayback);

	UFUNCTION(BlueprintCallable, Category = "Bink Media Player")
	void SetMedia(UBinkMediaPlayer* NewMediaPlayer);

	UFUNCTION(BlueprintCallable, Category = "Bink Media Player")
	void OpenUrl(const FString& Url);

	UFUNCTION(BlueprintCallable, Category = "Bink Media Player")
	void Close();

	UFUNCTION(BlueprintCallable, Category = "Bink Media Player")
	void Play();

	UFUNCTION(BlueprintCallable, Category = "Bink Media Player")
	void Pause();

	UFUNCTION(BlueprintCallable, Category = "Bink Media Player")
	void PlayFromStart();

	UFUNCTION(BlueprintCallable, Category = "Bink Media Player")
	bool IsLooping() const;

	UFUNCTION(BlueprintCallable, Category = "Bink Media Player")
	bool IsPaused() const;

	UFUNCTION(BlueprintCallable, Category = "Bink Media Player")
	bool IsPlaying() const;

private:
	virtual void PostInitProperties() override final;

	virtual void SynchronizeProperties() override final;
	virtual TSharedRef<SWidget> RebuildWidget() override final;
	virtual void ReleaseSlateResources(bool bReleaseChildren) override final;

	void HandleMediaPlayerChangedEvent();

private:
	UPROPERTY(EditAnywhere, Category = "Bink Media Player")
	TObjectPtr<UBinkMediaPlayer> Media;

	UPROPERTY(EditAnywhere, Category = "Bink Media Player")
	bool bMatchSize;

	UPROPERTY(Transient)
	TObjectPtr<UBinkMediaPlayer> MediaPlayer;

	UPROPERTY(Transient)
	TObjectPtr<UBinkMediaTexture> MediaTexture;

	UPROPERTY(Transient)
	FSlateBrush MediaBrush;

	TSharedPtr<SImage> MyImage;
};
