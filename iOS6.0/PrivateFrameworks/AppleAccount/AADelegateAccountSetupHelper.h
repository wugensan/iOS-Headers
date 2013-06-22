/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class AASetupAssistantService, NSArray, NSMutableArray, NSMutableDictionary, NSTimer;

@interface AADelegateAccountSetupHelper : NSObject
{
    AASetupAssistantService *_aaService;
    NSArray *_delegatesToSetup;
    NSMutableArray *_pendingCompletionBundles;
    NSMutableDictionary *_assistantDelegates;
    NSTimer *_delegatesTimeout;
    id _handler;
}

- (void).cxx_destruct;
- (void)_setupDelegateAccountsWithEmailChoice:(id)arg1;
- (void)_completeDelegateSetupWithResponse:(id)arg1;
- (void)_storeDelegateTokensWithResponse:(id)arg1;
- (id)_adjustResponseDictionary:(id)arg1 forAssistantDelegate:(id)arg2 withIdentifier:(id)arg3;
- (void)_delegateBundlesDidTimeout;
- (void)_delegateBundlesFinished;
- (id)_loadAssistantDelegateBundles;
- (void)setupiCloudDelegateWithUsername:(id)arg1 password:(id)arg2 emailChoice:(id)arg3 withHandler:(id)arg4;
- (void)setupAppleIDDelegatesWithUsername:(id)arg1 password:(id)arg2 emailChoice:(id)arg3 withHandler:(id)arg4;
- (id)init;

@end

