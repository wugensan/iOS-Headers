/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSDictionary.h"

@interface NSSimpleAttributeDictionary : NSDictionary
{
    unsigned int numElements;
    unsigned int refCount;
    struct _NSSimpleAttributeDictionaryElement elements[1];
}

+ (id)newWithDictionary:(id)arg1;
+ (id)emptyAttributeDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (void)finalize;
- (void)dealloc;
- (id)keyEnumerator;
- (id)objectForKey:(id)arg1;
- (unsigned int)slotForKey:(id)arg1;
- (unsigned int)count;
- (id)newWithKey:(id)arg1 object:(id)arg2;

@end

