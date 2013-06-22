/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString, UIFont;

@interface _UIDateLabelCache : NSObject
{
    double _today;
    double _noon;
    double _tomorrow;
    double _previousWeek;
    UIFont *_timeDesignatorFont;
    NSString *_amString;
    NSString *_pmString;
    struct CGSize _amSize;
    struct CGSize _pmSize;
    struct __CFDictionary *_dateStringCache;
    struct __CFDictionary *_dateStringCacheForForceTimeOnly;
    struct __CFDateFormatter *_timeFormatter;
    struct __CFDateFormatter *_shortDateFormatter;
    struct __CFDateFormatter *_shortTimeFormatter;
    struct __CFCalendar *_calendar;
    struct __CFDictionary *_dateSizeCache;
    struct __CFDictionary *_dateSizeCacheForForceTimeOnly;
    BOOL _designatorValid;
    BOOL _use24HourTime;
    BOOL _timeDesignatorAppearsBeforeTime;
}

- (BOOL)timeDesignatorAppearsBeforeTime;
- (BOOL)use24HourTime;
- (void)setMainTimeSize:(struct CGSize)arg1 forDateKey:(struct __CFDate *)arg2 forceTimeOnly:(BOOL)arg3;
- (struct CGSize)mainTimeSizeForDateKey:(struct __CFDate *)arg1 forceTimeOnly:(BOOL)arg2;
- (id)dateStringForAbsoluteTime:(double)arg1 dateKey:(struct __CFDate *)arg2 forceTimeOnly:(BOOL)arg3;
- (struct CGSize)timeDesignatorSizeForAbsoluteTime:(double)arg1 forceTimeOnly:(BOOL)arg2 forFont:(id)arg3;
- (id)timeDesignatorForAbsoluteTime:(double)arg1 forceTimeOnly:(BOOL)arg2;
- (double)noonAbsoluteTime;
- (double)todayAbsoluteTime;
- (struct __CFDate *)createDateKeyForAbsoluteTime:(double)arg1 forceTimeOnly:(BOOL)arg2;
- (void)_updateTodayAndNoon;
- (struct CGSize)pmSize;
- (struct CGSize)amSize;
- (id)pmString;
- (id)amString;
- (void)_loadDesignatorStrings;
- (void)_localeDidChange;
- (void)_localeWillChange;
- (void)_significantTimeChange;
- (void)invalidateDateCache;
- (void)invalidateDateSizeCache;
- (id)timeDesignatorFont;
- (void)dealloc;
- (id)init;
- (BOOL)_timeDesignatorAppearsBeforeTime;

@end

