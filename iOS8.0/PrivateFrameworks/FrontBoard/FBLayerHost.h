//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CALayerHost.h"

@class FBWindowContext;

@interface FBLayerHost : CALayerHost
{
    FBWindowContext *_windowContext;
    float _scale;
    float _rotation;
    struct CGPoint _translation;
}

@property(nonatomic) struct CGPoint translation; // @synthesize translation=_translation;
@property(nonatomic) float rotation; // @synthesize rotation=_rotation;
@property(nonatomic) float scale; // @synthesize scale=_scale;
@property(readonly, retain, nonatomic) FBWindowContext *windowContext; // @synthesize windowContext=_windowContext;
- (id)description;
- (void)setDebug:(BOOL)arg1;
- (void)dealloc;
- (id)initWithWindowContext:(id)arg1;

@end

