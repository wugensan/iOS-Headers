/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "QLPreviewContentControllerProtocol-Protocol.h"

@protocol QLRemotePreviewContentControllerProtocol <QLPreviewContentControllerProtocol>
- (void)_setHostedFullScreenFrame:(id)arg1;
- (void)_getPDFPageAtIndex:(int)arg1 size:(id)arg2 handler:(id)arg3;
- (void)_prepareForDrawingPages:(id)arg1;
- (void)_getNumberOfPagesForSize:(id)arg1 withHandler:(id)arg2;
- (void)_getPDFPreviewDataWithHandler:(id)arg1;
- (void)_setContentFrame:(id)arg1;
- (void)_setPreviewItems:(id)arg1;
- (void)_setNumberOfPreviewItems:(int)arg1;
@end

