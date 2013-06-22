/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString;

@interface VKAnimation : NSObject
{
    id _stepHandler;
    id _completionHandler;
    id _timingFunction;
    double _duration;
    double _startTimestamp;
    double _pauseTimestamp;
    struct {
        unsigned int runsForever:1;
        unsigned int startTimestampSet:1;
        unsigned int pauseTimestampSet:1;
        unsigned int completed:1;
        unsigned int state:2;
    } _flags;
    NSString *_name;
    int _priority;
}

@property(readonly, nonatomic) int priority; // @synthesize priority=_priority;
@property(copy, nonatomic) id timingFunction; // @synthesize timingFunction=_timingFunction;
@property(nonatomic) double duration; // @synthesize duration=_duration;
- (void)stop;
- (void)startWithStepHandler:(id)arg1 completionHandler:(void)arg2;
- (void)onTimerFired:(double)arg1;
- (void)resume;
- (void)pause;
- (void)_stopAnimation:(BOOL)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithName:(id)arg1;
- (id)initWithDuration:(double)arg1 name:(id)arg2;
- (id)init;
- (id)initWithDuration:(double)arg1;
- (id)initWithPriority:(int)arg1;
- (id)initWithPriority:(int)arg1 name:(id)arg2;
- (id)initWithDuration:(double)arg1 priority:(int)arg2 name:(id)arg3;
@property(nonatomic) BOOL runsForever;
@property(readonly, nonatomic) BOOL running;

@end

