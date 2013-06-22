/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <PhotoLibrary/PLSlideshowPlugin.h>

#import "PLImageLoadingQueueDelegate-Protocol.h"

@class PLCachedImage, PLCroppedImageView, PLImageCache, PLImageLoadingQueue, PLImageSource, PLManagedAsset;

@interface PLPictureFramePlugin : PLSlideshowPlugin <PLImageLoadingQueueDelegate>
{
    PLImageCache *_imageCache;
    PLImageLoadingQueue *_imageLoadingQueue;
    PLImageSource *_imageSource;
    struct __CFArray *_imageIndexes;
    unsigned int _currentIndex;
    PLManagedAsset *_requestedImage;
    PLCachedImage *_nextImage;
    PLCroppedImageView *_currentImageView;
    PLCroppedImageView *_nextImageView;
    unsigned int _didLoadFirstImage:1;
    unsigned int _slideshowTimerDidFire:1;
    unsigned int _slideshowTimerIsScheduled:1;
    unsigned int _paused:1;
}

- (void)_slideshowTimerFired;
- (void)_crossFadeAnimationDidStop:(id)arg1 finished:(id)arg2 context:(void *)arg3;
- (void)_transitionToNextImage;
- (void)_didLoadImage:(id)arg1;
- (void)_displayFirstImage;
- (void)imageLoadingQueue:(id)arg1 didLoadImage:(id)arg2 forAsset:(id)arg3 fromSource:(id)arg4;
- (void)_requestNextImageSynchronously:(BOOL)arg1;
- (id)_nextImage;
- (int)_albumImageIndexForSlideIndex:(int)arg1;
- (void)_scheduleSlideshowTimer;
- (void)stopSlideshow;
- (void)resumeSlideshow;
- (void)pauseSlideshow;
- (void)slideshowViewDidDisappear;
- (void)slideshowViewDidAppear;
- (void)slideshowViewWillAppear;
- (id)newSlideshowView;
- (struct CGRect)_contentBounds;
- (void)setAlbumAssets:(id)arg1;
- (void)dealloc;
- (id)init;

@end

