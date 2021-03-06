/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class WDDocument, WDListLevel;

@interface WDListLevelOverride : NSObject
{
    WDListLevel *mListLevel;
    WDDocument *mDocument;
    unsigned char mLevel;
    int mStartNumber;
    BOOL mStartNumberOverridden;
}

- (id)initWithDocument:(id)arg1;
- (void)dealloc;
- (id)document;
- (unsigned char)level;
- (void)setLevel:(unsigned char)arg1;
- (long)startNumber;
- (void)setStartNumber:(long)arg1;
- (BOOL)isStartNumberOverridden;
- (id)listLevel;
- (id)mutableListLevel;
- (BOOL)isListLevelOverridden;

@end

