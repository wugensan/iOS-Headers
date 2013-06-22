/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSOperation.h"

@class MPImageCache, MPImageModifier, UIColor, UIImage;

@interface MPImageCacheRequest : NSOperation
{
    MPImageCache *_cache;
    id _completionHandler;
    int _contentMode;
    BOOL _decodeOnFetch;
    id <MPImageRequestDelegate> _delegate;
    UIColor *_fillColor;
    struct CGSize _finalSize;
    MPImageModifier *_modifier;
    id <NSObject><NSCopying> _uniqueKey;
    long long _tag;
}

@property(retain, nonatomic) id <NSObject><NSCopying> uniqueKey; // @synthesize uniqueKey=_uniqueKey;
@property(nonatomic) long long tag; // @synthesize tag=_tag;
@property(nonatomic) BOOL decodeOnFetch; // @synthesize decodeOnFetch=_decodeOnFetch;
@property(nonatomic) int contentMode; // @synthesize contentMode=_contentMode;
@property(retain, nonatomic) MPImageModifier *modifier; // @synthesize modifier=_modifier;
@property(nonatomic) struct CGSize finalSize; // @synthesize finalSize=_finalSize;
@property(retain, nonatomic) UIColor *fillColor; // @synthesize fillColor=_fillColor;
@property(nonatomic) id <MPImageRequestDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) id completionHandler; // @synthesize completionHandler=_completionHandler;
@property(nonatomic) MPImageCache *cache; // @synthesize cache=_cache;
- (void)_sendImageToDelegate:(id)arg1;
- (void)_sendErrorToDelegate:(id)arg1;
- (id)_newBitmapImageFromImage:(id)arg1 finalSize:(struct CGSize)arg2;
- (void)_getGeometryForCreatingNewImage:(id)arg1 finalSize:(struct CGSize)arg2 contentSize:(struct CGSize *)arg3 contentSubRect:(struct CGRect *)arg4 imageFrame:(struct CGRect *)arg5;
- (void)main;
- (void)cancel;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
@property(readonly, nonatomic) UIImage *placeholderImage;
@property(readonly, nonatomic) BOOL canRequestSynchronously;
- (id)copyRawImageReturningError:(id *)arg1;
- (id)copyImageFromImage:(id)arg1;
- (BOOL)_canUseInputImageAsFinalOutput:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)init;

@end

