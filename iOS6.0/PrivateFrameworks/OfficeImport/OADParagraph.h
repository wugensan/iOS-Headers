/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableArray, OADCharacterProperties, OADParagraphProperties;

@interface OADParagraph : NSObject
{
    OADParagraphProperties *mProperties;
    NSMutableArray *mTextRuns;
    OADCharacterProperties *mParagraphEndCharacterProperties;
}

- (void)removeUnnecessaryOverrides;
- (void)applyProperties:(id)arg1;
- (void)setParentTextListStyle:(id)arg1;
- (id)bulletCharacterProperties;
- (BOOL)hasBulletCharacterProperties;
- (void)setParagraphEndCharacterProperties:(id)arg1;
- (id)paragraphEndCharacterProperties;
- (id)addFooterField;
- (id)addDateTimeField;
- (id)addGenericTextField;
- (id)addRegularTextRun;
- (id)addTextLineBreak;
- (void)removeAllTextRuns;
- (id)textRunAtIndex:(unsigned int)arg1;
- (unsigned int)textRunCount;
- (BOOL)isEmpty;
- (void)setProperties:(id)arg1;
- (id)properties;
- (void)dealloc;
- (id)init;
- (id)findFirstTextRunOfClass:(Class)arg1;
- (id)addSlideNumberField;
- (id)plainText;

@end

