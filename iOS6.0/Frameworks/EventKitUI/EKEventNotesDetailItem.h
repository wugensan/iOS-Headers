/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <EventKitUI/EKEventDetailItem.h>

@class UITableViewCell, UITextView;

@interface EKEventNotesDetailItem : EKEventDetailItem
{
    UITableViewCell *_cell;
    UITableViewCell *_moreButtonCell;
    UITextView *_notesView;
}

- (id)detailViewControllerWithFrame:(struct CGRect)arg1 forSubitemAtIndex:(int)arg2;
- (BOOL)hasDetailViewControllerAtIndex:(unsigned int)arg1;
- (id)cellForSubitemAtIndex:(int)arg1;
- (float)defaultCellHeightForSubitemAtIndex:(int)arg1 forWidth:(float)arg2;
- (int)numberOfSubitems;
- (id)_notesViewForWidth:(float)arg1;
- (BOOL)configureWithCalendar:(id)arg1 preview:(BOOL)arg2;
- (void)reset;

@end

