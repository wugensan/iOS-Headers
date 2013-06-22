/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "AVAsynchronousKeyValueLoading-Protocol.h"
#import "NSCopying-Protocol.h"

@class AVAssetInternal, NSArray;

@interface AVAsset : NSObject <NSCopying, AVAsynchronousKeyValueLoading>
{
    AVAssetInternal *_assetInternal;
}

+ (id)assetWithURL:(id)arg1 figPlaybackItem:(struct OpaqueFigPlaybackItem *)arg2 trackIDs:(id)arg3 dynamicBehavior:(BOOL)arg4;
+ (id)assetWithURL:(id)arg1;
- (BOOL)isCompatibleWithSavedPhotosAlbum;
- (BOOL)isComposable;
- (BOOL)isReadable;
- (BOOL)isExportable;
- (BOOL)isPlayable;
- (BOOL)hasProtectedContent;
- (id)compatibleTrackForCompositionTrack:(id)arg1;
- (id)tracksWithMediaCharacteristics:(id)arg1;
- (id)tracksWithMediaCharacteristic:(id)arg1;
- (id)tracksWithMediaType:(id)arg1;
- (id)trackWithTrackID:(int)arg1;
- (void)_tracksDidChange;
- (id)tracks;
- (id)metadataForFormat:(id)arg1;
- (id)availableMetadataFormats;
- (id)commonMetadata;
- (id)lyrics;
- (id)creationDate;
- (id)trackReferences;
- (id)mediaSelectionGroupForMediaCharacteristic:(id)arg1;
- (id)availableMediaCharacteristicsWithMediaSelectionOptions;
- (id)mediaSelectionGroups;
- (id)alternateTrackGroups;
- (id)subtitleAlternatesTrackGroup;
- (id)audioAlternatesTrackGroup;
- (id)_firstTrackGroupWithMediaType:(id)arg1;
- (id)trackGroups;
- (unsigned int)referenceRestrictions;
- (BOOL)providesPreciseDurationAndTiming;
- (int)naturalTimeScale;
@property(readonly, nonatomic) struct CGSize naturalSize;
@property(readonly, nonatomic) struct CGAffineTransform preferredTransform;
@property(readonly, nonatomic) float preferredVolume;
@property(readonly, nonatomic) float preferredRate;
@property(readonly, nonatomic) CDStruct_1b6d18a9 duration;
- (BOOL)_isStreaming;
- (id)_absoluteURL;
- (struct OpaqueFigPlaybackItem *)_playbackItem;
- (struct OpaqueFigFormatReader *)_formatReader;
- (struct OpaqueFigAsset *)_figAsset;
- (void)cancelLoading;
- (void)loadValuesAsynchronouslyForKeys:(id)arg1 keysForCollectionKeys:(id)arg2 completionHandler:(id)arg3;
- (void)loadValuesAsynchronouslyForKeys:(id)arg1 completionHandler:(id)arg2;
- (int)statusOfValueForKey:(id)arg1 error:(id *)arg2;
- (int)statusOfValueForKey:(id)arg1;
- (id)valueForUndefinedKey:(id)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)_comparisonToken;
- (id)_assetInspectorLoader;
- (id)_assetInspector;
- (id)_weakReference;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)chapterMetadataGroupsBestMatchingPreferredLanguages:(id)arg1;
- (id)chapterMetadataGroupsWithTitleLocale:(id)arg1 containingItemsWithCommonKeys:(id)arg2;
@property(readonly) NSArray *availableChapterLocales;
- (int)unusedTrackID;
- (BOOL)_containsAtLeastOnePlayableVideoTrack;
- (BOOL)_containsAtLeastOnePlayableAudioTrack;
- (id)_chapterTracks;

@end

