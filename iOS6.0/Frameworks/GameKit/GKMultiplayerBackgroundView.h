/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UICollectionReusableView.h"

@class GKCurvedCapBackgroundBrush, UIImageView;

@interface GKMultiplayerBackgroundView : UICollectionReusableView
{
    GKCurvedCapBackgroundBrush *_backgroundBrush;
    UIImageView *_imageView;
    struct CGSize _cachedImageSize;
}

@property(nonatomic) struct CGSize cachedImageSize; // @synthesize cachedImageSize=_cachedImageSize;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) GKCurvedCapBackgroundBrush *backgroundBrush; // @synthesize backgroundBrush=_backgroundBrush;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

