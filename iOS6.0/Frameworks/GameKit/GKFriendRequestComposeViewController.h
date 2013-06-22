/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UINavigationController.h"

@class GKComposeHostedViewController, NSNumber, NSString;

@interface GKFriendRequestComposeViewController : UINavigationController
{
    id <GKFriendRequestComposeViewControllerDelegate> _composeViewDelegateWeak;
    GKComposeHostedViewController *_composeController;
    NSString *_message;
    unsigned int _recipientCount;
}

+ (unsigned int)maxNumberOfRecipients;
@property(nonatomic) unsigned int recipientCount; // @synthesize recipientCount=_recipientCount;
@property(retain, nonatomic) NSString *message; // @synthesize message=_message;
@property(retain, nonatomic) GKComposeHostedViewController *composeController; // @synthesize composeController=_composeController;
- (void)sendFinishedMessageToDelegateCancelled:(BOOL)arg1;
- (void)addRecipientsWithEmailAddresses:(id)arg1;
- (void)addRecipientsWithPlayerIDs:(id)arg1;
- (void)prepareForNewRecipients:(id)arg1;
@property(nonatomic) id <GKFriendRequestComposeViewControllerDelegate> composeViewDelegate; // @synthesize composeViewDelegate=_composeViewDelegateWeak;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (BOOL)shouldAutomaticallyForwardRotationMethods;
- (BOOL)automaticallyForwardAppearanceAndRotationMethodsToChildViewControllers;
- (unsigned int)supportedInterfaceOrientations;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)__viewControllerWillBePresented:(BOOL)arg1;
- (void)viewDidLoad;
@property(retain, nonatomic) NSNumber *rid;
- (BOOL)navigationBarHidden;
- (void)dealloc;
- (id)init;

@end

