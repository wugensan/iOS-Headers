//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CPBitmapStore, NSSet;

__attribute__((visibility("hidden")))
@interface UIKeyboardCache : NSObject
{
    CPBitmapStore *_store;
    NSSet *_layouts;
    BOOL _isCommitting;
}

+ (BOOL)enabled;
+ (id)sharedInstance;
- (void)updateCacheForInputModes:(id)arg1;
- (id)uniqueLayoutsFromInputModes:(id)arg1;
- (id)displayImagesForView:(id)arg1 fromLayout:(id)arg2 imageFlags:(id)arg3;
- (void)displayView:(id)arg1 imageWidth:(float)arg2 fromLayout:(id)arg3;
- (void)displayView:(id)arg1 fromLayout:(id)arg2;
- (struct CGImage *)cachedCompositeImageForCacheKeys:(id)arg1 fromLayout:(id)arg2 opacities:(id)arg3;
- (struct CGImage *)cachedImageForKey:(id)arg1 fromLayout:(id)arg2;
- (void)clearNonPersistentCache;
- (void)commitTransaction;
- (void)dealloc;
- (id)init;

@end

