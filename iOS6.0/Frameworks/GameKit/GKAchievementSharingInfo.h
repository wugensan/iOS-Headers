/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCoding-Protocol.h"

@class GKAchievement, GKAchievementDescription, GKGame, GKPlayer, UIImage;

@interface GKAchievementSharingInfo : NSObject <NSCoding>
{
    GKPlayer *_player;
    GKAchievement *_achievement;
    UIImage *_badgeImage;
    UIImage *_iconImage;
    GKAchievementDescription *_achievementDescription;
    GKGame *_game;
}

@property(retain, nonatomic) GKGame *game; // @synthesize game=_game;
@property(retain, nonatomic) GKAchievementDescription *achievementDescription; // @synthesize achievementDescription=_achievementDescription;
@property(retain, nonatomic) UIImage *iconImage; // @synthesize iconImage=_iconImage;
@property(retain, nonatomic) UIImage *badgeImage; // @synthesize badgeImage=_badgeImage;
@property(retain, nonatomic) GKAchievement *achievement; // @synthesize achievement=_achievement;
@property(retain, nonatomic) GKPlayer *player; // @synthesize player=_player;
- (id)subjectForEmailActivity;
- (id)thumbnailForActivityType:(id)arg1;
- (id)itemsForActivityType:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithAchievement:(id)arg1 forGame:(id)arg2 player:(id)arg3;
- (void)dealloc;

@end

