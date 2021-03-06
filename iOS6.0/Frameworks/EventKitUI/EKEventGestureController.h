/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "UIAlertViewDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class EKCalendarDate, EKDayOccurrenceView, EKEvent, NSTimer, UILongPressGestureRecognizer;

@interface EKEventGestureController : NSObject <UIGestureRecognizerDelegate, UIAlertViewDelegate>
{
    id <EKEventGestureControllerUntimedDelegate> _untimedDelegate;
    id <EKEventGestureControllerDelegate> _delegate;
    UILongPressGestureRecognizer *_recognizer;
    EKDayOccurrenceView *_draggingView;
    EKEvent *_event;
    int _currentDragType;
    struct CGPoint _firstTouchPoint;
    double _firstTouchTime;
    struct CGPoint _latestTouchPoint;
    struct CGPoint _previousTouchPoint;
    double _previousTouchTime;
    float _previousTouchVelocity;
    struct CGPoint _touchOffset;
    int _touchOffsetDays;
    double _dateAtFirstTouchPoint;
    BOOL _isNewEvent;
    BOOL _isInCancelRegion;
    BOOL _isMultiDayTimedEvent;
    EKCalendarDate *_currentDay;
    BOOL _horizontalDragLocked;
    BOOL _dragLockDisabled;
    NSTimer *_scrollTimer;
    double _timeSinceEnteredPageMargin;
    float _firstContactOfDraggingViewTop;
    BOOL _hasStartedScrolling;
    int _consecutivePageTurnCount;
    BOOL _forcedStart;
    BOOL _commitBlocked;
    BOOL _needsCommit;
    id _recurrenceSheetCompletionHandler;
    BOOL _usesXDragOffsetInCancelRegion;
    BOOL _usesHorizontalDragLocking;
}

@property(readonly, nonatomic) struct CGPoint touchOffset; // @synthesize touchOffset=_touchOffset;
@property(readonly, nonatomic) EKDayOccurrenceView *draggingView; // @synthesize draggingView=_draggingView;
@property(readonly, nonatomic) struct CGPoint latestTouchPoint; // @synthesize latestTouchPoint=_latestTouchPoint;
@property(readonly, nonatomic) struct CGPoint firstTouchPoint; // @synthesize firstTouchPoint=_firstTouchPoint;
@property(retain, nonatomic) EKEvent *event; // @synthesize event=_event;
@property(nonatomic) BOOL usesHorizontalDragLocking; // @synthesize usesHorizontalDragLocking=_usesHorizontalDragLocking;
@property(nonatomic) BOOL usesXDragOffsetInCancelRegion; // @synthesize usesXDragOffsetInCancelRegion=_usesXDragOffsetInCancelRegion;
@property(nonatomic) id <EKEventGestureControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) id <EKEventGestureControllerUntimedDelegate> untimedDelegate; // @synthesize untimedDelegate=_untimedDelegate;
- (BOOL)_isPointInCancelRegion:(struct CGPoint)arg1;
- (struct CGPoint)_computeOriginAtTouchPoint:(struct CGPoint)arg1 forDate:(double)arg2 isAllDay:(BOOL)arg3 allowXOffset:(BOOL)arg4 allowFloorAtRegionBottom:(BOOL)arg5;
- (void)_updateHorizontalDragLockForPoint:(struct CGPoint)arg1;
- (float)_capOccurrenceViewYOrigin:(float)arg1;
- (float)_alignedYOriginForAllDayOccurrence:(id)arg1 atPoint:(struct CGPoint)arg2 floorAtAllDayRegionBottom:(BOOL)arg3;
- (BOOL)_flingOrCancelDraggingViewIfNeeded;
- (void)_cancel;
- (void)_commit;
- (void)_update;
- (void)_setUpAfterForcedStartFromPoint:(struct CGPoint)arg1;
- (void)_setTouchOffsetsFromPoint:(struct CGPoint)arg1;
- (void)_setUpAtPoint:(struct CGPoint)arg1;
- (void)_createTemporaryView:(id)arg1;
- (void)_scrollTimerFired:(id)arg1;
- (void)_removeScrollTimer;
- (void)_installScrollTimer;
@property(nonatomic) BOOL commitBlocked;
- (void)_commitUntimed;
- (void)_longPress:(id)arg1;
- (void)endForcedStart;
- (void)forceStartWithOccurrence:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (BOOL)isDraggingOccurrence;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (void)promptUserForRecurrenceActionOnOccurrence:(id)arg1 whenFinished:(id)arg2;
- (void)removeDraggedOccurrence;
- (void)updateDraggingOccurrenceForced:(BOOL)arg1 animated:(BOOL)arg2;
- (void)updateDraggingOccurrence;
- (void)invalidate;
- (void)dealloc;
- (id)initWithView:(id)arg1;

@end

