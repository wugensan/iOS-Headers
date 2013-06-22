/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <AVFoundation/AVCompositionTrack.h>

@class AVMutableCompositionTrackInternal, NSArray, NSString;

@interface AVMutableCompositionTrack : AVCompositionTrack
{
    AVMutableCompositionTrackInternal *_mutablePriv;
}

@property(nonatomic) float preferredVolume;
@property(nonatomic) struct CGAffineTransform preferredTransform;
@property(copy, nonatomic) NSString *extendedLanguageTag;
@property(copy, nonatomic) NSString *languageCode;
@property(nonatomic) int naturalTimeScale;
- (void)_setTrackReaderPropertyValue:(void *)arg1 forKey:(struct __CFString *)arg2;
- (BOOL)validateTrackSegments:(id)arg1 error:(id *)arg2;
- (void)scaleTimeRange:(CDStruct_e83c9415)arg1 toDuration:(CDStruct_1b6d18a9)arg2;
- (void)removeTimeRange:(CDStruct_e83c9415)arg1;
- (void)insertEmptyTimeRange:(CDStruct_e83c9415)arg1;
- (BOOL)insertTimeRanges:(id)arg1 ofTracks:(id)arg2 atTime:(CDStruct_1b6d18a9)arg3 error:(id *)arg4;
- (BOOL)insertTimeRange:(CDStruct_e83c9415)arg1 ofTrack:(id)arg2 atTime:(CDStruct_1b6d18a9)arg3 error:(id *)arg4;
@property(copy, nonatomic) NSArray *segments;

@end

