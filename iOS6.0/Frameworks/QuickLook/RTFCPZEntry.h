/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface RTFCPZEntry : NSObject
{
    id <RTFCPZArchiveInputStream> mInput;
    int mCompressionMethod;
    unsigned long long mCompressedSize;
    unsigned long long mUncompressedSize;
    unsigned long long mOffset;
    unsigned int mCrc;
}

- (void)copyToFile:(id)arg1;
- (id)data;
- (id)inputStream;
- (void)dealloc;
- (id)initFromCentralFileHeader:(const char *)arg1 inputStream:(id)arg2;

@end

