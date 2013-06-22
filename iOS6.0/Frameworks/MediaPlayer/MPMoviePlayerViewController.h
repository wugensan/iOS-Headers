/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIViewController.h"

@class MPMoviePlayerController;

@interface MPMoviePlayerViewController : UIViewController
{
    id _internal;
}

- (void)_restoreStatusBarAnimated:(BOOL)arg1;
- (void)_moviePlayerViewController_playbackDidFinishNotification:(id)arg1;
- (void)_moviePlayerViewController_applicationDidEnterBackgroundNotification:(id)arg1;
- (BOOL)_shouldUseFullScreenLayoutInWindow:(id)arg1 parentViewController:(id)arg2;
- (BOOL)_canReloadView;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)loadView;
- (void)remoteControlReceivedWithEvent:(id)arg1;
- (BOOL)canBecomeFirstResponder;
@property(readonly, nonatomic) MPMoviePlayerController *moviePlayer;
- (void)dealloc;
- (id)initWithContentURL:(id)arg1;
- (id)init;

@end

