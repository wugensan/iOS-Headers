/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface UIInputViewAnimationStyle : NSObject
{
    BOOL animated;
    double duration;
    int outDirection;
    BOOL force;
}

+ (id)animationStyleAnimated:(BOOL)arg1 duration:(double)arg2 outDirection:(int)arg3;
+ (id)animationStyleDefault;
+ (id)animationStyleImmediate;
@property(nonatomic) BOOL force; // @synthesize force;
@property(nonatomic) int outDirection; // @synthesize outDirection;
@property(nonatomic) double duration; // @synthesize duration;
@property(nonatomic) BOOL animated; // @synthesize animated;
- (id)description;
- (BOOL)isEqual:(id)arg1;

@end

