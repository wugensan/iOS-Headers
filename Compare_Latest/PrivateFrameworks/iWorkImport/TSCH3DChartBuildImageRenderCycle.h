/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iWorkImport/TSCH3DChartRenderCycle.h>

@class NSArray;

// Not exported
@interface TSCH3DChartBuildImageRenderCycle : TSCH3DChartRenderCycle
{
    _Bool mIsAntialiasing;
    _Bool mIsSingleImage;
    _Bool mFlipImages;
    NSArray *mImages;
}

@property(readonly, nonatomic) NSArray *images; // @synthesize images=mImages;
@property(nonatomic) _Bool flipImages; // @synthesize flipImages=mFlipImages;
@property(nonatomic) _Bool isSingleImage; // @synthesize isSingleImage=mIsSingleImage;
- (Class)layerCacheLogicClass;
- (Class)layerClass;
- (void)restoreDefaultRenderPresenter;
- (void)switchToRenderPresenter:(id)arg1;
- (_Bool)shouldRenderLegendIntoSeparateLayer;
- (_Bool)runPipeline:(id)arg1;
- (id)tilePipeline;
- (void)p_setViewportSpaceImages:(id)arg1 samples:(float)arg2;
- (_Bool)allocateFramebufferWithAllocationInfo:(const struct FramebufferAllocationInfo *)arg1;
- (void)p_setClippingRectFromVisibleBodyCanvasBounds:(const struct CGRect *)arg1;
- (void)p_allocateTileFramebuffer;
- (unsigned long long)p_tileSize;
- (box_80622335)imageBodyCanvasBounds;
- (id)p_buildImageSetup;
@property(nonatomic) _Bool antialias;
- (void)p_setupPipelineWithProcessor:(id)arg1 session:(id)arg2 scene:(id)arg3 antialiasing:(_Bool)arg4;
- (void)dealloc;
- (id)initWithRenderCycleInfo:(const struct RenderCycleInfo *)arg1;
- (id)tileFBOResource;

@end
