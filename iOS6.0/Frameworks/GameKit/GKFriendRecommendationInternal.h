/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <GameKit/GKInternalRepresentation.h>

@class NSNumber, NSString;

@interface GKFriendRecommendationInternal : GKInternalRepresentation
{
    NSString *_playerID;
    NSString *_reasonID;
    NSString *_reason;
    NSString *_reason2;
    NSNumber *_rid;
    NSNumber *_source;
}

+ (id)codedPropertyKeys;
@property(retain, nonatomic) NSNumber *source; // @synthesize source=_source;
@property(retain, nonatomic) NSNumber *rid; // @synthesize rid=_rid;
@property(retain, nonatomic) NSString *reason2; // @synthesize reason2=_reason2;
@property(retain, nonatomic) NSString *reason; // @synthesize reason=_reason;
@property(retain, nonatomic) NSString *reasonID; // @synthesize reasonID=_reasonID;
@property(retain, nonatomic) NSString *playerID; // @synthesize playerID=_playerID;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;

@end

