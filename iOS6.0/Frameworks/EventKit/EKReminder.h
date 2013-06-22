/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <EventKit/EKCalendarItem.h>

@class NSDate, NSDateComponents;

@interface EKReminder : EKCalendarItem
{
}

+ (id)reminderWithEventStore:(id)arg1;
- (BOOL)commit:(id *)arg1;
- (BOOL)validate:(id *)arg1;
- (void)clearParentID;
- (id)parentID;
@property(nonatomic, getter=isCompleted) BOOL completed;
- (id)description;
@property(nonatomic) int priority;
- (void)setDisplayOrder:(unsigned int)arg1;
- (unsigned int)displayOrder;
@property(copy, nonatomic) NSDate *completionDate;
- (void)setTimeZone:(id)arg1;
@property(copy, nonatomic) NSDateComponents *dueDateComponents;
- (id)dueDate;
@property(copy, nonatomic) NSDateComponents *startDateComponents;
- (id)externalURI;
- (id)reminderIdentifier;
- (void)_sendModifiedNote;
- (id)_persistentReminder;
- (void)dealloc;
- (id)initWithPersistentObject:(id)arg1;

@end

