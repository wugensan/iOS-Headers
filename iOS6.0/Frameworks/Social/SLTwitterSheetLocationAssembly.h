/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSDictionary, UIButton, UIImageView, UIView;

@interface SLTwitterSheetLocationAssembly : NSObject
{
    int _geotagStatus;
    UIView *_assemblyView;
    UIButton *_locationButton;
    UIImageView *_locationImageView;
    UIButton *_locationLabel;
    UIButton *_cancelLocationButton;
    NSDictionary *_locationInfo;
    id _locationAssemblyDelegate;
    BOOL _usingLocationOverride;
}

@property(nonatomic) BOOL usingLocationOverride; // @synthesize usingLocationOverride=_usingLocationOverride;
@property(nonatomic) __weak id locationAssemblyDelegate; // @synthesize locationAssemblyDelegate=_locationAssemblyDelegate;
@property(retain, nonatomic) NSDictionary *locationInfo; // @synthesize locationInfo=_locationInfo;
@property(readonly, nonatomic) UIView *assemblyView; // @synthesize assemblyView=_assemblyView;
@property(nonatomic) int geotagStatus; // @synthesize geotagStatus=_geotagStatus;
- (void).cxx_destruct;
@property(readonly, nonatomic) struct CGSize locationImageSize;
- (void)cancelLocationButtonTapped:(id)arg1;
- (void)locationButtonTapped:(id)arg1;
- (void)updateAssembly;
- (void)setLocationLabelText:(id)arg1;
- (void)updateLocationImage;
- (id)init;

@end

