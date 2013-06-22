/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

@interface CIVibrance : CIFilter
{
    CIImage *inputImage;
    NSNumber *inputAmount;
}

+ (id)customAttributes;
@property(copy, nonatomic) NSNumber *inputAmount; // @synthesize inputAmount;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;
- (BOOL)_isIdentity;
- (void)setDefaults;
- (id)_kernelPos;
- (id)_kernelNeg;
- (id)_initFromProperties:(id)arg1;
- (id)_outputProperties;

@end

