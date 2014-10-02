//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSPObject.h>

#import "TSCEResolverContainer.h"
#import "TSKDocumentObject.h"
#import "TSKModel.h"
#import "TSKSearchTarget.h"

@class KNAbstractSlide, NSArray, NSDictionary, NSMutableDictionary, NSString, TSPLazyReference;

__attribute__((visibility("hidden")))
@interface KNSlideNode : TSPObject <TSKDocumentObject, TSKModel, TSKSearchTarget, TSCEResolverContainer>
{
    TSPLazyReference *mSlideReference;
    NSArray *mChildren;
    KNSlideNode *mParent;
    NSMutableDictionary *mThumbnails;
    BOOL mThumbnailsAreDirty;
    BOOL mIsHidden;
    BOOL mIsCollapsed;
    BOOL mIsCollapsedInOutlineView;
    BOOL mHasBodyInOutlineView;
    BOOL mHasTransition;
    BOOL mHasNote;
    BOOL mSlideNumberVisible;
    unsigned int mSlideSpecificHyperlinksCount;
    NSString *mClassicUniqueID;
    NSString *mUniqueIdentifier;
    NSString *mCopiedFromSlideIdentifier;
    unsigned int mEventCount;
    unsigned int mTableNameCounter;
}

+ (id)p_previousToSlideNode:(id)arg1;
+ (id)p_nextAfterSlideNode:(id)arg1;
+ (id)nodesAndDescendantsForNodes:(id)arg1 includeSkippedSlideNodes:(BOOL)arg2 includingCollapsedSlideNodes:(BOOL)arg3;
+ (id)nodesAndDescendantsForNodes:(id)arg1;
+ (id)slideNodeForSelectionModel:(id)arg1 withSelection:(id)arg2;
+ (id)parentSlideNodeForInfo:(id)arg1;
+ (id)lastSlideUnderSlideNode:(id)arg1;
@property(readonly, nonatomic) unsigned int eventCount; // @synthesize eventCount=mEventCount;
@property(nonatomic, getter=isCollapsed) BOOL collapsed; // @synthesize collapsed=mIsCollapsed;
@property(readonly, nonatomic) NSDictionary *thumbnails; // @synthesize thumbnails=mThumbnails;
@property(nonatomic) KNSlideNode *parent; // @synthesize parent=mParent;
- (void)p_commonInit;
- (void)generateNewUniqueIdentifier;
- (id)copyForPasteboard:(id)arg1;
- (id)descendantsIncludingSkippedSlideNodes:(BOOL)arg1 includingCollapsedSlideNodes:(BOOL)arg2;
- (id)descendants;
- (void)p_addDescendantsToArray:(id)arg1 includeSkippedSlideNodes:(BOOL)arg2 includeCollapsedSlideNodes:(BOOL)arg3;
- (unsigned int)nextUntitledResolverIndex;
- (BOOL)resolverNameIsUsed:(id)arg1;
- (id)resolversMatchingPrefix:(id)arg1;
- (id)resolverMatchingName:(id)arg1;
- (void)removeAllThumbnails;
- (void)removeThumbnailAtSize:(struct CGSize)arg1;
- (void)addThumbnail:(id)arg1 atSize:(struct CGSize)arg2;
- (void)wasRemovedFromDocumentRoot:(id)arg1;
- (void)willBeRemovedFromDocumentRoot:(id)arg1;
- (void)wasAddedToDocumentRoot:(id)arg1 context:(id)arg2;
- (void)willBeAddedToDocumentRoot:(id)arg1 context:(id)arg2;
@property(nonatomic, getter=isHidden) BOOL hidden;
@property(retain, nonatomic) KNAbstractSlide *slide;
- (id)childSearchTargets;
- (id)childEnumerator;
- (void)uniquifyTableNamesForUpgradeOrImport;
- (void)updateEventCount;
@property(readonly, nonatomic) BOOL hasBuilds;
@property(retain, nonatomic) NSArray *children;
@property(readonly, nonatomic) BOOL hasChildren;
@property(readonly, nonatomic) KNSlideNode *previousSkippingHidden;
@property(readonly, nonatomic) KNSlideNode *nextSkippingHidden;
@property(readonly, nonatomic) KNSlideNode *previousSkippingCollapsed;
@property(readonly, nonatomic) KNSlideNode *nextSkippingCollapsed;
@property(readonly, nonatomic) KNSlideNode *previous;
@property(readonly, nonatomic) KNSlideNode *next;
- (void)revert;
- (unsigned int)depth;
@property(readonly, nonatomic) NSString *uniqueIdentifier;
- (void)p_setEventCount:(unsigned int)arg1;
- (void)dealloc;
- (id)initWithContext:(id)arg1;
@property(retain, nonatomic) NSString *copiedFromSlideIdentifier;
@property(nonatomic) NSString *classicUniqueID;
@property(nonatomic) unsigned int slideSpecificHyperlinksCount;
@property(nonatomic) BOOL isSlideNumberVisible;
@property(nonatomic) BOOL hasNote;
@property(nonatomic) BOOL hasTransition;
@property(nonatomic) BOOL hasBodyInOutlineView;
@property(nonatomic, getter=isCollapsedInOutlineView) BOOL collapsedInOutlineView;
@property(nonatomic) BOOL thumbnailsAreDirty;
- (void)saveToArchiver:(id)arg1;
- (id)initFromUnarchiver:(id)arg1;
- (void)saveToArchive:(struct SlideNodeArchive *)arg1 archiver:(id)arg2;
- (void)loadFromArchive:(const struct SlideNodeArchive *)arg1 unarchiver:(id)arg2;
- (void)didLoadSlide:(id)arg1;

@end
