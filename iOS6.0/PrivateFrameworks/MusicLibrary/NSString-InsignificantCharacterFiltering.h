/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSString.h"

@interface NSString (InsignificantCharacterFiltering)
- (id)MLSortString;
- (id)copyWithoutInsignificantCharacters;
- (id)copyWithoutInsignificantPrefixAndCharacters;
- (id)_copyWithoutInsignificantPrefix:(BOOL)arg1 andCharacters:(BOOL)arg2;
- (struct _NSRange)_rangeWithoutInsignificantPrefix:(BOOL)arg1 andCharacters:(BOOL)arg2;
@end

