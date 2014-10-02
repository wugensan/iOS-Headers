//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSLock, NSMutableDictionary;

@interface MPRadioPerformanceLogger : NSObject
{
    NSLock *_lock;
    NSMutableDictionary *_sessions;
}

+ (id)sharedLogger;
- (void).cxx_destruct;
- (void)closeAndLogSessionForKey:(id)arg1;
- (void)beginSessionWithKey:(id)arg1 label:(id)arg2;
- (void)addEventWithName:(id)arg1 sessionKey:(id)arg2;
- (id)init;

@end
