//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

__attribute__((visibility("hidden")))
@interface TSCH3DLens : NSObject <NSCopying>
{
    float mNear;
    float mFar;
}

+ (id)lens;
@property(nonatomic) float far; // @synthesize far=mFar;
@property(nonatomic) float near; // @synthesize near=mNear;
- (void)calculateCullingPlanes:(vector_a9ee3a08 *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
