/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <AVFoundation/AVAudioOutputSettings.h>

#import "AVDecodedAudioSettingsForFig-Protocol.h"
#import "AVReencodedAudioSettingsForFig-Protocol.h"

@interface AVAVAudioSettingsAudioOutputSettings : AVAudioOutputSettings <AVReencodedAudioSettingsForFig, AVDecodedAudioSettingsForFig>
{
}

+ (id)_audioOutputSettingsWithAudioSettingsDictionary:(id)arg1 exceptionReason:(id *)arg2;
+ (id)eligibleOutputSettingsDictionaryKeys;
- (id)audioOptions;
- (struct AudioChannelLayout *)copyAudioChannelLayoutForSourceFormatDescription:(struct opaqueCMFormatDescription *)arg1 audioChannelLayoutSize:(unsigned int *)arg2;
- (void)getAudioStreamBasicDescription:(struct AudioStreamBasicDescription *)arg1 forAudioFileTypeID:(unsigned long)arg2 sourceFormatDescription:(struct opaqueCMFormatDescription *)arg3;
- (BOOL)canFullySpecifyOutputFormatReturningReason:(id *)arg1;
- (BOOL)isCodecAvailableOnCurrentSystem;
- (BOOL)willYieldCompressedSamples;
- (id)initWithTrustedAVAudioSettingsDictionary:(id)arg1;
- (id)initWithAVAudioSettingsDictionary:(id)arg1 exceptionReason:(id *)arg2;

@end

