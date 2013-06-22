/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CoreImage/CIFeature.h>

@interface CIFaceFeature : CIFeature
{
    struct CGRect bounds;
    BOOL hasLeftEyePosition;
    struct CGPoint leftEyePosition;
    BOOL hasRightEyePosition;
    struct CGPoint rightEyePosition;
    BOOL hasMouthPosition;
    struct CGPoint mouthPosition;
    BOOL hasTrackingID;
    int trackingID;
    BOOL hasTrackingFrameCount;
    int trackingFrameCount;
}

+ (id)faceFeaturesWithBoundsArray:(const struct CGRect *)arg1 count:(unsigned int)arg2;
+ (id)faceFeatureWithBounds:(struct CGRect)arg1;
@property int trackingFrameCount; // @synthesize trackingFrameCount;
@property BOOL hasTrackingFrameCount; // @synthesize hasTrackingFrameCount;
@property int trackingID; // @synthesize trackingID;
@property BOOL hasTrackingID; // @synthesize hasTrackingID;
@property struct CGPoint mouthPosition; // @synthesize mouthPosition;
@property BOOL hasMouthPosition; // @synthesize hasMouthPosition;
@property struct CGPoint rightEyePosition; // @synthesize rightEyePosition;
@property BOOL hasRightEyePosition; // @synthesize hasRightEyePosition;
@property struct CGPoint leftEyePosition; // @synthesize leftEyePosition;
@property BOOL hasLeftEyePosition; // @synthesize hasLeftEyePosition;
@property struct CGRect bounds; // @synthesize bounds;
- (id).cxx_construct;
- (id)initWithBounds:(struct CGRect)arg1 hasLeftEyePosition:(BOOL)arg2 leftEyePosition:(struct CGPoint)arg3 hasRightEyePosition:(BOOL)arg4 rightEyePosition:(struct CGPoint)arg5 hasMouthPosition:(BOOL)arg6 mouthPosition:(struct CGPoint)arg7 hasTrackingID:(BOOL)arg8 trackingID:(int)arg9 hasTrackingFrameCount:(BOOL)arg10 trackingFrameCount:(int)arg11;
- (id)initWithBounds:(struct CGRect)arg1;
- (id)type;

@end

