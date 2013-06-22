/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class EAAccessoryInternal, NSArray, NSString;

@interface EAAccessory : NSObject
{
    EAAccessoryInternal *_internal;
}

- (void)setIPodOutOptionsMask:(int)arg1;
- (int)iPodOutOptionsMask;
- (BOOL)supportsPointOfInterest;
- (void)updateItemProperty:(int)arg1 withValue:(id)arg2;
- (void)updateSystemProperty:(int)arg1 withValue:(id)arg2;
- (BOOL)supportsAccessibility;
- (BOOL)sendEphemeris:(id)arg1;
- (BOOL)sendEphemerisPointDataGpsWeek:(unsigned int)arg1 gpsTOW:(double)arg2 latitude:(double)arg3 longitude:(double)arg4 accuracy:(unsigned short)arg5;
- (BOOL)sendGpsWeek:(unsigned int)arg1 gpsTOW:(double)arg2;
- (BOOL)getEphemerisExpirationInterval:(double *)arg1;
- (BOOL)getEphemerisRecommendRefreshInterval:(double *)arg1;
- (BOOL)getEphemerisURL:(id *)arg1;
- (BOOL)setNMEASentencesToFilter:(id)arg1;
- (BOOL)getNMEASentence:(id *)arg1;
- (BOOL)accessoryHasNMEASentencesAvailable;
- (BOOL)supportsLocation;
- (unsigned int)eqIndex;
- (void)setEqIndex:(unsigned int)arg1;
- (id)eqNames;
- (void)setEqNames:(id)arg1;
- (id)allPublicProtocolStrings;
- (id)audioPorts;
- (int)classType;
- (id)preferredApp;
- (BOOL)supportsPublicIap;
- (void)setCfAccessoryPortPropertyContext:(void *)arg1;
- (void *)cfAccessoryPortPropertyContext;
- (void)setCfAccessoryPortPropertyCallback:(void *)arg1;
- (void *)cfAccessoryPortPropertyCallback;
- (void)setCfAccessory:(struct __CFAccessory *)arg1;
- (struct __CFAccessory *)cfAccessory;
- (id)macAddress;
- (BOOL)_internalNotPresentInIAPAccessoriesArray;
- (unsigned int)_internalConnectionID;
- (id)_createWakeToken;
- (void)_endSession:(unsigned int)arg1;
- (void)_openCompleteForSession:(unsigned int)arg1;
- (void)_removeSession:(id)arg1;
- (void)_addSession:(id)arg1;
- (id)_protocolIDForProtocolString:(id)arg1;
- (void)_setNotPresentInIAPAccessoriesArray:(BOOL)arg1;
- (void)_setConnected:(BOOL)arg1;
- (id)_shortDescription;
- (void)_updateAccessoryInfo:(id)arg1;
- (id)_initWithAccessory:(id)arg1;
@property(nonatomic) id <EAAccessoryDelegate> delegate;
@property(readonly, nonatomic) NSArray *protocolStrings;
- (id)wakeToken;
@property(readonly, nonatomic) NSString *hardwareRevision;
@property(readonly, nonatomic) NSString *firmwareRevision;
@property(readonly, nonatomic) NSString *serialNumber;
@property(readonly, nonatomic) NSString *modelNumber;
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic) NSString *manufacturer;
@property(readonly, nonatomic) unsigned int connectionID;
@property(readonly, nonatomic, getter=isConnected) BOOL connected;
- (id)description;
- (void)dealloc;
- (id)init;

@end

