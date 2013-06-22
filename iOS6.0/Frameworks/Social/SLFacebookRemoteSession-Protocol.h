/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "SLRemoteSession-Protocol.h"

@protocol SLFacebookRemoteSession <SLRemoteSession>
- (void)fetchLikeStatusForURL:(id)arg1 flags:(id)arg2 completion:(id)arg3;
- (void)unlikeURL:(id)arg1 completion:(id)arg2;
- (void)likeURL:(id)arg1 completion:(id)arg2;
- (void)setActiveAccountIdentifier:(id)arg1;
- (void)revokeAllAccessTokensForDeviceWithCompletion:(id)arg1;
- (void)revokeAccessTokenForAppWithID:(id)arg1;
- (void)accountsAvailabilityWithHandler:(id)arg1;
- (void)uploadPost:(id)arg1 suppressAlerts:(id)arg2 withPostCompletion:(id)arg3;
- (void)uploadPost:(id)arg1 forPID:(id)arg2 withXPCTransferCompletion:(id)arg3;
- (void)uploadPost:(id)arg1 withXPCTransferCompletion:(id)arg2;
- (void)tokenSecretForEntitledClientWithHandler:(id)arg1;
- (void)accountForEntitledClientWithHandler:(id)arg1;
- (void)doTestCallWithDict:(id)arg1 withHandler:(id)arg2;
@end

