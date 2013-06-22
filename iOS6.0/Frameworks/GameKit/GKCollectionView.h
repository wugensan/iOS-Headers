/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UICollectionView.h"

@class NSArray, UIImage, UIView;

@interface GKCollectionView : UICollectionView
{
    NSArray *_backgroundTiles;
    UIImage *_backgroundImage;
    UIView *_topShadowView;
}

@property(retain, nonatomic) UIView *topShadowView; // @synthesize topShadowView=_topShadowView;
@property(retain, nonatomic) UIImage *backgroundImage; // @synthesize backgroundImage=_backgroundImage;
@property(retain, nonatomic) NSArray *backgroundTiles; // @synthesize backgroundTiles=_backgroundTiles;
- (void)layoutSubviews;
- (void)updateShadowViews;
- (void)setContentOffset:(struct CGPoint)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)updateBackground;
- (void)layoutTilesWithBounds:(struct CGRect)arg1 offset:(struct CGSize)arg2;
- (void)updateBackgroundImageWithBounds:(struct CGRect)arg1;
- (void)dealloc;

@end

