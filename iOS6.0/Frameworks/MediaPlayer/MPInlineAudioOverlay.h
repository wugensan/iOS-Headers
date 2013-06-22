/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <MediaPlayer/MPPlaybackControlsView.h>

@class MPInlineAudioTransportControls, NSString, UIImageView, UILabel, UIView;

@interface MPInlineAudioOverlay : MPPlaybackControlsView
{
    id <MPVideoControllerProtocol> _videoViewController;
    int _style;
    UIView *_backgroundView;
    MPInlineAudioTransportControls *_transportControls;
    UILabel *_streamingLabel;
    NSString *_playbackErrorDescription;
    UILabel *_playbackErrorDescriptionLabel;
    UIImageView *_leftImageView;
    UIImageView *_trackImageView;
    UIImageView *_leftStretchImageView;
    UIImageView *_rightStretchImageView;
    UIImageView *_rightImageView;
    UIImageView *_largeLeftImageView;
    UIImageView *_largeMiddleLeftImageView;
    UIImageView *_largeTrackImageView;
    UIImageView *_largeMiddleRightImageView;
    UIImageView *_largeRightImageView;
}

@property(nonatomic) id <MPVideoControllerProtocol> videoViewController; // @synthesize videoViewController=_videoViewController;
@property(nonatomic) int style; // @synthesize style=_style;
@property(copy, nonatomic) NSString *playbackErrorDescription; // @synthesize playbackErrorDescription=_playbackErrorDescription;
- (struct CGRect)_frameInBackgroundViewForDescriptionLabel:(id)arg1;
- (id)_newDescriptionLabel;
- (void)_updateVisiblePartsForAvailableRoutes;
- (void)_itemDurationDidChangeNotification:(id)arg1;
- (void)_availableRoutesDidChangeNotification:(id)arg1;
- (void)setPlayer:(id)arg1;
- (unsigned long long)displayablePartsInPartMask:(unsigned long long)arg1;
- (void)reloadView;
- (void)setItem:(id)arg1;
- (void)setCurrentTime:(double)arg1;
- (id)newProgressIndicator;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

