/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <VectorKit/VKOverlayPainter.h>

#import "VKPolylineObserver-Protocol.h"

@class GEORoute, NSSet, VGLRenderState, VGLTexture, VKAnimation, VKPolylineOverlay, VKRouteLine, VKTileKeyList, VKTrafficDrawStyle;

@interface VKPolylineOverlayPainter : VKOverlayPainter <VKPolylineObserver>
{
    VKRouteLine *_routeLine;
    double _routeLineHalfWidthRegular;
    double _routeLineHalfWidthRealistic;
    _Bool _selected;
    VGLTexture *_selectedTextureRealistic;
    VGLTexture *_obscuredTextureRealistic;
    VGLTexture *_travelledTextureRealistic;
    GEORoute *_route;
    struct RouteLineStyle _style;
    CDStruct_aa5aacbc _matrix;
    CDStruct_aa5aacbc _inverseMatrix;
    NSSet *_previousTilesInView;
    VKTileKeyList *_previousKeysInView;
    double _simplificationEpsilon;
    VKAnimation *_fadeAnimation;
    float _alphaScale;
    VKAnimation *_arrowFadeAnimation;
    float _arrowAlphaScale;
    _Bool _showArrows;
    VKAnimation *_arrowCrossFadeAnimation;
    _Bool _showTraffic;
    _Bool _forceRoutelineUpdate;
    int _stencilValue;
    double _contentScale;
    VGLRenderState *_renderState;
    VKTrafficDrawStyle *_trafficDrawStyle;
    unsigned long long _targetDisplayStep;
    float _crossfadingDisplayStep;
    _Bool _wasInRealisticMode;
}

@property(nonatomic) _Bool showTraffic; // @synthesize showTraffic=_showTraffic;
@property(retain, nonatomic) GEORoute *route; // @synthesize route=_route;
@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)stylesheetDidChange;
- (void)setContainerModel:(id)arg1;
- (id)stylesheet;
- (void)updateRouteLineStencilValue:(int)arg1;
- (void)_didReceiveMemoryWarning;
- (void)drawDebug:(id)arg1 tiles:(id)arg2;
- (void)_drawRealisticWithContext:(id)arg1;
- (void)drawArrowsWithContext:(id)arg1;
- (void)prepareToDrawWithContext:(id)arg1;
- (void)_drawRegularWithContext:(id)arg1;
- (float)routeLineWidthForCamera:(id)arg1 canvasSize:(struct CGSize)arg2;
- (void)_populateRenderBuffer:(id)arg1 matrix:(void)arg2 halfWidth:(const CDUnion_f5b85e25 *)arg3 context:(float)arg4;
- (_Bool)_shouldShowTraffic;
- (void)drawWithContext:(id)arg1 tiles:(id)arg2 prepare:(_Bool)arg3 updateStencil:(_Bool)arg4;
- (void)drawWithContext:(id)arg1 tiles:(id)arg2;
- (void)layoutWithContext:(id)arg1 tiles:(id)arg2 keysInView:(id)arg3;
- (void)setNeedsLayoutForPolyline:(id)arg1;
@property(readonly, nonatomic) VKPolylineOverlay *polyline;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)initWithOverlay:(id)arg1;
- (void)_releaseTextures;

@end

