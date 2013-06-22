/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString;

@interface NSKeyValueAccessor : NSObject
{
    id _containerClassID;
    NSString *_key;
    void *_implementation;
    SEL _selector;
    unsigned int _extraArgumentCount;
    void *_extraArgument1;
    void *_extraArgument2;
    void *_extraArgument3;
}

- (void *)extraArgument2;
- (void *)extraArgument1;
- (unsigned int)extraArgumentCount;
- (id)key;
- (SEL)selector;
- (id)containerClassID;
- (void)dealloc;
- (id)initWithContainerClassID:(id)arg1 key:(id)arg2 implementation:(void *)arg3 selector:(SEL)arg4 extraArguments:(void *[3])arg5 count:(unsigned int)arg6;

@end

