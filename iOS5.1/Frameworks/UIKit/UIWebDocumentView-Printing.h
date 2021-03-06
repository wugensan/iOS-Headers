/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/UIWebDocumentView.h>

@interface UIWebDocumentView (Printing)
- (void)drawPage:(unsigned int)arg1 withPaginationInfo:(id)arg2;
- (void)_drawPDFPagesForPage:(unsigned int)arg1 withPaginationInfo:(id)arg2;
- (void)endPrintMode;
- (id)beginPrintModeForFrame:(id)arg1 withSize:(struct CGSize)arg2 startOffset:(float)arg3 minimumLayoutWidth:(float)arg4 maximumLayoutWidth:(float)arg5 tileClippedContent:(BOOL)arg6;
- (id)beginPrintModeWithSize:(struct CGSize)arg1 startOffset:(float)arg2 minimumLayoutWidth:(float)arg3 maximumLayoutWidth:(float)arg4 tileClippedContent:(BOOL)arg5;
- (id)beginPrintModeForFrame:(id)arg1 withWidth:(float)arg2 height:(float)arg3 startOffset:(float)arg4 shrinkToFit:(BOOL)arg5 tileClippedContent:(BOOL)arg6;
- (id)beginPrintModeWithWidth:(float)arg1 height:(float)arg2 startOffset:(float)arg3 shrinkToFit:(BOOL)arg4 tileClippedContent:(BOOL)arg5;
- (id)beginPrintModeWithWidth:(float)arg1 height:(float)arg2 startOffset:(float)arg3 shrinkToFit:(BOOL)arg4;
- (id)_beginPrintModeForPDFView:(id)arg1 withSize:(struct CGSize)arg2 startOffset:(float)arg3 minimumLayoutWidth:(float)arg4 maximumLayoutWidth:(float)arg5;
- (id)_beginPrintModeForHTMLView:(id)arg1 withSize:(struct CGSize)arg2 startOffset:(float)arg3 minimumLayoutWidth:(float)arg4 maximumLayoutWidth:(float)arg5 tileClippedContent:(BOOL)arg6;
- (BOOL)isInPrintMode;
@end

