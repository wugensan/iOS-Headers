/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <SAObjects/AceObject.h>

#import "SAReminderPayload-Protocol.h"

@class NSString;

@interface SAReminderPhonePayload : AceObject <SAReminderPayload>
{
}

+ (id)phonePayloadWithDictionary:(id)arg1 context:(id)arg2;
+ (id)phonePayload;
@property(copy, nonatomic) NSString *recipient;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

