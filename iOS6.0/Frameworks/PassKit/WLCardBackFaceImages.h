/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "WLCardImages.h"

@class WLImage;

@interface WLCardBackFaceImages : WLCardImages
{
    WLImage *_faceImage;
}

+ (int)imageSet;
+ (int)currentVersion;
+ (id)archiveName;
@property(retain, nonatomic) WLImage *faceImage; // @synthesize faceImage=_faceImage;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)preheatImages;
- (void)dealloc;
- (id)initWithCardURL:(id)arg1 displayProfile:(id)arg2;

@end

