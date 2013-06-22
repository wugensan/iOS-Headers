/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Foundation/NSOperation.h>

@class NSError, NSString;

@interface NSDirectoryTraversalOperation : NSOperation
{
    id _delegate;
    NSString *_sourcePath;
    NSError *_error;
    void *_stream;
    int _optionsFlags;
    int _lastDeviceInode;
    BOOL _shouldFilterUnderbars;
    BOOL _stopped;
}

+ (id)directoryTraversalOperationAtPath:(id)arg1;
+ (id)_errorWithErrno:(int)arg1 atPath:(id)arg2;
- (void)dealloc;
- (void)main;
- (BOOL)_validatePaths:(id *)arg1;
- (void)_handleFTSEntry:(struct _ftsent *)arg1;
- (BOOL)shouldProceedAfterError:(id)arg1;
- (void)_setError:(id)arg1;
- (id)error;
- (BOOL)_shouldFilterEntry:(struct _ftsent *)arg1;
- (void)handlePathname:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (id)initWithPath:(id)arg1;

@end

