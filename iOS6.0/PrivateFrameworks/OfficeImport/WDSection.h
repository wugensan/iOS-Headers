/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class WDDocument, WDText;

@interface WDSection : NSObject
{
    unsigned int mOriginal:1;
    unsigned int mTracked:1;
    unsigned int mResolved:1;
    WDDocument *mDocument;
    WDText *mText;
    WDText *mEvenPageHeader;
    WDText *mOddPageHeader;
    WDText *mFirstPageHeader;
    WDText *mEvenPageFooter;
    WDText *mOddPageFooter;
    WDText *mFirstPageFooter;
    CDStruct_a8aaff76 mOriginalProperties;
    CDStruct_a8aaff76 mTrackedProperties;
}

- (id).cxx_construct;
- (BOOL)isFormattingChangeDateOverridden;
- (void)setFormattingChangeDate:(id)arg1;
- (id)formattingChangeDate;
- (BOOL)isIndexToAuthorIDOfFormattingChangeOverridden;
- (void)setIndexToAuthorIDOfFormattingChange:(unsigned short)arg1;
- (unsigned short)indexToAuthorIDOfFormattingChange;
- (BOOL)isFormattingChangedOverridden;
- (void)setFormattingChanged:(BOOL)arg1;
- (BOOL)formattingChanged;
- (BOOL)isTitlePageOverridden;
- (void)setTitlePage:(BOOL)arg1;
- (BOOL)titlePage;
- (BOOL)isVerticalJustificationOverridden;
- (void)setVerticalJustification:(int)arg1;
- (int)verticalJustification;
- (BOOL)isColumnSpaceOverridden;
- (void)setColumnSpace:(long)arg1;
- (long)columnSpace;
- (BOOL)isColumnsEqualWidthOverridden;
- (void)setColumnsEqualWidth:(BOOL)arg1;
- (BOOL)columnsEqualWidth;
- (void)appendColumnSpace:(unsigned long)arg1;
- (unsigned long)columnSpaceAt:(unsigned int)arg1;
- (BOOL)isLastColumnWidthDefined;
- (void)appendColumnWidth:(unsigned long)arg1;
- (unsigned long)columnWidthAt:(unsigned int)arg1;
- (BOOL)isColumnCountOverridden;
- (void)setColumnCount:(unsigned short)arg1;
- (unsigned short)columnCount;
- (BOOL)isChapterNumberSeparatorOverridden;
- (void)setChapterNumberSeparator:(int)arg1;
- (int)chapterNumberSeparator;
- (BOOL)isPageNumberRestartOverridden;
- (void)setPageNumberRestart:(BOOL)arg1;
- (BOOL)pageNumberRestart;
- (BOOL)isPageNumberStartOverridden;
- (void)setPageNumberStart:(unsigned short)arg1;
- (unsigned short)pageNumberStart;
- (BOOL)isPageNumberFormatOverridden;
- (void)setPageNumberFormat:(int)arg1;
- (int)pageNumberFormat;
- (BOOL)isLineNumberRestartOverridden;
- (void)setLineNumberRestart:(int)arg1;
- (int)lineNumberRestart;
- (BOOL)isLineNumberDistanceOverridden;
- (void)setLineNumberDistance:(short)arg1;
- (short)lineNumberDistance;
- (BOOL)isLineNumberIncrementOverridden;
- (void)setLineNumberIncrement:(unsigned short)arg1;
- (unsigned short)lineNumberIncrement;
- (BOOL)isLineNumberStartOverridden;
- (void)setLineNumberStart:(short)arg1;
- (short)lineNumberStart;
- (BOOL)isBorderOffsetOverridden;
- (void)setBorderOffset:(int)arg1;
- (int)borderOffset;
- (BOOL)isBorderDisplayOverridden;
- (void)setBorderDisplay:(int)arg1;
- (int)borderDisplay;
- (BOOL)isBorderDepthOverridden;
- (void)setBorderDepth:(int)arg1;
- (int)borderDepth;
- (BOOL)isRightBorderOverridden;
- (id)mutableRightBorder;
- (id)rightBorder;
- (BOOL)isBottomBorderOverridden;
- (id)mutableBottomBorder;
- (id)bottomBorder;
- (BOOL)isLeftBorderOverridden;
- (id)mutableLeftBorder;
- (id)leftBorder;
- (BOOL)isTopBorderOverridden;
- (id)mutableTopBorder;
- (id)topBorder;
- (BOOL)isGutterMarginOverridden;
- (void)setGutterMargin:(unsigned long)arg1;
- (unsigned long)gutterMargin;
- (BOOL)isFooterMarginOverridden;
- (void)setFooterMargin:(unsigned long)arg1;
- (unsigned long)footerMargin;
- (BOOL)isHeaderMarginOverridden;
- (void)setHeaderMargin:(unsigned long)arg1;
- (unsigned long)headerMargin;
- (BOOL)isBottomMarginOverridden;
- (void)setBottomMargin:(unsigned long)arg1;
- (unsigned long)bottomMargin;
- (BOOL)isTopMarginOverridden;
- (void)setTopMargin:(unsigned long)arg1;
- (unsigned long)topMargin;
- (BOOL)isRightMarginOverridden;
- (void)setRightMargin:(unsigned long)arg1;
- (unsigned long)rightMargin;
- (BOOL)isLeftMarginOverridden;
- (void)setLeftMargin:(unsigned long)arg1;
- (unsigned long)leftMargin;
- (BOOL)isPageOrientationOverridden;
- (void)setPageOrientation:(int)arg1;
- (int)pageOrientation;
- (BOOL)isTextDirectionOverridden;
- (void)setTextDirection:(int)arg1;
- (int)textDirection;
- (BOOL)isPageScaleOverridden;
- (void)setPageScale:(unsigned long)arg1;
- (unsigned long)pageScale;
- (BOOL)isPageHeightOverridden;
- (void)setPageHeight:(unsigned long)arg1;
- (unsigned long)pageHeight;
- (BOOL)isPageWidthOverridden;
- (void)setPageWidth:(unsigned long)arg1;
- (unsigned long)pageWidth;
- (BOOL)isBreakTypeOverridden;
- (void)setBreakType:(int)arg1;
- (int)breakType;
- (id)firstPageFooter;
- (id)evenPageFooter;
- (id)oddPageFooter;
- (id)firstPageHeader;
- (id)evenPageHeader;
- (id)oddPageHeader;
- (id)text;
- (id)document;
- (void)setResolveMode:(int)arg1;
- (int)resolveMode;
- (void)dealloc;
- (id)initWithDocument:(id)arg1;

@end

