/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface GQDImageBinary : NSObject
{
    struct CGSize mSize;
    struct __CFString *mPath;
    struct __CFURL *mAbsoluteUrl;
    int mResourceType;
}

- (id).cxx_construct;
- (struct __CFString *)relativePath;
- (int)resourceType;
- (struct __CFURL *)absoluteUrlForState:(id)arg1;
- (struct CGSize)size;
- (void)dealloc;
- (int)readDataAttributesFromReader:(struct _xmlTextReader *)arg1;

@end

