/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>;

@interface _UIAsyncInvocationObserver : NSObject
{
    NSObject<OS_dispatch_queue> *_postCompletionQueue;
}

+ (void)whenInvocationsCompleteForObservers:(id)arg1 do:(id)arg2;
- (void)dealloc;
- (void)whenCompleteDo:(id)arg1;
- (void)_didCompleteInvocation;
- (id)init;

@end

