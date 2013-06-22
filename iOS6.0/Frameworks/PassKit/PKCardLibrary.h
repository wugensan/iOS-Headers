/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <PassKit/PKPassLibrary.h>

@interface PKCardLibrary : PKPassLibrary
{
}

+ (BOOL)isCardLibraryAvailable;
- (BOOL)replaceCardWithCard:(id)arg1;
- (BOOL)containsCard:(id)arg1;
- (void)removeCard:(id)arg1;
- (id)cardWithCardTypeIdentifier:(id)arg1 serialNumber:(id)arg2;
- (id)cards;

@end

