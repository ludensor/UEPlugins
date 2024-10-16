// Copyright Nori. All Rights Reserved.

#include "CommonBinkMediaPlayer.h"

#include "Widgets/Images/SImage.h"
#include "BinkMediaPlayer.h"
#include "BinkMediaTexture.h"

UCommonBinkMediaPlayer::UCommonBinkMediaPlayer(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
	, bMatchSize(false)
{

}

void UCommonBinkMediaPlayer::PostInitProperties()
{
	Super::PostInitProperties();

	if (!IsTemplate())
	{
		MediaPlayer = NewObject<UBinkMediaPlayer>(this);
		MediaPlayer->OnMediaChanged().AddUObject(this, &ThisClass::HandleMediaPlayerChangedEvent);

		MediaTexture = NewObject<UBinkMediaTexture>(this);
		MediaTexture->SetMediaPlayer(MediaPlayer);
		MediaTexture->UpdateResource();

		MediaBrush.SetResourceObject(MediaTexture);
	}
}

float UCommonBinkMediaPlayer::GetMediaDuration() const
{
	return MediaPlayer->GetDuration().GetTotalSeconds();
}

float UCommonBinkMediaPlayer::GetPlaybackTime() const
{
	return MediaPlayer->GetTime().GetTotalSeconds();
}

float UCommonBinkMediaPlayer::GetPlaybackRate() const
{
	return MediaPlayer->GetRate();
}

void UCommonBinkMediaPlayer::SetPlaybackRate(float PlaybackRate)
{
	MediaPlayer->SetRate(PlaybackRate);
}

void UCommonBinkMediaPlayer::SetLooping(bool bShouldLoopPlayback)
{
	MediaPlayer->SetLooping(bShouldLoopPlayback);
}

void UCommonBinkMediaPlayer::SetMedia(UBinkMediaPlayer* NewMediaPlayer)
{
	Close();

	if (NewMediaPlayer)
	{
		const FString& Url = NewMediaPlayer->GetUrl();
		MediaPlayer->OpenUrl(Url);
	}
}

void UCommonBinkMediaPlayer::OpenUrl(const FString& Url)
{
	Close();

	MediaPlayer->OpenUrl(Url);
}

void UCommonBinkMediaPlayer::Close()
{
	MediaPlayer->Close();
}

void UCommonBinkMediaPlayer::Play()
{
	if (MediaPlayer->IsReady() && !MediaPlayer->IsPlaying())
	{
		MediaPlayer->Play();
	}
}

void UCommonBinkMediaPlayer::Pause()
{
	MediaPlayer->Pause();
}

void UCommonBinkMediaPlayer::PlayFromStart()
{
	MediaPlayer->Rewind();

	Play();
}

bool UCommonBinkMediaPlayer::IsLooping() const
{
	return MediaPlayer->IsLooping();
}

bool UCommonBinkMediaPlayer::IsPaused() const
{
	return MediaPlayer->IsPaused();
}

bool UCommonBinkMediaPlayer::IsPlaying() const
{
	return MediaPlayer->IsPlaying();
}

void UCommonBinkMediaPlayer::SynchronizeProperties()
{
	Super::SynchronizeProperties();

	SetMedia(Media);
}

TSharedRef<SWidget> UCommonBinkMediaPlayer::RebuildWidget()
{
	return SAssignNew(MyImage, SImage).Image(&MediaBrush);
}

void UCommonBinkMediaPlayer::ReleaseSlateResources(bool bReleaseChildren)
{
	Super::ReleaseSlateResources(bReleaseChildren);

	MyImage.Reset();
}

void UCommonBinkMediaPlayer::HandleMediaPlayerChangedEvent()
{
	if (bMatchSize)
	{
		MediaBrush.ImageSize = MediaPlayer->GetDimensions();
		if (MyImage.IsValid())
		{
			MyImage->InvalidateImage();
		}
	}
}
