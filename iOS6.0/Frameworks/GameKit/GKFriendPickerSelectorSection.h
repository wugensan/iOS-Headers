/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import <GameKit/GKTableSection-Protocol.h>

@interface GKFriendPickerSelectorSection : NSObject <GKTableSection>
{
    unsigned int _scope;
    BOOL _showsNearbyPlayers;
}

@property(nonatomic) BOOL showsNearbyPlayers; // @synthesize showsNearbyPlayers=_showsNearbyPlayers;
@property(nonatomic) unsigned int scope; // @synthesize scope=_scope;
- (CDStruct_70ce6416)currentMetricsInTableView:(id)arg1;
- (id)tableView:(id)arg1 willSelectIndexPath:(id)arg2;
- (id)tableView:(id)arg1 prepareContents:(id)arg2 forCell:(id)arg3 atIndexPath:(id)arg4;
- (void)tableView:(id)arg1 willDrawCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 reuseIdentifierForRow:(int)arg2;
- (float)heightForHeaderInTableView:(id)arg1;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfColumnsForRow:(int)arg2;
- (int)rowCountInTableView:(id)arg1;

@end

