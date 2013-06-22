/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSString.h"

@interface NSString (CalendarExtensions)
+ (id)stringWithFileSystemRepresentation:(const char *)arg1;
- (id)appendSlashIfNeeded;
- (id)removeSlashIfNeeded;
- (id)safeFilename;
- (id)searchAndReplaceString:(id)arg1 withString:(id)arg2;
- (id)unquote;
- (id)trimChar:(unsigned short)arg1;
- (id)trimFirstChar:(unsigned short)arg1;
- (id)trimFinalChar:(unsigned short)arg1;
- (id)trimCommas;
- (id)trimFirstComma;
- (id)trimFinalComma;
- (id)trimWhiteSpace;
- (id)quote;
@end

