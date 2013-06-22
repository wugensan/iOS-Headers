/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface WebCache : NSObject
{
}

+ (BOOL)isDisabled;
+ (void)setDisabled:(BOOL)arg1;
+ (void)removeImageFromCacheForURL:(id)arg1;
+ (_Bool)addImageToCache:(struct CGImage *)arg1 forURL:(id)arg2;
+ (void)clearCachedCredentials;
+ (void)sizeOfDeadResources:(int *)arg1;
+ (void)emptyInMemoryResources;
+ (void)empty;
+ (id)statistics;
+ (void)initialize;

@end

