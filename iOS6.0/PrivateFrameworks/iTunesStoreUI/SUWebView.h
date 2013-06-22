/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIWebView.h"

@class NSString, UIColor;

@interface SUWebView : UIWebView
{
    UIColor *_originalBackgroundColor;
    BOOL _originalShowsBackgroundShadow;
    unsigned int _scrollingDisabled:1;
    BOOL _showsTopBackgroundShadow;
    int _synchronousLayoutCount;
    UIColor *_topBackgroundColor;
}

@property(retain, nonatomic) UIColor *topBackgroundColor; // @synthesize topBackgroundColor=_topBackgroundColor;
@property(nonatomic) BOOL showsTopBackgroundShadow; // @synthesize showsTopBackgroundShadow=_showsTopBackgroundShadow;
- (void)view:(id)arg1 didSetFrame:(struct CGRect)arg2 oldFrame:(struct CGRect)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)_setRichTextReaderViewportSettings;
@property(readonly, nonatomic) id windowScriptObject;
@property(readonly, nonatomic) NSString *title;
@property(nonatomic, getter=isScrollingEnabled) BOOL scrollingEnabled;
- (void)loadArchive:(id)arg1;
- (BOOL)getStatusBarStyle:(int *)arg1;
- (void)endSynchronousLayout;
- (void)beginSynchronousLayout;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(nonatomic) id <SUWebViewDelegate> delegate; // @dynamic delegate;

@end

