/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class UIImage;

@interface TSUImage : NSObject
{
    struct CGImage *mCGImage;
    struct CGSize mSize;
    float mScale;
    int mOrientation;
}

+ (id)imageWithCGImage:(struct CGImage *)arg1 scale:(float)arg2 orientation:(int)arg3;
+ (id)imageWithCGImage:(struct CGImage *)arg1;
+ (id)imageWithData:(id)arg1;
+ (id)imageWithContentsOfFile:(id)arg1;
+ (id)imageNamed:(id)arg1;
+ (id)imageWithUIImage:(id)arg1;
@property(readonly, nonatomic) int imageOrientation; // @synthesize imageOrientation=mOrientation;
@property(readonly, nonatomic) struct CGImage *CGImage; // @synthesize CGImage=mCGImage;
- (BOOL)isEmpty;
- (id)JPEGRepresentationWithCompressionQuality:(float)arg1;
- (id)PNGRepresentation;
@property(readonly, nonatomic) float scale;
@property(readonly, nonatomic) struct CGSize size;
- (id)initWithCGImage:(struct CGImage *)arg1 scale:(float)arg2 orientation:(int)arg3;
- (id)initWithCGImage:(struct CGImage *)arg1;
- (id)initWithData:(id)arg1;
- (id)initWithContentsOfFile:(id)arg1;
- (id)initWithImageSourceRef:(struct CGImageSource *)arg1;
- (void)dealloc;
- (void)drawInRect:(struct CGRect)arg1 fromRect:(struct CGRect)arg2 isFlipped:(BOOL)arg3;
@property(readonly, nonatomic) UIImage *UIImage;
- (id)initWithUIImage:(id)arg1;

@end

