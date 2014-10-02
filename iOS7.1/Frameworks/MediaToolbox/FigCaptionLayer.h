//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CALayer.h"

@class FigCaptionLayerPrivate;

@interface FigCaptionLayer : CALayer
{
    FigCaptionLayerPrivate *_priv;
}

- (void)_renderer:(struct OpaqueFigCFCaptionRenderer *)arg1 didChangeRows:(CDStruct_1ef3fb1f)arg2;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext *)arg2;
- (void)layoutSublayers;
- (void)processCaptionCommand:(unsigned int)arg1 data:(id)arg2;
- (void)resetCaptions;
- (void)dealloc;
- (void)finalize;
- (void)setFontName:(const char *)arg1;
- (id)init;

@end
