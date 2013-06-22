/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <ChatKit/CKLazyTextView.h>

@class _CKTiledTextView;

@interface CKTiledTextView : CKLazyTextView
{
    _CKTiledTextView *_textView;
    BOOL _containsHyperlink;
}

+ (id)HTMLStringCache;
@property(nonatomic) BOOL containsHyperlink; // @synthesize containsHyperlink=_containsHyperlink;
@property(retain, nonatomic) _CKTiledTextView *textView; // @synthesize textView=_textView;
- (void)removeAllNonVisibleTiles;
- (void)removeAllTiles;
- (id)interactionDelegate;
- (void)setInteractionDelegate:(id)arg1;
- (void)prepareForReuse;
- (void)setFont:(id)arg1;
- (void)setAttributedText:(id)arg1;
- (void)setWebViewNeedsUpdate;
- (void)updateWebView;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)description;
- (void)dealloc;

@end

