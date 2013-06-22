/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <EventKit/EKObject.h>

#import "EKIdentityProtocol-Protocol.h"
#import "NSCopying-Protocol.h"

@class EKCalendar, NSString;

@interface EKSharee : EKObject <NSCopying, EKIdentityProtocol>
{
}

+ (id)shareeWithEmailAddress:(id)arg1 name:(id)arg2;
+ (id)shareeWithName:(id)arg1 emailAddress:(id)arg2 externalID:(id)arg3;
- (void *)ABRecordWithAddressBook:(void *)arg1;
@property(nonatomic) int shareeAccessLevel;
@property(nonatomic) int shareeStatus;
@property(copy, nonatomic) NSString *externalID;
@property(copy, nonatomic) NSString *lastName;
@property(copy, nonatomic) NSString *firstName;
@property(copy, nonatomic) NSString *emailAddress;
@property(copy, nonatomic) NSString *name;
@property(readonly, nonatomic) NSString *UUID;
- (id)_persistentSharee;
@property(readonly, nonatomic) EKCalendar *owner;
- (id)lazyLoadRelationForKey:(id)arg1;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initWithEmailAddress:(id)arg1 name:(id)arg2;
- (id)initWithName:(id)arg1 emailAddress:(id)arg2 externalID:(id)arg3;

@end

