/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSEnumerator.h"

@interface NSSearchPathEnumerator : NSEnumerator
{
    long state;
    unsigned int directory;
    unsigned int domainMask;
}

- (id)nextObject;
- (id)initWithDirectory:(unsigned int)arg1 domains:(unsigned int)arg2;

@end
