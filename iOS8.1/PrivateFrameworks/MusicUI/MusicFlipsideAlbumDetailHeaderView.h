//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewHeaderFooterView.h"

@class MPUItemOfferButton, NSString, UIImage, UIImageView, UILabel, UIView;

@interface MusicFlipsideAlbumDetailHeaderView : UITableViewHeaderFooterView
{
    UIImageView *_artworkImageView;
    UIView *_hairlineView;
    MPUItemOfferButton *_itemOfferButton;
    UILabel *_artistLabel;
    UILabel *_albumLabel;
    UILabel *_songLabel;
    UILabel *_durationLabel;
    UILabel *_copyrightYearLabel;
    UIView *_topCellSeparatorView;
    float _cloudRightInset;
    CDUnknownBlockType _downloadActionBlock;
    int _songCount;
    NSString *_copyright;
    NSString *_year;
    double _totalDuration;
}

+ (struct CGSize)artworkSize;
@property(readonly, copy, nonatomic) NSString *year; // @synthesize year=_year;
@property(readonly, copy, nonatomic) NSString *copyright; // @synthesize copyright=_copyright;
@property(nonatomic) double totalDuration; // @synthesize totalDuration=_totalDuration;
@property(nonatomic) int songCount; // @synthesize songCount=_songCount;
@property(copy, nonatomic) CDUnknownBlockType downloadActionBlock; // @synthesize downloadActionBlock=_downloadActionBlock;
@property(nonatomic) float cloudRightInset; // @synthesize cloudRightInset=_cloudRightInset;
- (void).cxx_destruct;
- (void)_contentSizeCategoryDidChangeNotification:(id)arg1;
- (void)_itemOfferButtonAction:(id)arg1;
- (void)setCopyright:(id)arg1 year:(id)arg2;
@property(copy, nonatomic) NSString *album;
@property(copy, nonatomic) NSString *artist;
- (void)setBackgroundTransitionProgress:(float)arg1;
@property(nonatomic, getter=isDownloadable) BOOL downloadable;
@property(retain, nonatomic) UIImage *artworkImage;
- (float)backgroundTransitionProgress;
- (void)setTableViewStyle:(int)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

