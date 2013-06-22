/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSMutableData.h"

@interface NSMutableData (NSMutableData)
+ (id)dataWithLength:(unsigned int)arg1;
+ (id)dataWithCapacity:(unsigned int)arg1;
+ (id)allocWithZone:(struct _NSZone *)arg1;
- (id)initWithLength:(unsigned int)arg1;
- (id)initWithCapacity:(unsigned int)arg1;
- (void)setData:(id)arg1;
- (void)resetBytesInRange:(struct _NSRange)arg1;
- (void)replaceBytesInRange:(struct _NSRange)arg1 withBytes:(const void *)arg2;
- (void)increaseLengthBy:(unsigned int)arg1;
- (void)appendData:(id)arg1;
- (void)appendBytes:(const void *)arg1 length:(unsigned int)arg2;
- (void)replaceBytesInRange:(struct _NSRange)arg1 withBytes:(const void *)arg2 length:(unsigned int)arg3;
- (Class)classForCoder;
- (void)setLength:(unsigned int)arg1;
- (void *)mutableBytes;
@end

