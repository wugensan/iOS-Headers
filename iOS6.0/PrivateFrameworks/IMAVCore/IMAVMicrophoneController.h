/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class IMAVMicrophone, NSArray, NSMutableArray, NSObject<OS_dispatch_queue>;

@interface IMAVMicrophoneController : NSObject
{
    id _internal;
    NSMutableArray *_microphones;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)sharedInstance;
@property(retain, nonatomic) IMAVMicrophone *currentMicrophone;
- (void)_loadSavedMicrophone;
- (void)_rebuildMicrophoneList;
- (void)dealloc;
@property(readonly, nonatomic) NSArray *microphones;
- (id)init;

@end

