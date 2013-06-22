/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>;

@interface SSRemoteNotificationClient : NSObject
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    int _notifyToken;
}

+ (id)sharedClient;
- (void)unregisterForRemoteNotifications;
- (void)registerForRemoteNotifications;
- (id)popQueuedNotifications;
- (void)dealloc;
- (id)init;

@end

