/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <GameKit/GKTableViewControllerV2.h>

#import <GameKit/GKAuthenticateViewController-Protocol.h>

@class GKGame, GKSignInDataSource, NSString, UIAlertView, UITextField, UIViewController;

@interface GKAuthenticateViewController : GKTableViewControllerV2 <GKAuthenticateViewController>
{
    GKSignInDataSource *_signInDataSource;
    UIAlertView *_alert;
    UIViewController *_activeViewController;
    NSString *_lastUsername;
    int _failedSignInCount;
    id _completionHandler;
    BOOL _shouldShowActiveViewController;
    BOOL _disablesSignIn;
    UITextField *_activeTextField;
    int _alertTag;
    GKGame *_game;
    float _bottomContentInsetBeforeKeyboard;
}

@property float bottomContentInsetBeforeKeyboard; // @synthesize bottomContentInsetBeforeKeyboard=_bottomContentInsetBeforeKeyboard;
@property(retain, nonatomic) GKGame *game; // @synthesize game=_game;
@property(nonatomic) int alertTag; // @synthesize alertTag=_alertTag;
@property(nonatomic) UITextField *activeTextField; // @synthesize activeTextField=_activeTextField;
@property(nonatomic) BOOL disablesSignIn; // @synthesize disablesSignIn=_disablesSignIn;
@property(nonatomic) BOOL shouldShowActiveViewController; // @synthesize shouldShowActiveViewController=_shouldShowActiveViewController;
@property(copy, nonatomic) id completionHandler; // @synthesize completionHandler=_completionHandler;
@property int failedSignInCount; // @synthesize failedSignInCount=_failedSignInCount;
@property(retain, nonatomic) NSString *lastUsername; // @synthesize lastUsername=_lastUsername;
@property(retain, nonatomic) UIViewController *activeViewController; // @synthesize activeViewController=_activeViewController;
@property(retain, nonatomic) UIAlertView *alert; // @synthesize alert=_alert;
@property(retain, nonatomic) GKSignInDataSource *signInDataSource; // @synthesize signInDataSource=_signInDataSource;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)cancelAlertWithoutDelegateCallback;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (void)showAlertForTag:(unsigned int)arg1;
- (void)createNewAccount;
- (void)signInAction:(id)arg1;
- (void)signIn;
- (void)authenticateRequestCompletedWithErrorResponse:(id)arg1;
- (BOOL)handleUnderlyingAuthenticationError:(id)arg1;
- (void)showChangePasswordViewController;
- (void)showAuthorizeViewController;
- (void)showAccountViewControllerForMode:(int)arg1;
- (void)showViewController:(id)arg1;
- (void)cancelAuthentication;
- (void)finishAuthenticationWithError:(id)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)_gkResetContents;
- (void)_gkUpdateContentsWithCompletionHandlerAndError:(id)arg1;
- (struct CGRect)rectToKeepVisibleAboveKeyboardWithinView:(id)arg1;
- (BOOL)shouldAdjustInsetsForKeyboard;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)saveActiveTextField;
- (float)marginForTableView:(id)arg1;
- (void)prepareDataSource;
- (void)loadView;
- (void)dealloc;
- (id)init;

@end

