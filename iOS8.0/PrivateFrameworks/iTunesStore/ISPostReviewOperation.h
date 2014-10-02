//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iTunesStore/ISOperation.h>

#import "ISStoreURLOperationDelegate.h"

@class ISReview, NSString;

@interface ISPostReviewOperation : ISOperation <ISStoreURLOperationDelegate>
{
    BOOL _backgroundReview;
    ISReview *_review;
}

@property(retain) ISReview *review; // @synthesize review=_review;
@property(getter=isBackgroundReview) BOOL backgroundReview; // @synthesize backgroundReview=_backgroundReview;
- (id)_httpBody;
- (void)operation:(id)arg1 finishedWithOutput:(id)arg2;
- (void)run;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
