/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <MapKit/MKUserLocationMarker.h>

@class VKAnimation, VKCircleAnnotationMarkerLayer, VKImageAnnotationMarkerLayer;

@interface MKGemUserLocationMarker : MKUserLocationMarker
{
    BOOL _shouldPulse;
    VKImageAnnotationMarkerLayer *_imageLayer;
    VKImageAnnotationMarkerLayer *_headingLayer;
    VKCircleAnnotationMarkerLayer *_accuracyLayer;
    VKImageAnnotationMarkerLayer *_pulseLayer;
    VKAnimation *_pulseAnimation;
}

- (struct CGRect)maximumBoundingRectWithCanvasSize:(struct CGSize)arg1;
- (void)setEffectsEnabled:(BOOL)arg1;
- (void)setOpacity:(float)arg1;
- (void)setSelected:(BOOL)arg1;
- (void)setShouldDisplayHeading:(BOOL)arg1;
- (void)setHeadingAccuracy:(double)arg1;
- (id)_headingImageForAccuracy:(double)arg1;
- (void)setLocationAccuracy:(double)arg1;
- (void)setStyleTransitionState:(CDStruct_e2152fa8)arg1;
- (int)_currentStyle;
- (void)setLocationSource:(int)arg1;
- (void)_setShouldPulse:(BOOL)arg1;
- (void)_startPulseAnimationIfPossible;
- (void)setStale:(BOOL)arg1;
- (void)dealloc;
- (id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2;

@end

