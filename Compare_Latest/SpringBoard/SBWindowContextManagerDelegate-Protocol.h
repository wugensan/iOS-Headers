/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol SBWindowContextManagerDelegate <NSObject>
- (void)windowContextManager:(id)arg1 didStopTrackingContextsForScreen:(id)arg2;
- (void)windowContextManager:(id)arg1 willStartTrackingContextsForScreen:(id)arg2;
- (BOOL)windowContextManager:(id)arg1 shouldAddContext:(id)arg2;
@end
