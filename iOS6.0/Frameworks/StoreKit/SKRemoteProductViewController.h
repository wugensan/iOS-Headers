/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "_UIRemoteViewController.h"

#import "SKUIClientProductPageViewController-Protocol.h"

@class SKStoreProductViewController;

@interface SKRemoteProductViewController : _UIRemoteViewController <SKUIClientProductPageViewController>
{
    SKStoreProductViewController *_productViewController;
}

@property(nonatomic) __weak SKStoreProductViewController *productViewController; // @synthesize productViewController=_productViewController;
- (id)proxy:(id)arg1 detailedSignatureForSelector:(SEL)arg2;
- (void)storeKit_setWantsFullScreenLayout:(id)arg1;
- (void)setStatusBarStyle:(id)arg1 animated:(id)arg2;
- (void)setStatusBarHidden:(id)arg1 withAnimation:(id)arg2;
- (void)presentPageWithRequest:(id)arg1 animated:(id)arg2;
- (void)loadDidFinishWithResult:(id)arg1 error:(id)arg2;
- (void)didReceiveTitle:(id)arg1;
- (void)didFinishWithResult:(id)arg1;
- (void)didFinish;
- (void)viewServiceDidTerminateWithError:(id)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;

@end

