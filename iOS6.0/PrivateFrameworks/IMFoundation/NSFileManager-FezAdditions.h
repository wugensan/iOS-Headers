/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSFileManager.h"

@interface NSFileManager (FezAdditions)
- (BOOL)copyItemAtPath:(id)arg1 toPath:(id)arg2 uniquePath:(id *)arg3 error:(id *)arg4;
- (BOOL)moveItemAtPath:(id)arg1 toPath:(id)arg2 uniquePath:(id *)arg3 error:(id *)arg4;
- (BOOL)_moveItemAtPath:(id)arg1 toPath:(id)arg2 uniquePath:(id *)arg3 error:(id *)arg4 asCopy:(BOOL)arg5;
- (id)createUniqueDirectoryWithName:(id)arg1 atPath:(id)arg2 ofType:(id)arg3;
- (id)uniqueFilename:(id)arg1 atPath:(id)arg2 ofType:(id)arg3;
- (BOOL)makeDirectoriesInPath:(id)arg1 mode:(unsigned long)arg2;
- (BOOL)_isPathOnMissingVolume:(id)arg1;
- (id)_randomTemporaryPathWithFileName:(id)arg1;
- (id)_randomTemporaryPathWithSuffix:(id)arg1 fileName:(id)arg2;
- (id)_randomTemporaryPathWithSuffix:(id)arg1;
- (id)_generateLinkForURL:(id)arg1;
@end

