/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "SSRequestDelegate-Protocol.h"

@protocol SSPurchaseRequestDelegate <SSRequestDelegate>

@optional
- (void)purchaseRequest:(id)arg1 purchaseDidSucceed:(id)arg2;
- (void)purchaseRequest:(id)arg1 purchaseDidFail:(id)arg2 withError:(id)arg3;
@end

