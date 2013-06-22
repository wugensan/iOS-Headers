/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <GameKit/GKImageCellContents.h>

@class NSArray, UIImage;

@interface GKMultilineCellContentView : GKImageCellContents
{
    struct UIEdgeInsets _contentInsets;
    struct UIEdgeInsets _textInsets;
    BOOL _highlighted;
    NSArray *_lines;
    int _disclosureStyle;
    struct CGRect _confirmationButtonRect;
    UIImage *_accessoryImage;
    struct UIEdgeInsets _accessoryImageInsets;
}

+ (id)threeLineContentViewWithTheme:(id)arg1 shouldHighlight:(BOOL)arg2;
+ (id)twoLineContentViewWithTheme:(id)arg1;
+ (id)oneLineContentViewWithTheme:(id)arg1;
+ (id)threeLineContentViewWithTheme:(id)arg1;
@property(nonatomic) struct UIEdgeInsets accessoryImageInsets; // @synthesize accessoryImageInsets=_accessoryImageInsets;
@property(retain, nonatomic) UIImage *accessoryImage; // @synthesize accessoryImage=_accessoryImage;
@property(nonatomic) struct CGRect confirmationButtonRect; // @synthesize confirmationButtonRect=_confirmationButtonRect;
@property(nonatomic) int disclosureStyle; // @synthesize disclosureStyle=_disclosureStyle;
@property(retain, nonatomic) NSArray *lines; // @synthesize lines=_lines;
@property(nonatomic, getter=isHighlighted) BOOL highlighted; // @synthesize highlighted=_highlighted;
@property(nonatomic) struct UIEdgeInsets textInsets; // @synthesize textInsets=_textInsets;
@property(nonatomic) struct UIEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
- (id)description;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (void)prepareForReuse;
- (void)drawLines:(id)arg1 inRect:(struct CGRect)arg2;
- (void)adjustLineRects:(struct CGRect *)arg1 forLines:(id)arg2 inTextRect:(struct CGRect)arg3;
- (void)drawRect:(struct CGRect)arg1;
- (struct CGRect)accessoryImageRectForContentRect:(struct CGRect)arg1;
- (struct CGRect)textRectForContentRect:(struct CGRect)arg1;
- (struct CGRect)contentRectForBounds:(struct CGRect)arg1;
@property(readonly, nonatomic) BOOL showingConfirmationButton;
- (void)setFont:(id)arg1 forLine:(unsigned int)arg2;
- (void)setTextColor:(id)arg1 forLine:(unsigned int)arg2;
- (void)setAttributedHighlightedText:(id)arg1 forLine:(unsigned int)arg2;
- (void)setAttributedText:(id)arg1 forLine:(unsigned int)arg2;
- (void)setText:(id)arg1 forLine:(unsigned int)arg2;
- (id)lineAtIndex:(unsigned int)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithNumberOfLines:(unsigned int)arg1;

@end

