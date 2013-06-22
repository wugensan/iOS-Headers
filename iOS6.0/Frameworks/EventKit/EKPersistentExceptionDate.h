/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <EventKit/EKPersistentObject.h>

@class EKPersistentCalendarItem, NSDate;

@interface EKPersistentExceptionDate : EKPersistentObject
{
    NSDate *_date;
}

+ (id)relations;
+ (id)exceptionDateWithDate:(id)arg1;
- (id)description;
@property(retain, nonatomic) EKPersistentCalendarItem *owner;
- (int)entityType;
- (unsigned int)hash;
@property(readonly, nonatomic) NSDate *date; // @synthesize date=_date;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithExceptionDate:(id)arg1;

@end

