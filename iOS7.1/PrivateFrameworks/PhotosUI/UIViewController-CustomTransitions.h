//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class PUModalTransition, PUNavigationTransition;

@interface UIViewController (CustomTransitions)
- (void)pu_dismissViewControllerAnimated:(BOOL)arg1 interactive:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)pu_presentViewController:(id)arg1 transition:(id)arg2 animated:(BOOL)arg3 interactive:(BOOL)arg4 completion:(CDUnknownBlockType)arg5;
@property(readonly, nonatomic) PUNavigationTransition *pu_currentInteractiveNavigationTransition;
@property(readonly, nonatomic) PUModalTransition *pu_currentInteractiveModalTransition;
@property(retain, nonatomic, setter=pu_setNavigationTransition:) PUNavigationTransition *pu_navigationTransition;
@property(retain, nonatomic, setter=pu_setModalTransition:) PUModalTransition *pu_modalTransition;
@end

