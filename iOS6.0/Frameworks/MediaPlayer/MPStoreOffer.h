/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSDictionary, NSString, NSURL;

@interface MPStoreOffer : NSObject
{
    NSDictionary *_offerDictionary;
    MPStoreOffer *_regularPriceOffer;
    NSDictionary *_mediaAssetDictionary;
    unsigned long long _entityPersistentID;
    int _entityType;
    NSString *_entityTitle;
    int _passType;
}

+ (int)buyTypeForOfferDictionary:(id)arg1;
+ (id)_priceForOfferDictionary:(id)arg1;
+ (int)bestOfferVariantInOfferDictionaries:(id)arg1 withPreferredVariant:(int)arg2;
+ (void)getBuyOfferDictionary:(id *)arg1 regularPriceOfferDictionary:(id *)arg2 inOfferDictionaries:(id)arg3 variant:(int)arg4;
+ (void)getBuyOfferDictionary:(id *)arg1 regularPriceOfferDictionary:(id *)arg2 inOfferDictionaries:(id)arg3 variantString:(id)arg4;
+ (id)offerVariantResponseKeyForOfferVariant:(int)arg1;
@property(readonly, nonatomic) int passType; // @synthesize passType=_passType;
@property(readonly, nonatomic) NSString *entityTitle; // @synthesize entityTitle=_entityTitle;
@property(readonly, nonatomic) int entityType; // @synthesize entityType=_entityType;
@property(readonly, nonatomic) unsigned long long entityPersistentID; // @synthesize entityPersistentID=_entityPersistentID;
- (id)storeOfferDictionary;
@property(readonly, nonatomic) double previewDuration;
@property(readonly, nonatomic) NSURL *previewURL;
@property(readonly, nonatomic) unsigned long long downloadSize;
@property(readonly, nonatomic) NSString *regularPriceDisplayPrice;
@property(readonly, nonatomic) float price;
@property(readonly, nonatomic) NSString *displayPrice;
@property(readonly, nonatomic) BOOL requiresConfirmation;
@property(readonly, nonatomic) NSString *actionDisplayTitle;
@property(readonly, nonatomic) NSString *displayTitle;
@property(readonly, nonatomic) NSString *buyParameters;
- (id)buyURL;
- (BOOL)_isBuy;
@property(readonly, nonatomic) int buyType;
- (void)dealloc;
- (id)initWithStoreOfferDictionary:(id)arg1 regularPriceOfferDictionary:(id)arg2 passType:(int)arg3 entityType:(int)arg4 persistentID:(unsigned long long)arg5 title:(id)arg6;

@end

