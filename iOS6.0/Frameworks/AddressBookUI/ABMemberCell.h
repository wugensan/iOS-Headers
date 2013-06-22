/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UITableViewCell.h"

@class NSArray;

@interface ABMemberCell : UITableViewCell
{
    int _memberID;
    NSArray *_namePieces;
    long _highlightIndex;
    BOOL _drawsComponentsRTL;
    BOOL _isGroup;
    id <ABStyleProvider> _styleProvider;
    BOOL _isMe;
}

@property(nonatomic) BOOL isMe; // @synthesize isMe=_isMe;
@property(retain, nonatomic) id <ABStyleProvider> styleProvider; // @synthesize styleProvider=_styleProvider;
- (id)_scriptingInfo;
- (id)description;
- (id)italicFont;
- (id)boldFont;
- (id)regularFont;
- (float)memberCellFieldSpacing;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setHighlighted:(BOOL)arg1;
- (void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (void)drawRect:(struct CGRect)arg1;
- (void)_drawContentInRect:(struct CGRect)arg1 selected:(BOOL)arg2;
- (struct CGSize)_drawText:(id)arg1 withColor:(id)arg2 shadowColor:(id)arg3 shadowOffset:(struct CGSize)arg4 atPoint:(struct CGPoint)arg5 withFont:(id)arg6;
- (struct CGSize)_drawText:(id)arg1 withColor:(id)arg2 shadowColor:(id)arg3 shadowOffset:(struct CGSize)arg4 atPoint:(struct CGPoint)arg5 forWidth:(float)arg6 withFont:(id)arg7 lineBreakMode:(int)arg8;
- (id)groupName;
- (void)setGroup:(BOOL)arg1;
- (void)setMemberID:(int)arg1;
- (int)memberID;
- (void)setHighlightIndex:(long)arg1;
- (void)setNamePieces:(id)arg1;
- (void)dealloc;

@end

