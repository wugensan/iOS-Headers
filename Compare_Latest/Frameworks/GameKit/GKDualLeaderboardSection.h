/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <GameKit/GKLeaderboardSection.h>

@interface GKDualLeaderboardSection : GKLeaderboardSection
{
}

- (id)tableView:(id)arg1 itemAtIndex:(int)arg2 column:(int)arg3;
- (BOOL)_showDisclosureChevronForPlayer:(id)arg1;
- (id)tableView:(id)arg1 prepareContents:(id)arg2 forItem:(id)arg3 column:(int)arg4;
- (BOOL)tableView:(id)arg1 row:(int *)arg2 column:(int *)arg3 forItem:(id)arg4;
- (int)numberOfContentColumnsInTableView:(id)arg1;
- (int)columnCountInTableView:(id)arg1;
- (void)prepareLeaderboards;

@end
