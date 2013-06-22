/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <AddressBookUI/ABPickerViewController.h>

#import "UISearchBarDelegate-Protocol.h"
#import "UISearchDisplayDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSArray, NSDictionary, NSIndexPath, NSString, UILocalizedIndexedCollation, UISearchBar, UISearchDisplayController, UITableView;

@interface ABCountryPickerViewController : ABPickerViewController <UITableViewDelegate, UITableViewDataSource, UISearchDisplayDelegate, UISearchBarDelegate>
{
    UITableView *_tableView;
    UILocalizedIndexedCollation *_collation;
    NSArray *_sections;
    NSArray *_sectionIndexTitles;
    NSDictionary *_indexToSections;
    UISearchBar *_searchBar;
    UISearchDisplayController *_searchController;
    NSArray *_filteredCountries;
    NSString *_selectedCountryCode;
    NSIndexPath *_selectedIndexPath;
    NSArray *_allCountries;
}

- (void)searchDisplayControllerWillEndSearch:(id)arg1;
- (void)searchDisplayControllerWillBeginSearch:(id)arg1;
- (BOOL)searchDisplayController:(id)arg1 shouldReloadTableForSearchString:(id)arg2;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(int)arg3;
- (id)sectionIndexTitlesForTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)viewWillAppear:(BOOL)arg1;
- (void)_getRotationContentSettings:(CDStruct_af7d35ee *)arg1;
- (float)ab_heightToFitForViewInPopoverView;
- (void)loadView;
- (void)scrollToSearchFieldAnimated:(BOOL)arg1;
- (void)reloadCountryCodes;
- (void)configureSections;
@property(retain, nonatomic) NSString *selectedCountryCode;
- (void)_setSelectedCountryCode:(id)arg1 atPath:(id)arg2;
- (void)dealloc;
- (id)init;

@end

