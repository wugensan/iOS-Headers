/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class UIImage, UIPDFPage, UIPDFPageRenderOperation;

@interface UIPDFPageRenderJob : NSObject
{
    UIPDFPage *_page;
    unsigned int pageIndex;
    struct CGSize _size;
    UIImage *_image;
    UIPDFPageRenderOperation *_operation;
    id _target;
    SEL _callback;
    id _userData;
    BOOL _sendPending;
    int _lock;
    unsigned int _pageIndex;
}

- (id)initWithPage:(id)arg1 maxSize:(struct CGSize)arg2 queuePriority:(int)arg3;
- (void)dealloc;
- (void)cancel;
- (void)cancelOperation;
- (void)cancelOperationForTarget:(id)arg1;
- (void)setTarget:(id)arg1 callback:(SEL)arg2 userData:(id)arg3;
@property UIPDFPageRenderOperation *operation; // @dynamic operation;
@property(readonly, retain) UIImage *image; // @dynamic image;
- (void)renderImage;
- (void)sendImage;
- (void)sendImageTo:(id)arg1 callback:(SEL)arg2 userData:(id)arg3;
@property(readonly) unsigned int pageIndex; // @synthesize pageIndex=_pageIndex;

@end

