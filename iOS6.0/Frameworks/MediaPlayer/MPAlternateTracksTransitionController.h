/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <MediaPlayer/MPTransitionController.h>

@class MPVideoViewController, UIImageView;

@interface MPAlternateTracksTransitionController : MPTransitionController
{
    MPVideoViewController *_videoController;
    UIImageView *_snapshotCoverImageView;
}

@property(nonatomic) MPVideoViewController *videoController; // @synthesize videoController=_videoController;
- (void)_animationDidStop;
- (void)performTransition:(unsigned int)arg1;

@end

