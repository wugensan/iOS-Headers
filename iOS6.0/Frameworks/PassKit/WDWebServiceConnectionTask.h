/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "WDNetworkConnectionTask.h"

@class NSString, WDWebService;

@interface WDWebServiceConnectionTask : WDNetworkConnectionTask
{
    WDWebService *_webService;
}

+ (BOOL)supportsSecureCoding;
+ (id)taskWithWebService:(id)arg1;
@property(retain, nonatomic) WDWebService *webService; // @synthesize webService=_webService;
- (id)bodyDictionary;
- (id)headerFields;
- (id)queryFields;
- (id)endpointComponents;
- (id)method;
- (void)reportMalformedResponseError:(id)arg1;
- (void)reportNSURLConnectionError:(id)arg1;
- (void)reportUnexpectedResponseCode:(int)arg1;
- (void)reportAuthenticationFailure;
- (id)request;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, nonatomic) NSString *passType;
- (void)dealloc;

@end

