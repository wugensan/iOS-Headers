/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#pragma mark Named Structures

struct CPRecordStore;

struct CalDatabase {
    struct __CFRuntimeBase {
        unsigned int _field1;
        unsigned char _field2[4];
    } _field1;
    int _field2;
    struct CPRecordStore *_field3;
    struct CalEventOccurrenceCache *_field4;
    struct __CFDictionary *_field5;
    struct __CFDictionary *_field6;
    struct _opaque_pthread_mutex_t _field7;
    _Bool _field8;
    unsigned int _field9;
    unsigned int _field10;
    struct __CFArray *_field11;
    struct __CFString *_field12;
    int _field13;
    int _field14;
    struct __CFString *_field15;
    int _field16;
    id _field17;
    void _field18;
    struct _opaque_pthread_mutex_t _field19;
};

struct CalEventIdsSearchContext {
    struct __CFArray *_field1;
    struct __CFSet *_field2;
    struct __CFSet *_field3;
    _Bool *_field4;
    _Bool *_field5;
    struct CalDatabase *_field6;
};

struct CalEventOccurrenceCache;

struct CalEventOccurrenceSearchContext {
    struct __CFSet *_field1;
    struct __CFArray *_field2;
    struct __CFArray *_field3;
    struct __CFArray *_field4;
    _Bool *_field5;
    _Bool *_field6;
    double _field7;
    double _field8;
    int _field9;
    double _field10;
    unsigned int _field11;
    struct CalEventOccurrenceCache *_field12;
    void *_field13;
    void *_field14;
    int _field15;
    _Bool _field16;
    struct __CFString *_field17;
    double _field18;
    _Bool _field19;
    double _field20;
};

struct CalEventSpotlightContext {
    _Bool _field1;
    _Bool _field2;
    struct __CFSet *_field3;
    struct __CFSet *_field4;
    struct __CFSet *_field5;
    struct __CFArray *_field6;
    _Bool *_field7;
    _Bool *_field8;
    struct CalDatabase *_field9;
    void *_field10;
    void *_field11;
    int _field12;
    int _field13;
    int _field14;
    struct __CFDictionary *_field15;
    double _field16;
    double _field17;
    double _field18;
    struct CalSpotlightMatchedEventContext _field19;
};

struct CalLocationIdsSearchContext {
    struct __CFArray *_field1;
    unsigned int _field2;
    _Bool *_field3;
    _Bool *_field4;
    struct CalDatabase *_field5;
};

struct CalParticipantIdsSearchContext {
    struct __CFArray *_field1;
    unsigned int _field2;
    _Bool *_field3;
    _Bool *_field4;
    struct CalDatabase *_field5;
};

struct CalSpotlightMatchedEventContext {
    int _field1;
    char *_field2;
    char *_field3;
    char *_field4;
    double _field5;
    double _field6;
    int _field7;
    int _field8;
    char *_field9;
    char *_field10;
    char *_field11;
    int _field12;
    struct __CFArray *_field13;
    int _field14;
};

struct __CFArray;

struct __CFDictionary;

struct __CFSet;

struct __CFString;

struct _opaque_pthread_mutex_t {
    long __sig;
    char __opaque[40];
};

#pragma mark Typedef'd Structures

typedef struct {
    unsigned int maxAlarmsAllowed:1;
    unsigned int maxRecurrencesAllowed:1;
    unsigned int supportsAlarmTriggerIntervals:1;
    unsigned int supportsAlarmTriggerDates:1;
    unsigned int supportsAlarmsTriggeringAfterStartDate:1;
    unsigned int organizerCanSeeAttendeeStatuses:1;
    unsigned int inviteesCanSeeAttendeeStatuses:1;
    unsigned int statusesAreAccurate:1;
    unsigned int supportsIncomingInvitations:1;
    unsigned int supportsOutgoingInvitations:1;
    unsigned int requiresOutgoingInvitationsInDefaultCalendar:1;
    unsigned int supportsInvitationModifications:1;
    unsigned int supportsResponseComments:1;
    unsigned int deliverySourceOrExternalIDRequiredForResponse:1;
    unsigned int proposedStatusRequiredForResponse:1;
    unsigned int declinedStatusChangeRequiresNoPendingStatus:1;
    unsigned int eventDurationConstrainedToRecurrenceInterval:1;
    unsigned int alarmTriggerIntervalConstrainedToRecurrenceInterval:1;
    unsigned int occurrencesMustOccurOnSeparateDays:1;
    unsigned int futureStartDateLimitedToOccurrenceCacheBounds:1;
    unsigned int supportsRecurrencesOnDetachedEvents:1;
    unsigned int recurrencesShouldPinToMonthDays:1;
    unsigned int requiresAttendeeSearchInSingleAccount:1;
    unsigned int mustAcknowledgeMasterEvent:1;
    unsigned int canSetAvailability:1;
    unsigned int eventAvalabilityLimited:1;
    unsigned int requiresMSFormattedUID:1;
    unsigned int shouldCancelDeletedEvents:1;
    unsigned int shouldDeclineDeletedInvitations:1;
    unsigned int supportsStructuredLocations:1;
    unsigned int supportsReminderActions:1;
    unsigned int supportsReminderLocations:1;
    unsigned int supportsAlarmProximity:1;
    unsigned int allowsCalendarAddDeleteModify:1;
    unsigned int allowsTasks:1;
    unsigned int allowsEvents:1;
    unsigned int supportsURLField:1;
    unsigned int supportsAllDayDueDates:1;
    unsigned int supportsSharedCalendars:1;
    unsigned int isFacebook:1;
    unsigned int recurrenceSeriesMustIncludeMoreThanFirstOccurrence:1;
} CDStruct_d63385cc;

typedef struct {
    int year;
    char month;
    char day;
    char hour;
    char minute;
    double second;
} CDStruct_b0fa4487;

typedef struct {
    int years;
    int months;
    int days;
    int hours;
    int minutes;
    double seconds;
} CDStruct_6e43267c;

typedef struct {
    int _field1;
    int _field2;
} CDStruct_1ef3fb1f;

typedef struct {
    unsigned short _field1[64];
    struct __CFString *_field2;
    unsigned short *_field3;
    CDStruct_1ef3fb1f _field4;
    int _field5;
    int _field6;
} CDStruct_df6741a8;

typedef struct {
    CDStruct_1ef3fb1f _field1;
    double _field2;
} CDStruct_0a11227f;

