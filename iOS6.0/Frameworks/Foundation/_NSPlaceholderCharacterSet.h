/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Foundation/NSCharacterSet.h>

@interface _NSPlaceholderCharacterSet : NSCharacterSet
{
    NSCharacterSet *_original;
    NSCharacterSet *_invertedSet;
    struct {
        unsigned int _inverted:1;
        unsigned int _builtin:1;
        unsigned int _isCF:1;
        unsigned int _reserved:29;
    } _flags;
}

- (id)replacementObjectForCoder:(id)arg1;
- (id)replacementObjectForKeyedArchiver:(id)arg1;
- (void)dealloc;
- (BOOL)_tryRetain;
- (BOOL)_isDeallocating;
- (oneway void)release;
- (unsigned int)retainCount;
- (id)retain;
- (id)autorelease;
- (id)invertedSet;
- (BOOL)isEmpty;
- (id)bitmapRepresentation;
- (BOOL)isEqual:(id)arg1;
- (BOOL)hasMemberInPlane:(unsigned char)arg1;
- (BOOL)isSupersetOfSet:(id)arg1;
- (BOOL)longCharacterIsMember:(unsigned long)arg1;
- (BOOL)characterIsMember:(unsigned short)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (void)_expandInverted;
- (struct __CFCharacterSet *)_expandedCFCharacterSet;
- (id)initWithSet:(id)arg1 options:(unsigned int)arg2;

@end

