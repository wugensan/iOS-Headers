/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface TUReplyWithMessageStore : NSObject
{
}

- (void)_handleMessagesStoreChanged;
- (void)setCustomReply:(id)arg1 atIndex:(unsigned int)arg2;
- (id)cannedReplySettingsPrefix;
- (id)cannedRepliesForSending;
- (id)cannedReplyActionSheetOptions;
- (id)cannedReplyActionSheetPrefix;
- (id)cannedRepliesWithCapitalization:(BOOL)arg1;
- (id)customReplies;
- (id)defaultRepliesWithCapitalization:(BOOL)arg1;
- (id)cannedReplyPrefixForSending;
- (id)cannedReplyPrefix;
- (int)count;
- (void)dealloc;
- (id)init;

@end

