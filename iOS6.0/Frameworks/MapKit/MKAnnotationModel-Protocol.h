/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol MKAnnotationModel <NSObject>
- (void)setAnnotationDeselectionCallback:(id)arg1;
- (void)deselectAnnotationRepresentation:(id)arg1 animated:(BOOL)arg2;
- (void)selectAnnotationRepresentation:(id)arg1 animated:(BOOL)arg2 avoid:(struct CGRect)arg3;
- (void)removeAnnotationRepresentation:(id)arg1;
- (void)addAnnotationRepresentation:(id)arg1 allowAnimation:(BOOL)arg2;
@end
