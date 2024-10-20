// Copyright Nori. All Rights Reserved.

#include "NoriBinkMediaPlayer.h"

#include "Widgets/Images/SImage.h"
#include "BinkMediaPlayer.h"
#include "BinkMediaTexture.h"

UNoriBinkMediaPlayer::UNoriBinkMediaPlayer(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
	, bMatchSize(false)
{

}

void UNoriBinkMediaPlayer::PostInitProperties()
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

float UNoriBinkMediaPlayer::GetMediaDuration() const
{
	return MediaPlayer->GetDuration().GetTotalSeconds();
}

float UNoriBinkMediaPlayer::GetPlaybackTime() const
{
	return MediaPlayer->GetTime().GetTotalSeconds();
}

float UNoriBinkMediaPlayer::GetPlaybackRate() const
{
	return MediaPlayer->GetRate();
}

void UNoriBinkMediaPlayer::SetPlaybackRate(float PlaybackRate)
{
	MediaPlayer->SetRate(PlaybackRate);
}

void UNoriBinkMediaPlayer::SetLooping(bool bShouldLoopPlayback)
{
	MediaPlayer->SetLooping(bShouldLoopPlayback);
}

void UNoriBinkMediaPlayer::SetMedia(UBinkMediaPlayer* NewMediaPlayer)
{
	Close();

	if (NewMediaPlayer)
	{
		const FString& Url = NewMediaPlayer->GetUrl();
		MediaPlayer->OpenUrl(Url);
	}
}

void UNoriBinkMediaPlayer::OpenUrl(const FString& Url)
{
	Close();

	MediaPlayer->OpenUrl(Url);
}

void UNoriBinkMediaPlayer::Close()
{
	MediaPlayer->Close();
}

void UNoriBinkMediaPlayer::Play()
{
	if (MediaPlayer->IsReady() && !MediaPlayer->IsPlaying())
	{
		MediaPlayer->Play();
	}
}

void UNoriBinkMediaPlayer::Pause()
{
	MediaPlayer->Pause();
}

void UNoriBinkMediaPlayer::PlayFromStart()
{
	MediaPlayer->Rewind();

	Play();
}

bool UNoriBinkMediaPlayer::IsLooping() const
{
	return MediaPlayer->IsLooping();
}

bool UNoriBinkMediaPlayer::IsPaused() const
{
	return MediaPlayer->IsPaused();
}

bool UNoriBinkMediaPlayer::IsPlaying() const
{
	return MediaPlayer->IsPlaying();
}

void UNoriBinkMediaPlayer::SynchronizeProperties()
{
	Super::SynchronizeProperties();

	SetMedia(Media);
}

TSharedRef<SWidget> UNoriBinkMediaPlayer::RebuildWidget()
{
	return SAssignNew(MyImage, SImage).Image(&MediaBrush);
}

void UNoriBinkMediaPlayer::ReleaseSlateResources(bool bReleaseChildren)
{
	Super::ReleaseSlateResources(bReleaseChildren);

	MyImage.Reset();
}

void UNoriBinkMediaPlayer::HandleMediaPlayerChangedEvent()
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
