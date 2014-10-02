//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@interface UIViewController (MusicAdditions)
+ (id)music_sanitizedQueryForQuery:(id)arg1;
+ (id)music_queryForIdentifier:(id)arg1;
+ (void)music_registerViewControllerIdentifiers;
- (void)_music_updateNowPlayingNavigationItem;
- (id)music_createNowPlayingButton;
- (void)_music_setNoContentView:(id)arg1;
- (void)_music_setCloudLoadingView:(id)arg1;
- (id)_music_noContentView;
- (id)_music_cloudLoadingView;
- (void)_music_storeClientRestrictionsDidChangeNotification:(id)arg1;
- (void)_music_itemWillChangeNotification:(id)arg1;
- (void)_music_cloudControllerIsUpdateInProgressDidChangeNotification:(id)arg1;
- (void)_music_storeButtonAction:(id)arg1;
- (void)_music_nowPlayingButtonAction:(id)arg1;
- (void)music_updateStoreNavigationItem;
- (void)music_updateForContentChange;
- (BOOL)music_supportsMiniPlayer;
@property(nonatomic, getter=music_showsStoreNavigationItem, setter=music_setShowsStoreNavigationItem:) BOOL music_showsStoreNavigationItem;
@property(nonatomic, getter=music_showsNowPlayingNavigationItem, setter=music_setShowsNowPlayingNavigationItem:) BOOL music_showsNowPlayingNavigationItem;
@property(nonatomic, getter=music_showsNoContent, setter=music_setShowsNoContent:) BOOL music_showsNoContent;
@property(nonatomic, getter=music_showsMatchLoading, setter=music_setShowsMatchLoading:) BOOL music_showsMatchLoading;
- (BOOL)music_shouldPresentModallyInMoreList;
- (void)music_prospectivePlaybackInformationDidChange;
- (id)music_prospectivePlaybackInformation;
- (BOOL)music_hasContent;
- (BOOL)music_beginPlaybackForVisibleContent;
@end
