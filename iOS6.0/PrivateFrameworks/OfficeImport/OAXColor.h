/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface OAXColor : NSObject
{
}

+ (id)readSystemColorFromAttribute:(id)arg1;
+ (id)readPresetColorFromAttribute:(id)arg1;
+ (id)readColorFromNode:(struct _xmlNode *)arg1;
+ (id)readColorFromParentXmlNode:(struct _xmlNode *)arg1;
+ (id)schemeColorEnumMap;
+ (id)systemColorEnumMap;
+ (id)presetColorEnumMap;
+ (id)readSchemeColorFromXmlNode:(struct _xmlNode *)arg1;
+ (id)readSystemColorFromXmlNode:(struct _xmlNode *)arg1;
+ (id)readPresetColorFromXmlNode:(struct _xmlNode *)arg1;
+ (id)readHslColorFromXmlNode:(struct _xmlNode *)arg1;
+ (id)readSRgbColorFromXmlNode:(struct _xmlNode *)arg1 attribute:(const char *)arg2;
+ (id)readScRgbColorFromXmlNode:(struct _xmlNode *)arg1;

@end

