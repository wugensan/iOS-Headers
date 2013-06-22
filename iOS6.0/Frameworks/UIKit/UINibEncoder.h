/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSCoder.h"

@class NSMutableData, NSMutableSet;

@interface UINibEncoder : NSCoder
{
    struct __CFDictionary *objectsToObjectIDs;
    struct __CFDictionary *objectIDsToObjects;
    struct __CFArray *values;
    struct __CFSet *encodedObjects;
    NSMutableData *data;
    struct __CFDictionary *replacements;
    unsigned int nextObjectID;
    struct {
        unsigned int currentObjectID;
        unsigned int nextAnonymousKey;
    } recursiveState;
    NSMutableSet *objectsUniquedByValue;
    struct __CFSet *objectsReplacedWithNil;
    id delegate;
}

+ (BOOL)archiveRootObject:(id)arg1 toFile:(id)arg2;
+ (id)archivedDataWithRootObject:(id)arg1;
@property id delegate; // @synthesize delegate;
- (void)encodeValueOfObjCType:(const char *)arg1 at:(const void *)arg2;
- (void)encodeBytes:(const void *)arg1 length:(unsigned int)arg2;
- (void)encodeArrayOfObjCType:(const char *)arg1 count:(unsigned int)arg2 at:(const void *)arg3;
- (void)encodeValuesOfObjCTypes:(const char *)arg1;
- (void)encodeConditionalObject:(id)arg1;
- (void)encodeByrefObject:(id)arg1;
- (void)encodeBycopyObject:(id)arg1;
- (void)encodeRootObject:(id)arg1;
- (void)encodeObject:(id)arg1;
- (id)nextGenericKey;
- (void)encodeUIEdgeInsets:(struct UIEdgeInsets)arg1 forKey:(id)arg2;
- (void)encodeCGAffineTransform:(struct CGAffineTransform)arg1 forKey:(id)arg2;
- (void)encodeCGRect:(struct CGRect)arg1 forKey:(id)arg2;
- (void)encodeCGSize:(struct CGSize)arg1 forKey:(id)arg2;
- (void)encodeCGPoint:(struct CGPoint)arg1 forKey:(id)arg2;
- (void)encodeArrayOfCGFloats:(float *)arg1 count:(int)arg2 forKey:(id)arg3;
- (void)encodeArrayOfFloats:(float *)arg1 count:(int)arg2 forKey:(id)arg3;
- (void)encodeArrayOfDoubles:(double *)arg1 count:(int)arg2 forKey:(id)arg3;
- (void)encodeBytes:(const char *)arg1 length:(unsigned int)arg2 forKey:(id)arg3;
- (void)encodeDouble:(double)arg1 forKey:(id)arg2;
- (void)encodeFloat:(float)arg1 forKey:(id)arg2;
- (void)encodeInteger:(int)arg1 forKey:(id)arg2;
- (void)encodeInt64:(long long)arg1 forKey:(id)arg2;
- (void)encodeInt32:(int)arg1 forKey:(id)arg2;
- (void)encodeInt:(int)arg1 forKey:(id)arg2;
- (void)encodeBool:(BOOL)arg1 forKey:(id)arg2;
- (void)encodeConditionalObject:(id)arg1 forKey:(id)arg2;
- (void)encodeObject:(id)arg1 forKey:(id)arg2;
- (BOOL)allowsKeyedCoding;
- (int)versionForClassName:(id)arg1;
- (unsigned int)systemVersion;
- (void)finishEncoding;
- (void)serializeObject:(id)arg1;
- (void)serializeSet:(id)arg1;
- (void)serializeDictionary:(id)arg1;
- (void)serializeArray:(id)arg1;
- (id)replacementObjectForObject:(id)arg1 forKey:(id)arg2;
- (BOOL)shouldUniqueObjectByValue:(id)arg1;
- (BOOL)object:(id)arg1 encodesAsMemberAndWithCoderOfClass:(Class)arg2;
- (BOOL)object:(id)arg1 encodesWithCoderFromClass:(Class)arg2;
- (id)encodedClassNameForObject:(id)arg1;
- (id)encodedClassNameForClass:(Class)arg1;
- (Class)encodedClassForObject:(id)arg1;
- (void)appendValue:(CDStruct_ee93799b *)arg1;
- (BOOL)previouslyCodedObject:(id)arg1;
- (id)assignObjectIDForObject:(id)arg1;
- (id)objectIDForObject:(id)arg1;
- (void)dealloc;
- (id)initForWritingWithMutableData:(id)arg1;

@end

