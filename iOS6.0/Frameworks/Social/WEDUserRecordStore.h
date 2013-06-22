/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "ABSearchOperationDelegate-Protocol.h"

@class ACAccount, ACAccountStore, NSManagedObjectContext, WEDSession;

@interface WEDUserRecordStore : NSObject <ABSearchOperationDelegate>
{
    WEDSession *_session;
    BOOL _stopConsumption;
    NSManagedObjectContext *_managedObjectContext;
    ACAccount *_account;
    ACAccountStore *_store;
}

- (void).cxx_destruct;
- (void)_consumeAddressBookRecords:(id)arg1 stopConsumption:(char *)arg2;
- (void)_consumeScreenName:(id)arg1 existed:(char *)arg2;
- (id)_userRecordWithDictionaryRepresentation:(id)arg1 existed:(char *)arg2;
- (void)_saveUserRecordStoreWithHandler:(id)arg1;
- (id)_userRecordEntityWithScreenName:(id)arg1;
- (id)_userRecordEntityWithUID:(id)arg1;
- (id)_resultsForEntityNamed:(id)arg1 withPredicate:(id)arg2;
- (void)_updateFollowedUserRecords;
- (void)_fetchFollowedUserRecordsWithCursor:(id)arg1 stopConsumption:(char *)arg2;
- (void)_findABEntriesWithScreenName:(id)arg1;
- (void)_findABEntriesWithWeiboScreenNames:(id)arg1;
- (void)_consumeUserRecordRepresentations:(id)arg1 stopConsumption:(char *)arg2;
- (void)_runSynchronouslyOnCoreDataQueue:(id)arg1;
- (void)searchOperation:(id)arg1 didFindMatches:(id)arg2 moreComing:(BOOL)arg3;
- (void)userRecordsMatchingPredicate:(id)arg1 completionBlock:(id)arg2;
- (void)updateFollowedUserRecordsIfNeeded;
- (id)initWithSession:(id)arg1 managedObjectContext:(id)arg2 account:(id)arg3 accountStore:(id)arg4;

@end

