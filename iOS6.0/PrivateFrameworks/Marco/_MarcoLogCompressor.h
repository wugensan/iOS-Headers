/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "IMFileCopierDelegate-Protocol.h"

@class NSMutableArray;

@interface _MarcoLogCompressor : NSObject <IMFileCopierDelegate>
{
    NSMutableArray *_archivers;
}

+ (id)sharedInstance;
- (void)fileCopierDidFinish:(id)arg1;
- (void)fileCopierDidStart:(id)arg1;
- (void)compressDirectory:(id)arg1 intoArchive:(id)arg2;
- (void)dealloc;
- (id)init;

@end

