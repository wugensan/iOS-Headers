/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class OADColorMap, OADColorScheme, OADDefaultProperties, OADFontScheme, OADStyleMatrix;

@interface OADDrawingTheme : NSObject
{
    OADDefaultProperties *mShapeDefaults;
    OADDefaultProperties *mLineDefaults;
    OADDefaultProperties *mTextDefaults;
    OADStyleMatrix *mStyleMatrix;
    OADFontScheme *mFontScheme;
    OADColorScheme *mColorScheme;
    OADColorMap *mColorMap;
    id <OADColorPalette> mColorPalette;
}

@property(retain, nonatomic) id <OADColorPalette> colorPalette; // @synthesize colorPalette=mColorPalette;
@property(readonly, nonatomic) OADColorMap *colorMap; // @synthesize colorMap=mColorMap;
@property(readonly, nonatomic) OADColorScheme *colorScheme; // @synthesize colorScheme=mColorScheme;
@property(readonly, nonatomic) OADFontScheme *fontScheme; // @synthesize fontScheme=mFontScheme;
@property(readonly, nonatomic) OADStyleMatrix *styleMatrix; // @synthesize styleMatrix=mStyleMatrix;
@property(readonly, nonatomic) OADDefaultProperties *textDefaults; // @synthesize textDefaults=mTextDefaults;
@property(readonly, nonatomic) OADDefaultProperties *lineDefaults; // @synthesize lineDefaults=mLineDefaults;
@property(readonly, nonatomic) OADDefaultProperties *shapeDefaults; // @synthesize shapeDefaults=mShapeDefaults;
- (void)dealloc;
- (void)applyThemeOverrides:(id)arg1 colorMapOverride:(id)arg2;
- (id)initWithTheme:(id)arg1 colorMap:(id)arg2 colorPalette:(id)arg3;

@end

