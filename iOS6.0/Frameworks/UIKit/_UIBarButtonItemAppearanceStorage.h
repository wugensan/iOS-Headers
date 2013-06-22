/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/_UIBarItemAppearanceStorage.h>

@class NSMutableDictionary, NSNumber, NSValue, UIColor, _UIBarBackButtonItemAppearanceStorage;

@interface _UIBarButtonItemAppearanceStorage : _UIBarItemAppearanceStorage
{
    NSMutableDictionary *backgroundImages;
    NSMutableDictionary *miniBackgroundImages;
    UIColor *tintColor;
    NSValue *titlePositionOffset;
    NSValue *miniTitlePositionOffset;
    NSNumber *backgroundVerticalAdjustment;
    NSNumber *miniBackgroundVerticalAdjustment;
    _UIBarBackButtonItemAppearanceStorage *backButtonAppearance;
}

@property(retain, nonatomic) NSNumber *miniBackgroundVerticalAdjustment; // @synthesize miniBackgroundVerticalAdjustment;
@property(retain, nonatomic) NSNumber *backgroundVerticalAdjustment; // @synthesize backgroundVerticalAdjustment;
@property(retain, nonatomic) NSValue *miniTitlePositionOffset; // @synthesize miniTitlePositionOffset;
@property(retain, nonatomic) NSValue *titlePositionOffset; // @synthesize titlePositionOffset;
@property(retain, nonatomic) UIColor *tintColor; // @synthesize tintColor;
@property(retain, nonatomic) NSNumber *miniBackButtonBackgroundVerticalAdjustment;
@property(retain, nonatomic) NSNumber *backButtonBackgroundVerticalAdjustment;
@property(retain, nonatomic) NSValue *miniBackButtonTitlePositionOffset;
@property(retain, nonatomic) NSValue *backButtonTitlePositionOffset;
- (id)anyBackButtonBackgroundImage;
- (id)backButtonBackgroundImageForState:(unsigned int)arg1 isMini:(BOOL)arg2;
- (void)setBackButtonBackgroundImage:(id)arg1 forState:(unsigned int)arg2 isMini:(BOOL)arg3;
- (id)anyBackgroundImage;
- (id)backgroundImageForState:(unsigned int)arg1 style:(int)arg2 isMini:(BOOL)arg3;
- (void)setBackgroundImage:(id)arg1 forState:(unsigned int)arg2 style:(int)arg3 isMini:(BOOL)arg4;
- (void)dealloc;

@end

