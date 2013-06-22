/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSFastEnumeration-Protocol.h"
#import "SBIconIndexNodeObserver-Protocol.h"

@class NSMapTable, NSMutableArray;

@interface SBIconIndexMutableList : NSObject <SBIconIndexNodeObserver, NSFastEnumeration>
{
    NSMutableArray *_nodes;
    NSMapTable *_index;
    id <SBIconIndexMutableListObserver> _observer;
}

@property(nonatomic) id <SBIconIndexMutableListObserver> observer; // @synthesize observer=_observer;
- (id)indexDescriptionWithPrefix:(id)arg1;
- (unsigned int)countByEnumeratingWithState:(CDStruct_11f37819 *)arg1 objects:(id *)arg2 count:(unsigned int)arg3;
- (void)node:(id)arg1 didRemoveContainedNodeIdentifiers:(id)arg2;
- (void)node:(id)arg1 didAddContainedNodeIdentifiers:(id)arg2;
- (void)removeAllNodes;
- (void)removeNodeAtIndex:(unsigned int)arg1;
- (void)removeNode:(id)arg1;
- (void)replaceNodeAtIndex:(unsigned int)arg1 withNode:(id)arg2;
- (void)addNode:(id)arg1;
- (void)insertNode:(id)arg1 atIndex:(unsigned int)arg2;
- (id)nodeAtIndex:(unsigned int)arg1;
- (BOOL)containsNode:(id)arg1;
- (unsigned int)indexOfNode:(id)arg1;
- (unsigned int)count;
- (id)nodes;
- (id)nodesAlongIndexPath:(id)arg1 consumedIndexes:(unsigned int)arg2;
- (id)indexPathsForContainedNodeIdentifier:(id)arg1 prefixPath:(id)arg2;
- (id)containedNodeIdentifiers;
- (BOOL)containsNodeIdentifier:(id)arg1;
- (void)dealloc;
- (id)init;

@end

