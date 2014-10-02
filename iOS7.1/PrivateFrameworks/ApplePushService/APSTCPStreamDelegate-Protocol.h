//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class APSConfiguration, APSTCPStream, NSData, NSError, NSString;

@protocol APSTCPStreamDelegate <NSObject>
- (void)tcpStream:(APSTCPStream *)arg1 errorOccured:(NSError *)arg2;
- (void)tcpStreamEndEncountered:(APSTCPStream *)arg1;
- (unsigned int)tcpStream:(APSTCPStream *)arg1 dataReceived:(NSData *)arg2;

@optional
- (void)tcpStreamHasConnected:(APSTCPStream *)arg1;
- (void)tcpStream:(APSTCPStream *)arg1 hasDeterminedServerHostname:(NSString *)arg2;
- (void)tcpStream:(APSTCPStream *)arg1 receivedServerBag:(APSConfiguration *)arg2;
@end
