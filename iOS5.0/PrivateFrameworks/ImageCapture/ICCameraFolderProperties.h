/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableArray;

@interface ICCameraFolderProperties : NSObject
{
    NSMutableArray *_files;
    NSMutableArray *_folders;
}

- (void)dealloc;
- (void)finalize;
@property(retain) NSMutableArray *folders; // @synthesize folders=_folders;
@property(retain) NSMutableArray *files; // @synthesize files=_files;

@end

