/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class GKGame, GKGameRecordInternal, GKPlayer, GKScore, NSDate, NSString;

@interface GKGameRecord : NSObject
{
    GKGameRecordInternal *_internal;
    GKGame *_game;
    GKPlayer *_player;
}

+ (void)loadGameRecordsForPlayer:(id)arg1 games:(id)arg2 withCompletionHandler:(id)arg3;
+ (void)loadGameRecordForPlayer:(id)arg1 game:(id)arg2 withCompletionHandler:(id)arg3;
+ (void)updateGameRecords:(id)arg1 withCompletionHandlerAndError:(id)arg2;
+ (id)gameRecordForPlayer:(id)arg1 game:(id)arg2;
+ (id)internalRepresentationForPlayer:(id)arg1 game:(id)arg2;
+ (id)internalRepresentationCache;
+ (id)cacheKeyForPlayer:(id)arg1 internal:(id)arg2;
+ (id)cacheKeyForPlayer:(id)arg1 game:(id)arg2;
+ (void)partionGameRecords:(id)arg1 returniOS:(id *)arg2 returnMac:(id *)arg3;
@property(retain, nonatomic) GKPlayer *player; // @synthesize player=_player;
@property(retain, nonatomic) GKGame *game; // @synthesize game=_game;
@property(retain, nonatomic) GKGameRecordInternal *internal; // @synthesize internal=_internal;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
@property(readonly, nonatomic) GKScore *score; // @dynamic score;
@property(readonly, nonatomic) unsigned int maxAchievementPoints;
@property(readonly, nonatomic) unsigned int maxAchievements;
@property(readonly, nonatomic) unsigned int numberOfCategories;
@property(readonly, nonatomic) BOOL supportsLeaderboards;
@property(readonly, nonatomic) BOOL supportsAchievements;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)valueForUndefinedKey:(id)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
@property(readonly, nonatomic) BOOL played;
- (void)dealloc;
- (id)initWithInternalRepresentation:(id)arg1 player:(id)arg2 game:(id)arg3;

// Remaining properties
@property(readonly, nonatomic) unsigned int achievementPoints; // @dynamic achievementPoints;
@property(readonly, nonatomic) unsigned int achievements; // @dynamic achievements;
@property(readonly, nonatomic) NSString *categoryID; // @dynamic categoryID;
@property(readonly, nonatomic) unsigned int friendRank; // @dynamic friendRank;
@property(readonly, nonatomic) NSDate *lastPlayedDate; // @dynamic lastPlayedDate;
@property(readonly, nonatomic) unsigned int maxFriendRank; // @dynamic maxFriendRank;
@property(readonly, nonatomic) unsigned int maxRank; // @dynamic maxRank;
@property(readonly, nonatomic) NSDate *purchaseDate; // @dynamic purchaseDate;
@property(readonly, nonatomic) unsigned int rank; // @dynamic rank;
@property(nonatomic) float rating; // @dynamic rating;

@end

