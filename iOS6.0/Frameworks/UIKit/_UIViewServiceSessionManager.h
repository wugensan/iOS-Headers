/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableArray, _UIViewServiceXPCListener;

@interface _UIViewServiceSessionManager : NSObject
{
    int _lock;
    NSMutableArray *_sessions;
    _UIViewServiceXPCListener *_listener;
    NSMutableArray *_incomingConnections;
    int _connectionNotificationToken;
}

+ (BOOL)hasActiveSessions;
+ (void)startViewServiceSessionManager;
- (BOOL)hasActiveSessions;
- (void)_registerSessionForDefaultDeputies:(id)arg1;
- (void)_startListener;
- (id)_init;
- (void)dealloc;
- (id)init;

@end

