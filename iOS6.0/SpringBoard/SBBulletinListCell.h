/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "SBBulletinLinenBackedCell.h"

@class SBBulletinCellContentView, UIImageView;

@interface SBBulletinListCell : SBBulletinLinenBackedCell
{
    UIImageView *_bulletinAccessoryView;
    UIImageView *_bottomCellSeparator;
    SBBulletinCellContentView *_cellContentView;
}

+ (float)heightForRowWithSubtitle:(id)arg1 imageHeight:(float)arg2;
+ (float)heightForRowWithSubtitle:(id)arg1 message:(id)arg2 maxLines:(unsigned int)arg3 width:(float)arg4;
- (void)layoutSubviews;
- (void)setCellSeparatorStyle:(int)arg1;
- (void)setBulletinAccessoryStyle:(int)arg1;
- (void)setAttachmentText:(id)arg1;
- (void)setAttachmentImageSize:(struct CGSize)arg1;
- (void)setAttachmentImage:(id)arg1;
- (void)setStartDate:(id)arg1 endDate:(id)arg2 timeZone:(id)arg3 allDay:(BOOL)arg4 formatStyle:(int)arg5;
- (void)setMessage:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setMaxMessageLines:(unsigned int)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)prepareForReuse;
- (void)dealloc;
- (id)initWithLinenView:(id)arg1 reuseIdentifier:(id)arg2;

@end

