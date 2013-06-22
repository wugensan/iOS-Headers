/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <GameKit/GKInternalRepresentation.h>

@class NSDate, NSString;

@interface GKScoreInternal : GKInternalRepresentation
{
    NSString *_playerID;
    NSString *_category;
    unsigned int _rank;
    long long _value;
    NSString *_formattedValue;
    NSDate *_date;
    unsigned long long _context;
    NSString *_groupCategory;
}

+ (id)codedPropertyKeys;
+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) NSString *groupCategory; // @synthesize groupCategory=_groupCategory;
@property(nonatomic) unsigned long long context; // @synthesize context=_context;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
@property(retain, nonatomic) NSString *formattedValue; // @synthesize formattedValue=_formattedValue;
@property(nonatomic) long long value; // @synthesize value=_value;
@property(nonatomic) unsigned int rank; // @synthesize rank=_rank;
@property(retain, nonatomic) NSString *category; // @synthesize category=_category;
@property(retain, nonatomic) NSString *playerID; // @synthesize playerID=_playerID;
- (id)initWithLeaderboardID:(id)arg1 serverRepresentation:(id)arg2;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)serverRepresentation;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)challengeServerRepresentationForCancel:(BOOL)arg1;

@end

