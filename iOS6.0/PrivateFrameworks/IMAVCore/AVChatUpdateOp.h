/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <IMAVCore/IMExtendedOperation.h>

@class IMHandle, NSData, NSString;

@interface AVChatUpdateOp : IMExtendedOperation
{
    IMHandle *_imHandle;
    NSString *_conferenceID;
    NSData *_updateData;
}

- (void)didFinish;
- (void)dealloc;
- (id)initWithIMHandle:(id)arg1 data:(id)arg2 avChat:(id)arg3;

@end

