/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/UICollectionViewLayout.h>

@class NSDictionary, NSMutableDictionary;

@interface UICollectionViewFlowLayout : UICollectionViewLayout
{
    struct {
        unsigned int delegateSizeForItem:1;
        unsigned int delegateReferenceSizeForHeader:1;
        unsigned int delegateReferenceSizeForFooter:1;
        unsigned int delegateInsetForSection:1;
        unsigned int delegateInteritemSpacingForSection:1;
        unsigned int delegateLineSpacingForSection:1;
        unsigned int delegateAlignmentOptions:1;
        unsigned int keepDelegateInfoWhileInvalidating:1;
        unsigned int keepAllDataWhileInvalidating:1;
        unsigned int layoutDataIsValid:1;
        unsigned int delegateInfoIsValid:1;
    } _gridLayoutFlags;
    float _interitemSpacing;
    float _lineSpacing;
    struct CGSize _itemSize;
    struct CGSize _headerReferenceSize;
    struct CGSize _footerReferenceSize;
    struct UIEdgeInsets _sectionInset;
    id _data;
    struct CGSize _currentLayoutSize;
    NSMutableDictionary *_insertedItemsAttributesDict;
    NSMutableDictionary *_insertedSectionHeadersAttributesDict;
    NSMutableDictionary *_insertedSectionFootersAttributesDict;
    NSMutableDictionary *_deletedItemsAttributesDict;
    NSMutableDictionary *_deletedSectionHeadersAttributesDict;
    NSMutableDictionary *_deletedSectionFootersAttributesDict;
    int _scrollDirection;
    NSDictionary *_rowAlignmentsOptionsDictionary;
    struct CGRect _visibleBounds;
}

@property(nonatomic) struct UIEdgeInsets sectionInset; // @synthesize sectionInset=_sectionInset;
@property(nonatomic) struct CGSize footerReferenceSize; // @synthesize footerReferenceSize=_footerReferenceSize;
@property(nonatomic) struct CGSize headerReferenceSize; // @synthesize headerReferenceSize=_headerReferenceSize;
@property(nonatomic) struct CGSize itemSize; // @synthesize itemSize=_itemSize;
@property(nonatomic) float minimumInteritemSpacing; // @synthesize minimumInteritemSpacing=_interitemSpacing;
@property(nonatomic) float minimumLineSpacing; // @synthesize minimumLineSpacing=_lineSpacing;
@property(nonatomic) int scrollDirection;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (id)_layoutAttributesForItemsInRect:(struct CGRect)arg1;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForFooterInSection:(int)arg1;
- (id)layoutAttributesForHeaderInSection:(int)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1 usingData:(id)arg2;
- (id)layoutAttributesForFooterInSection:(int)arg1 usingData:(id)arg2;
- (id)layoutAttributesForHeaderInSection:(int)arg1 usingData:(id)arg2;
- (id)indexPathForItemAtPoint:(struct CGPoint)arg1;
- (id)indexesForSectionFootersInRect:(struct CGRect)arg1;
- (id)indexesForSectionHeadersInRect:(struct CGRect)arg1;
- (id)indexPathsForItemsInRect:(struct CGRect)arg1 usingData:(id)arg2;
- (id)indexesForSectionFootersInRect:(struct CGRect)arg1 usingData:(id)arg2;
- (id)indexesForSectionHeadersInRect:(struct CGRect)arg1 usingData:(id)arg2;
- (struct CGSize)collectionViewContentSize;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (void)prepareLayout;
- (void)invalidateLayout;
- (void)_invalidateLayout;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (void)_invalidateButKeepAllInfo;
- (void)_invalidateButKeepDelegateInfo;
- (struct CGSize)synchronizeLayout;
- (id)finalLayoutAttributesForFooterInDeletedSection:(int)arg1;
- (id)finalLayoutAttributesForHeaderInDeletedSection:(int)arg1;
- (id)finalLayoutAttributesForDeletedItemAtIndexPath:(id)arg1;
- (id)initialLayoutAttributesForFooterInInsertedSection:(int)arg1;
- (id)initialLayoutAttributesForHeaderInInsertedSection:(int)arg1;
- (id)initialLayoutAttributesForInsertedItemAtIndexPath:(id)arg1;
- (void)finalizeCollectionViewUpdates;
- (struct CGRect)_frameForFooterInSection:(int)arg1 usingData:(id)arg2;
- (struct CGRect)_frameForHeaderInSection:(int)arg1 usingData:(id)arg2;
- (struct CGRect)_frameForItemAtSection:(int)arg1 andRow:(int)arg2 usingData:(id)arg3;
- (void)_fetchItemsInfo;
- (void)_updateItemsLayout;
- (void)_getSizingInfos;
- (void)_updateDelegateFlags;
@property(retain, nonatomic, setter=_setRowAlignmentsOptions:) NSDictionary *_rowAlignmentOptions;

@end

