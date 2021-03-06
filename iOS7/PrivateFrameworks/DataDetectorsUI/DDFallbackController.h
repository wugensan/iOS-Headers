/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIViewController.h"

@class UIWindow;

// Not exported
@interface DDFallbackController : UIViewController
{
    UIWindow *_baseWindow;
    UIWindow *_ourWindow;
    id _interactionDelegate;
    long long _startOrientation;
}

- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)dismissViewControllerAnimated:(_Bool)arg1 completion:(id)arg2;
- (void)presentViewController:(id)arg1 animated:(_Bool)arg2 completion:(id)arg3;
- (void)loadView;
- (void)dealloc;
- (id)initWithWindow:(id)arg1 interactionDelegate:(id)arg2;

@end

