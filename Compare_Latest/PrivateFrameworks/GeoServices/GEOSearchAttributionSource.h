//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSMutableArray, NSString;

@interface GEOSearchAttributionSource : PBCodable <NSCopying>
{
    CDStruct_56d48c16 _attributionRequirements;
    NSMutableArray *_attributionApps;
    NSMutableArray *_localizedAttributions;
    NSString *_sourceIdentifier;
    unsigned int _sourceVersion;
}

@property(retain, nonatomic) NSMutableArray *attributionApps; // @synthesize attributionApps=_attributionApps;
@property(retain, nonatomic) NSMutableArray *localizedAttributions; // @synthesize localizedAttributions=_localizedAttributions;
@property(nonatomic) unsigned int sourceVersion; // @synthesize sourceVersion=_sourceVersion;
@property(retain, nonatomic) NSString *sourceIdentifier; // @synthesize sourceIdentifier=_sourceIdentifier;
- (void)mergeFrom:(id)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)attributionAppsAtIndex:(unsigned int)arg1;
- (unsigned int)attributionAppsCount;
- (void)addAttributionApps:(id)arg1;
- (void)clearAttributionApps;
- (void)setAttributionRequirements:(int *)arg1 count:(unsigned int)arg2;
- (int)attributionRequirementsAtIndex:(unsigned int)arg1;
- (void)addAttributionRequirements:(int)arg1;
- (void)clearAttributionRequirements;
@property(readonly, nonatomic) int *attributionRequirements;
@property(readonly, nonatomic) unsigned int attributionRequirementsCount;
- (id)localizedAttributionAtIndex:(unsigned int)arg1;
- (unsigned int)localizedAttributionsCount;
- (void)addLocalizedAttribution:(id)arg1;
- (void)clearLocalizedAttributions;
- (void)dealloc;
- (id)bestLocalizedAttribution;

@end

