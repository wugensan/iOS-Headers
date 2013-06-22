/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import <GameKit/GKTableSection-Protocol.h>
#import "GKTableSectionLoadingStatus-Protocol.h"

@class GKNetworkImageSource, NSError, NSIndexSet, NSOrderedSet, NSSet, NSString;

@interface GKTableSection : NSObject <GKTableSection, GKTableSectionLoadingStatus>
{
    SEL _action;
    SEL _didShowMoreAction;
    NSOrderedSet *_items;
    NSOrderedSet *_visibleItems;
    int _visibleItemCount;
    int _showMoreItemCount;
    BOOL _usesTopCapTitle;
    BOOL _supportsRowAnimation;
    NSOrderedSet *_itemsBeforeRefresh;
    NSOrderedSet *_itemsBeforeUpdate;
    BOOL _loaded;
    BOOL _loading;
    NSError *_loadError;
    BOOL _needsRedisplay;
    NSIndexSet *_indexesOfRowsWithLoadedData;
    NSString *_iconURLStringKeyValuePath;
    int _loadDataReentryCount;
    NSSet *_itemsLoadingPurgeableData;
    GKNetworkImageSource *_iconSource;
}

@property(retain, nonatomic) GKNetworkImageSource *iconSource; // @synthesize iconSource=_iconSource;
@property(retain, nonatomic) NSSet *itemsLoadingPurgeableData; // @synthesize itemsLoadingPurgeableData=_itemsLoadingPurgeableData;
@property(nonatomic) int loadDataReentryCount; // @synthesize loadDataReentryCount=_loadDataReentryCount;
@property(retain, nonatomic) NSString *iconURLStringKeyValuePath; // @synthesize iconURLStringKeyValuePath=_iconURLStringKeyValuePath;
@property(retain, nonatomic) NSIndexSet *indexesOfRowsWithLoadedData; // @synthesize indexesOfRowsWithLoadedData=_indexesOfRowsWithLoadedData;
@property(nonatomic) BOOL needsRedisplay; // @synthesize needsRedisplay=_needsRedisplay;
@property(retain, nonatomic) NSError *loadError; // @synthesize loadError=_loadError;
@property(nonatomic) BOOL loading; // @synthesize loading=_loading;
@property(nonatomic) BOOL loaded; // @synthesize loaded=_loaded;
@property(retain, nonatomic) NSOrderedSet *itemsBeforeUpdate; // @synthesize itemsBeforeUpdate=_itemsBeforeUpdate;
@property(retain, nonatomic) NSOrderedSet *itemsBeforeRefresh; // @synthesize itemsBeforeRefresh=_itemsBeforeRefresh;
@property(nonatomic) BOOL supportsRowAnimation; // @synthesize supportsRowAnimation=_supportsRowAnimation;
@property(nonatomic) BOOL usesTopCapTitle; // @synthesize usesTopCapTitle=_usesTopCapTitle;
@property(nonatomic) int showMoreItemCount; // @synthesize showMoreItemCount=_showMoreItemCount;
@property(nonatomic) int visibleItemCount; // @synthesize visibleItemCount=_visibleItemCount;
@property(retain, nonatomic) NSOrderedSet *items; // @synthesize items=_items;
@property(nonatomic) SEL didShowMoreAction; // @synthesize didShowMoreAction=_didShowMoreAction;
@property(nonatomic) SEL action; // @synthesize action=_action;
- (void)forceReloadInTableView:(id)arg1;
- (BOOL)tableView:(id)arg1 animateReloadingSectionAtIndex:(int)arg2;
- (BOOL)tableView:(id)arg1 animateUpdatingSectionAtIndex:(int)arg2;
- (void)tableView:(id)arg1 animateTransitionFromItems:(id)arg2 toItems:(id)arg3 atSectionIndex:(int)arg4;
- (BOOL)tableView:(id)arg1 canUpdateFromSection:(id)arg2;
- (void)didRefresh;
- (void)willRefresh;
- (id)viewForSectionHeaderInTableView:(id)arg1;
- (float)heightForHeaderInTableView:(id)arg1;
- (id)sectionHeaderTitleInTableView:(id)arg1;
- (id)alternateTitleForHeaderInTableView:(id)arg1;
- (id)secondaryTitleForHeaderInTableView:(id)arg1;
- (id)titleForHeaderInTableView:(id)arg1;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForContentRow:(int)arg2;
- (float)tableView:(id)arg1 heightForFooterRow:(int)arg2;
- (float)tableView:(id)arg1 heightForHeaderRow:(int)arg2;
- (BOOL)tableView:(id)arg1 isShowMoreRow:(int)arg2;
- (BOOL)tableView:(id)arg1 isFooterRow:(int)arg2;
- (BOOL)tableView:(id)arg1 isContentRow:(int)arg2;
- (BOOL)tableView:(id)arg1 isHeaderRow:(int)arg2;
- (int)footerRowCountInTableView:(id)arg1;
- (int)headerRowCountInTableView:(id)arg1;
- (int)rowCountInTableView:(id)arg1;
@property(readonly, nonatomic) BOOL showMoreVisible; // @dynamic showMoreVisible;
- (BOOL)showMoreVisibleInTableView:(id)arg1;
- (int)contentRowCountInTableView:(id)arg1;
- (int)visibleItemCountInTableView:(id)arg1;
- (int)tableView:(id)arg1 numberOfColumnsForRow:(int)arg2;
- (int)columnCountInTableView:(id)arg1;
- (void)removeItems:(id)arg1;
- (id)tableView:(id)arg1 objectForIndexPath:(id)arg2;
- (int)tableView:(id)arg1 itemIndexForIndexPath:(id)arg2;
- (id)tableView:(id)arg1 reuseIdentifierForRow:(int)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 sectionHeaderCellForIndexPath:(id)arg2;
- (id)tableView:(id)arg1 prepareContents:(id)arg2 forCell:(id)arg3 atIndexPath:(id)arg4;
- (void)tableView:(id)arg1 showMoreInSection:(int)arg2;
- (void)tableView:(id)arg1 didSelectIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectItem:(id)arg2;
- (BOOL)tableView:(id)arg1 shouldSelectItem:(id)arg2;
- (void)stopLoading;
- (void)startLoading;
- (id)sectionReuseIdentifierInTableView:(id)arg1;
- (id)tableView:(id)arg1 prepareContents:(id)arg2 forItem:(id)arg3;
- (CDStruct_70ce6416)currentMetricsInTableView:(id)arg1;
- (BOOL)tableView:(id)arg1 loadAdditionalDataForSection:(int)arg2 rows:(id)arg3 thenUpdateView:(id)arg4;
- (id)tableView:(id)arg1 unloadedItemsInSection:(int)arg2 rows:(id)arg3;
- (id)unloadedRowsFromRowSet:(id)arg1;
- (void)tableView:(id)arg1 loadAdditionalDataForItems:(id)arg2 thenUpdateView:(id)arg3;
- (void)tableView:(id)arg1 loadPurgeableDataForSectionIndex:(int)arg2 rows:(id)arg3 thenUpdateView:(id)arg4;
- (void)tableView:(id)arg1 loadPurgeableDataForItem:(id)arg2 thenUpdateView:(id)arg3;
- (id)iconURLStringForItem:(id)arg1;
- (id)iconSourceForItem:(id)arg1;
- (int)dataPageSizeForRowsInTableView:(id)arg1;
- (id)tableView:(id)arg1 section:(int)arg2 itemsForRows:(id)arg3;
@property(retain, nonatomic) NSOrderedSet *visibleItems; // @synthesize visibleItems=_visibleItems;
- (id)tableView:(id)arg1 section:(int)arg2 rowIndexesForItems:(id)arg3;
- (id)tableView:(id)arg1 sectionIndex:(int)arg2 indexPathForItem:(id)arg3;
- (BOOL)tableView:(id)arg1 row:(int *)arg2 column:(int *)arg3 forItem:(id)arg4;
- (id)tableView:(id)arg1 itemAtIndex:(int)arg2;
- (int)sectionItemCountInTableView:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)init;
- (id)_gkDescriptionWithChildren:(int)arg1;
- (id)_gkDescription;

// Remaining properties
@property(retain, nonatomic) NSString *abbreviatedTitle;
@property(nonatomic) BOOL hasContent;
@property(retain, nonatomic) NSString *secondaryTitle;
@property(retain, nonatomic) NSString *title;

@end

