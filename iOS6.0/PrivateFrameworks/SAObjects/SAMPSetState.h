/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSURL;

@interface SAMPSetState : SABaseClientBoundCommand
{
}

+ (id)setStateWithDictionary:(id)arg1 context:(id)arg2;
+ (id)setState;
- (BOOL)requiresResponse;
@property(nonatomic) int state;
@property(copy, nonatomic) NSURL *targetAppId;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

