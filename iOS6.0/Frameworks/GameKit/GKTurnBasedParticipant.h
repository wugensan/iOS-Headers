/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class GKTurnBasedParticipantInternal, NSDate, NSString;

@interface GKTurnBasedParticipant : NSObject
{
    GKTurnBasedParticipantInternal *_internal;
}

+ (BOOL)matchOutcomeIsValidForDoneState:(int)arg1;
+ (BOOL)instancesRespondToSelector:(SEL)arg1;
@property(retain, nonatomic) GKTurnBasedParticipantInternal *internal; // @synthesize internal=_internal;
@property(retain, nonatomic) NSDate *lastTurnDate; // @dynamic lastTurnDate;
@property(readonly, nonatomic) BOOL isWinner;
@property(readonly, nonatomic) NSString *matchOutcomeString;
@property(readonly, nonatomic) NSString *matchStatusString;
- (id)basicMatchOutcomeString;
@property(nonatomic) int status;
- (id)description;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)valueForUndefinedKey:(id)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (void)dealloc;
- (id)init;
- (id)initWithInternalRepresentation:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) NSString *inviteMessage; // @dynamic inviteMessage;
@property(retain, nonatomic) NSString *invitedBy; // @dynamic invitedBy;
@property(nonatomic) int matchOutcome; // @dynamic matchOutcome;
@property(retain, nonatomic) NSString *playerID; // @dynamic playerID;
@property(retain, nonatomic) NSDate *timeoutDate; // @dynamic timeoutDate;

@end

