/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface EDTokenTree : NSObject
{
}

+ (id)buildSubtree:(unsigned int)arg1 formula:(id)arg2;
+ (_Bool)isTokenAttrASum:(unsigned short)arg1;
+ (_Bool)isTokenNoOp:(unsigned int)arg1 formula:(id)arg2;
+ (unsigned int)childCountForToken:(unsigned int)arg1 formula:(id)arg2;
+ (id)buildSubtreeAtIndex:(unsigned int *)arg1 formula:(id)arg2;

@end

