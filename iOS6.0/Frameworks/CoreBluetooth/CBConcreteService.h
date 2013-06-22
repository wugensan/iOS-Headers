/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CoreBluetooth/CBService.h>

@class NSNumber;

@interface CBConcreteService : CBService
{
    NSNumber *_startHandle;
    NSNumber *_endHandle;
}

@property(readonly, nonatomic) NSNumber *endHandle; // @synthesize endHandle=_endHandle;
@property(readonly, nonatomic) NSNumber *startHandle; // @synthesize startHandle=_startHandle;
- (id)handleCharacteristicsDiscovered:(id)arg1;
- (id)handleIncludedServicesDiscovered:(id)arg1;
- (void)invalidate;
- (void)dealloc;
- (id)initWithPeripheral:(id)arg1 primary:(BOOL)arg2 UUID:(id)arg3 startHandle:(id)arg4 endHandle:(id)arg5;

@end

