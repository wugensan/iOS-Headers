/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class AVAsset, AVAssetExportSessionInternal, AVAudioMix, AVVideoComposition, NSArray, NSError, NSString, NSURL;

@interface AVAssetExportSession : NSObject
{
    AVAssetExportSessionInternal *_exportSession;
}

+ (BOOL)_isCompositionWithMultipleNonEmptyEdits:(id)arg1;
+ (int)_getPassthroughExportPolicyForAssetTrack:(id)arg1 fileType:(id)arg2 asChapterTrack:(BOOL)arg3;
+ (long long)estimatedOutputFileLengthForPreset:(id)arg1 duration:(CDStruct_1b6d18a9)arg2 properties:(id)arg3;
+ (CDStruct_1b6d18a9)maximumDurationForPreset:(id)arg1 properties:(id)arg2;
+ (id)exportSessionWithAsset:(id)arg1 presetName:(id)arg2;
+ (void)determineCompatibilityOfExportPreset:(id)arg1 withAsset:(id)arg2 outputFileType:(id)arg3 completionHandler:(id)arg4;
+ (BOOL)_canWriteMediaOfAsset:(id)arg1 toFileType:(id)arg2;
+ (BOOL)_isPassthroughSupportedForAsset:(id)arg1;
+ (id)exportPresetsCompatibleWithAsset:(id)arg1;
+ (id)allExportPresets;
+ (long long)_estimatedOutputFileLengthForPreset:(id)arg1 duration:(CDStruct_1b6d18a9)arg2 properties:(id)arg3;
+ (CDStruct_1b6d18a9)_maximumDurationForPreset:(id)arg1 fileSizeBytesLimit:(long long)arg2 properties:(id)arg3;
+ (id)_figRemakerNotificationNames;
+ (id)_settingForPreset:(id)arg1;
+ (BOOL)_isExportPreset:(id)arg1 compatibleWithAsset:(id)arg2 outputFileType:(id)arg3;
+ (BOOL)_isNonPassthroughExportPreset:(id)arg1 compatibleWithAsset:(id)arg2 outputFileType:(id)arg3;
+ (BOOL)_isNonPassthroughExportPreset:(id)arg1 compatibleWithAssetContainingPlayableAudio:(BOOL)arg2 playableVideo:(BOOL)arg3 outputFileType:(id)arg4;
+ (BOOL)_isPassthroughExportPresetCompatibleWithAsset:(id)arg1 outputFileType:(id)arg2;
+ (id)_utTypesForAudioOnly;
+ (id)_utTypesForDefaultPassthroughPreset;
+ (id)_utTypesForPresets;
+ (id)_audioVideoPresets;
+ (id)_audioOnlyPresets;
- (void)setUsesHardwareVideoEncoderIfAvailable:(BOOL)arg1;
- (BOOL)usesHardwareVideoEncoderIfAvailable;
@property(nonatomic) BOOL shouldOptimizeForNetworkUse;
@property(copy, nonatomic) AVVideoComposition *videoComposition;
@property(copy, nonatomic) AVAudioMix *audioMix;
@property(nonatomic) long long fileLengthLimit;
@property(copy, nonatomic) NSArray *metadata;
@property(readonly, nonatomic) long long estimatedOutputFileLength;
@property(readonly, nonatomic) CDStruct_1b6d18a9 maxDuration;
@property(nonatomic) CDStruct_e83c9415 timeRange;
- (void)cancelExport;
- (void)exportAsynchronouslyWithCompletionHandler:(id)arg1;
- (BOOL)_validateSettablePropertiesReturningError:(id *)arg1;
@property(readonly, nonatomic) float progress;
- (void)_updateProgress;
@property(readonly, nonatomic) NSError *error;
@property(readonly, nonatomic) int status;
@property(copy, nonatomic) NSURL *outputURL;
@property(copy, nonatomic) NSString *outputFileType;
- (void)determineCompatibleFileTypesWithCompletionHandler:(id)arg1;
- (id)_determineCompatibleFileTypes;
@property(readonly, nonatomic) NSArray *supportedFileTypes;
@property(readonly, nonatomic) NSString *presetName;
@property(readonly, nonatomic) AVAsset *asset;
- (id)description;
- (void)finalize;
- (void)dealloc;
- (id)initWithAsset:(id)arg1 presetName:(id)arg2;
- (id)init;
- (struct OpaqueFigRemaker *)_createFigRemaker;
- (BOOL)_isAudioMixdownRequired:(struct __CFString *)arg1 error:(id *)arg2;
- (BOOL)_canPassThroughVideo:(id)arg1 checkEnabled:(BOOL)arg2 checkAll:(BOOL)arg3 checkProtected:(BOOL)arg4;
- (id)_settingForFigRemaker;
- (id)_retrieveChannelSpecificAudioSettingForAudioTrack:(id)arg1 fromAudioSetting:(id)arg2;
- (BOOL)_canPassThroughAudio:(id)arg1 checkEnabled:(BOOL)arg2 checkProtected:(BOOL)arg3;
- (BOOL)_totalSizeOfTracksIsWithinFileLengthLimit:(id)arg1 forSetting:(id)arg2;
- (BOOL)_hasProtectedNonAudioVideoTracks;
- (int)_getTrackCountOfType:(id)arg1 checkEnabled:(BOOL)arg2;
- (struct CGSize)_getSourceDimension;
- (void)_addListeners;
- (void)_removeListeners;
- (void)_transitionToStatus:(int)arg1 error:(id)arg2;
- (id)_actualPresetName;
- (void)_handleFigRemakerNotificationAsync:(id)arg1 payload:(id)arg2;
- (void)_handleFigRemakerNotification:(id)arg1 payload:(id)arg2;
- (id)_actualSettingForPreset:(id)arg1;

@end

