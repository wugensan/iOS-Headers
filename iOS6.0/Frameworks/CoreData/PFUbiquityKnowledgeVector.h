/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSDictionary, NSNumber;

@interface PFUbiquityKnowledgeVector : NSObject <NSCoding, NSCopying>
{
    NSDictionary *_kv;
    NSDictionary *_storeKVDict;
    NSNumber *_sum;
    unsigned int _hash;
}

+ (id)createKnowledgeVectorDictionaryFromString:(id)arg1;
+ (id)createSetOfAllPeerIDsInKnowledgeVectors:(id)arg1;
@property(readonly, nonatomic) unsigned int hash; // @synthesize hash=_hash;
@property(readonly, nonatomic) NSNumber *sum; // @synthesize sum=_sum;
- (id)createStoreKnowledgeVectorDictionary;
- (BOOL)conflictsWithKnowledgeVector:(id)arg1;
- (BOOL)canMergeWithKnowledgeVector:(id)arg1;
- (id)newKnowledgeVectorByDecrementingPeerWithID:(id)arg1;
- (id)createAncestorVectorForConflictingVector:(id)arg1;
- (id)newKnowledgeVectorBySubtractingVector:(id)arg1;
- (id)newKnowledgeVectorByAddingKnowledgeVector:(id)arg1;
- (id)createSetOfAllPeerIDsWithOtherVector:(id)arg1;
- (id)allPeerIDs;
- (id)transactionNumberForPeerID:(id)arg1;
- (id)createKnowledgeVectorString;
- (void)updateWithKnowledgeVector:(id)arg1;
- (BOOL)isZeroVector;
- (BOOL)isAncestorOfKnowledgeVector:(id)arg1;
- (BOOL)isDescendantOfKnowledgeVector:(id)arg1;
- (void)_updateHash;
- (void)_updateSum;
@property(readonly, nonatomic) unsigned int length;
- (BOOL)isEqual:(id)arg1;
- (int)compare:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initFromCopy:(id)arg1 storeKVDict:(id)arg2 sum:(id)arg3 hash:(unsigned int)arg4;
- (id)initWithPeerStatesFromStoreMetadata:(id)arg1;
- (id)initWithStoreKnowledgeVectorDictionary:(id)arg1;
- (id)initWithKnowledgeVectorDictionary:(id)arg1;
- (id)initWithKnowledgeVectorString:(id)arg1;
- (id)init;

@end

