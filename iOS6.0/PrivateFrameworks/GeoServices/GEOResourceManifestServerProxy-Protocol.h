/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol GEOResourceManifestServerProxy <NSObject>
- (void)getResourceManifestWithHandler:(id)arg1;
- (oneway void)refreshActiveTileGroup;
- (oneway void)forceUpdate;
- (oneway void)resetActiveTileGroup;
- (oneway void)setActiveTileGroupIdentifier:(id)arg1;
- (id)authToken;
- (oneway void)cancelRegionalResourcesLoadForKeys:(id)arg1;
- (oneway void)loadRegionalResourcesForKeys:(id)arg1 allowNetwork:(BOOL)arg2;
- (void)closeConnection;
- (void)openConnection;
- (oneway void)startServer:(id)arg1;
@end

