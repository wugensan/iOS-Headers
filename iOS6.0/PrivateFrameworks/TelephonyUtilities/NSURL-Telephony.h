/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSURL.h"

@class NSString;

@interface NSURL (Telephony)
+ (id)URLWithTelephoneNumber:(id)arg1 addressBookUID:(int)arg2 forceAssist:(BOOL)arg3 suppressAssist:(BOOL)arg4 wasAssisted:(BOOL)arg5;
+ (id)URLWithTelephoneNumber:(id)arg1 addressBookUID:(int)arg2;
+ (id)URLWithTelephoneNumber:(id)arg1 promptUser:(BOOL)arg2;
+ (id)URLWithTelephoneNumber:(id)arg1;
- (id)_mobilePhoneQueryParameters;
- (id)_mobilePhonePathParameters;
- (id)telephonyParameterDictionary;
- (id)webSafeTelephoneURL;
- (BOOL)isWebSafeTelephoneURL;
- (id)numberQualifiedForAddressBook;
- (id)formattedPhoneNumber;
- (BOOL)hasTelephonyScheme;
@property(readonly) BOOL wasAlreadyAssisted;
@property(readonly) BOOL suppressAssist;
@property(readonly) BOOL forceAssist;
@property(readonly) int addressBookUID;
@property(readonly) NSString *phoneNumber;
@end

