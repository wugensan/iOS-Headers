/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class VKFootprint, VKViewVolume;

@interface VKCamera : NSObject
{
    id <VKCameraDelegate> delegate;
    CDStruct_31142d93 _position;
    CDStruct_aa5aacbc _orientation;
    float _aspectRatio;
    float _verticalFieldOfView;
    CDStruct_17faa5b0 _frustum;
    CDStruct_17faa5b0 _previousFrustum;
    double _minHeight;
    double _maxHeight;
    double _maxPitch;
    double _terrainHeight;
    double _maxFarClipDistance;
    BOOL _needsUpdate;
    BOOL _updating;
    int _updateNumber;
    CDStruct_aa5aacbc _viewProjectionMatrix;
    CDStruct_aa5aacbc _projectionMatrix;
    CDStruct_aa5aacbc _viewMatrix;
    CDStruct_aa5aacbc _viewMatrixUnscaled;
    CDStruct_aa5aacbc _projectionMatrixUnscaled;
    CDStruct_aa5aacbc _viewProjectionMatrixUnscaled;
    CDStruct_aa5aacbc _worldMatrix;
    VKViewVolume *_viewVolume;
    VKFootprint *_footprint;
    double _tanHalfHorizFOV;
    double _tanHalfVerticalFOV;
    CDStruct_31142d93 _forward;
    CDStruct_31142d93 _right;
    CDStruct_31142d93 _up;
    double _fractionOfScreenAboveFarClipPlaneAtCanonicalPitch;
    double _distanceToGroundAndFarClipPlaneIntersection;
    double _screenHeightOfGroundAndFarClipPlaneIntersection;
    BOOL _allowDatelineWraparound;
    double _canonicalPitch;
    id <VKCameraDelegate> _delegate;
}

@property(nonatomic) double canonicalPitch; // @synthesize canonicalPitch=_canonicalPitch;
@property(nonatomic) BOOL allowDatelineWraparound; // @synthesize allowDatelineWraparound=_allowDatelineWraparound;
@property(readonly, nonatomic) double screenHeightOfGroundAndFarClipPlaneIntersection; // @synthesize screenHeightOfGroundAndFarClipPlaneIntersection=_screenHeightOfGroundAndFarClipPlaneIntersection;
@property(readonly, nonatomic) double distanceToGroundAndFarClipPlaneIntersection; // @synthesize distanceToGroundAndFarClipPlaneIntersection=_distanceToGroundAndFarClipPlaneIntersection;
@property(nonatomic) double fractionOfScreenAboveFarClipPlaneAtCanonicalPitch; // @synthesize fractionOfScreenAboveFarClipPlaneAtCanonicalPitch=_fractionOfScreenAboveFarClipPlaneAtCanonicalPitch;
@property(nonatomic) id <VKCameraDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) int updateNumber; // @synthesize updateNumber=_updateNumber;
@property(nonatomic) double terrainHeight; // @synthesize terrainHeight=_terrainHeight;
@property(nonatomic) double maxPitch; // @synthesize maxPitch=_maxPitch;
@property(nonatomic) double maxHeight; // @synthesize maxHeight=_maxHeight;
@property(nonatomic) double minHeight; // @synthesize minHeight=_minHeight;
@property(nonatomic) float aspectRatio; // @synthesize aspectRatio=_aspectRatio;
@property(nonatomic) CDStruct_31142d93 position; // @synthesize position=_position;
@property(readonly, nonatomic) CDStruct_17faa5b0 frustum; // @synthesize frustum=_frustum;
- (void)adjustClipPlanes;
- (double)depthForViewWidth:(double)arg1;
- (double)widthOfViewAtDepth:(double)arg1;
- (CDStruct_31142d93)groundPointFromScreenPoint:(struct CGPoint)arg1 atGroundLevel:(double)arg2;
- (CDStruct_31142d93)groundPointFromScreenPoint:(struct CGPoint)arg1;
- (void)updateIfNeeded;
- (void)setNeedsUpdate;
- (BOOL)isOuterWorldBoundsVisible;
- (BOOL)isWorldSpaceRectVisible:(const CDStruct_aca18c62 *)arg1;
- (float)maximumStyleZForRect:(const CDStruct_aca18c62 *)arg1;
- (BOOL)hasChangedState:(struct VKCameraState *)arg1;
@property(nonatomic) struct VKCameraState cameraState;
@property(readonly, nonatomic) double yaw;
@property(readonly, nonatomic) double pitch;
@property(readonly, nonatomic) CDStruct_31142d93 groundPoint;
@property(readonly, nonatomic) CDStruct_31142d93 forwardVector;
@property(readonly, nonatomic) CDStruct_31142d93 rightVector;
@property(readonly, nonatomic) CDStruct_31142d93 upVector;
@property(readonly, nonatomic) VKFootprint *footprint;
@property(readonly, nonatomic) VKViewVolume *viewVolume;
@property(readonly, nonatomic) const CDStruct_aa5aacbc *worldMatrix;
@property(readonly, nonatomic) const CDStruct_aa5aacbc *projectionMatrixUnscaled;
@property(readonly, nonatomic) const CDStruct_aa5aacbc *viewProjectionMatrixUnscaled;
@property(readonly, nonatomic) const CDStruct_aa5aacbc *viewMatrixUnscaled;
@property(readonly, nonatomic) const CDStruct_aa5aacbc *viewMatrix;
@property(readonly, nonatomic) const CDStruct_aa5aacbc *projectionMatrix;
@property(readonly, nonatomic) const CDStruct_aa5aacbc *viewProjectionMatrix;
@property(readonly, nonatomic) double tanHalfVerticalFOV;
@property(readonly, nonatomic) double tanHalfHorizFOV;
@property(readonly, nonatomic) double farClipDistance;
@property(readonly, nonatomic) float horizontalFieldOfView;
@property(nonatomic) float verticalFieldOfView;
@property(nonatomic) const CDStruct_aa5aacbc *orientation;
- (void)_setPosition:(CDStruct_31142d93)arg1;
- (id)description;
- (void)logCameraState;
- (void)dealloc;
- (id)init;

@end

