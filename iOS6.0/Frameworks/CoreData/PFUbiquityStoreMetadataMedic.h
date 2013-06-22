/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSPersistentStore, NSSQLiteConnection, NSString, PFUbiquityLocation;

@interface PFUbiquityStoreMetadataMedic : NSObject
{
    NSString *_localPeerID;
    PFUbiquityLocation *_ubiquityRootLocation;
    NSString *_storeName;
    NSPersistentStore *_store;
    NSSQLiteConnection *_connection;
}

@property(readonly, nonatomic) NSSQLiteConnection *connection; // @synthesize connection=_connection;
@property(readonly, nonatomic) PFUbiquityLocation *ubiquityRootLocation; // @synthesize ubiquityRootLocation=_ubiquityRootLocation;
@property(readonly, nonatomic) NSPersistentStore *store; // @synthesize store=_store;
@property(readonly, nonatomic) NSString *storeName; // @synthesize storeName=_storeName;
@property(readonly, nonatomic) NSString *localPeerID; // @synthesize localPeerID=_localPeerID;
- (BOOL)cacheMetadataForTransactionLog:(id)arg1 withImportContext:(id)arg2 error:(id *)arg3;
- (BOOL)recoverTransactionLogMetadataWithImportContext:(id)arg1 error:(id *)arg2;
- (BOOL)recoverMetadataWithError:(id *)arg1;
- (void)dealloc;
- (id)initWithStore:(id)arg1 andLocalPeerID:(id)arg2;

@end

