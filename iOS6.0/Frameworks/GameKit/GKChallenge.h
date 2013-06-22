/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCoding-Protocol.h"

@class GKChallengeInternal, NSDate, NSSet, NSString;

@interface GKChallenge : NSObject <NSCoding>
{
    GKChallengeInternal *_internal;
    NSSet *_compatibleGames;
}

+ (void)loadReceivedChallengesWithCompletionHandler:(id)arg1;
+ (void)loadChallengesForReceivingPlayer:(id)arg1 withCompletionHandler:(id)arg2;
+ (void)loadChallengesForGame:(id)arg1 receivingPlayer:(id)arg2 withCompletionHandler:(id)arg3;
+ (id)challengeForGame:(id)arg1 andPlayer:(id)arg2 withAchievement:(id)arg3;
+ (id)challengeForGame:(id)arg1 andPlayer:(id)arg2 withScore:(id)arg3;
+ (id)challengeForInternalRepresentation:(id)arg1;
+ (BOOL)instancesRespondToSelector:(SEL)arg1;
+ (id)stringForState:(int)arg1;
@property(retain, nonatomic) NSSet *compatibleGames; // @synthesize compatibleGames=_compatibleGames;
@property(retain, nonatomic) GKChallengeInternal *internal; // @synthesize internal=_internal;
- (id)resolveBundleID;
- (id)identifierKey;
- (void)decline;
- (void)issueToPlayers:(id)arg1 message:(id)arg2;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)valueForUndefinedKey:(id)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithInternalRepresentation:(id)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)titleTextForAuxData:(id)arg1;
- (id)infoTextForIssuingPlayer:(id)arg1;
- (id)goalTextForAuxData:(id)arg1;
- (void)loadAuxDataWithHandler:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) NSString *bundleID; // @dynamic bundleID;
@property(readonly, nonatomic) NSString *challengeID; // @dynamic challengeID;
@property(retain, nonatomic) NSDate *completionDate; // @dynamic completionDate;
@property(retain, nonatomic) NSDate *issueDate; // @dynamic issueDate;
@property(copy, nonatomic) NSString *issuingPlayerID; // @dynamic issuingPlayerID;
@property(copy, nonatomic) NSString *message; // @dynamic message;
@property(copy, nonatomic) NSString *receivingPlayerID; // @dynamic receivingPlayerID;
@property(nonatomic) int state; // @dynamic state;

@end

