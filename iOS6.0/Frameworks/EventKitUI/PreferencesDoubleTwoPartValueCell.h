/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <EventKitUI/PreferencesTwoPartValueCell.h>

@class TwoPartTextLabel, UILabel;

@interface PreferencesDoubleTwoPartValueCell : PreferencesTwoPartValueCell
{
    UILabel *_textLabel2;
    TwoPartTextLabel *_twoPartLabel2;
}

- (void)layoutText:(id)arg1 andValue:(id)arg2;
- (void)checkValueWidths;
- (void)_layoutSubviewsCore;
@property(readonly, nonatomic) TwoPartTextLabel *twoPartTextLabel2;
@property(readonly, nonatomic) UILabel *textLabel2;
- (void)dealloc;

@end

