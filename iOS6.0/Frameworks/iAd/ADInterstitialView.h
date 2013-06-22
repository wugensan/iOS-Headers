/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIView.h"

#import "ADAdRecipient-Protocol.h"

@class ADAdRecipientRecord, ADInterstitialAd<ADInterstitialViewDelegate>, ADRemoteView, ADTapGestureRecognizer, NSString, UIViewController<ADInterstitialViewDelegate>;

@interface ADInterstitialView : UIView <ADAdRecipient>
{
    ADAdRecipientRecord *_recipientRecord;
    ADInterstitialAd<ADInterstitialViewDelegate> *_interstitialAd;
    UIViewController<ADInterstitialViewDelegate> *_modalViewController;
    BOOL _loaded;
    BOOL _actionInProgress;
    ADRemoteView *_remoteView;
    UIView *_dimmerView;
    ADTapGestureRecognizer *_gestureRecognizer;
    NSString *_advertisingSection;
    int _previousOrientation;
    BOOL _touchesBeganOnCloseBox;
    BOOL _actionWasCancelled;
    BOOL _interstitialWasDismissedByUser;
    BOOL _hasLoaded;
    BOOL _presentedInView;
    NSString *_authenticationUserName;
    NSString *_identifier;
    NSString *_section;
    BOOL _dimmed;
}

+ (void)setSkipLoadedExceptionCheck:(BOOL)arg1;
@property(nonatomic) BOOL dimmed; // @synthesize dimmed=_dimmed;
@property(copy, nonatomic) NSString *section; // @synthesize section=_section;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) NSString *authenticationUserName; // @synthesize authenticationUserName=_authenticationUserName;
@property(nonatomic) BOOL presentedInView; // @synthesize presentedInView=_presentedInView;
@property BOOL hasLoaded; // @synthesize hasLoaded=_hasLoaded;
@property BOOL interstitialWasDismissedByUser; // @synthesize interstitialWasDismissedByUser=_interstitialWasDismissedByUser;
@property BOOL actionWasCancelled; // @synthesize actionWasCancelled=_actionWasCancelled;
@property BOOL touchesBeganOnCloseBox; // @synthesize touchesBeganOnCloseBox=_touchesBeganOnCloseBox;
@property(nonatomic) int previousOrientation; // @synthesize previousOrientation=_previousOrientation;
@property(copy, nonatomic) NSString *advertisingSection; // @synthesize advertisingSection=_advertisingSection;
@property(retain, nonatomic) ADTapGestureRecognizer *gestureRecognizer; // @synthesize gestureRecognizer=_gestureRecognizer;
@property(retain, nonatomic) UIView *dimmerView; // @synthesize dimmerView=_dimmerView;
@property(retain, nonatomic) ADRemoteView *remoteView; // @synthesize remoteView=_remoteView;
@property(readonly, nonatomic, getter=isActionInProgress) BOOL actionInProgress; // @synthesize actionInProgress=_actionInProgress;
@property(nonatomic, getter=isLoaded) BOOL loaded; // @synthesize loaded=_loaded;
@property(nonatomic) UIViewController<ADInterstitialViewDelegate> *modalViewController; // @synthesize modalViewController=_modalViewController;
@property(nonatomic) ADInterstitialAd<ADInterstitialViewDelegate> *interstitialAd; // @synthesize interstitialAd=_interstitialAd;
- (void)serverInterstitialViewExpiredAndWasUnloaded;
- (void)serverStoryboardDidTransitionOut;
- (void)serverBannerViewDidFailToReceiveAdWithError:(id)arg1;
- (void)serverBannerViewDidLoad;
- (void)serverBannerViewWillLoad;
- (void)bannerControllerRevoked;
- (void)bannerControllerGranted;
- (int)internalAdType;
- (void)_gestureHandler:(id)arg1;
- (void)_sanitizeAndForwardErrorToDelegate:(id)arg1;
- (void)_orientationChanged;
- (void)didMoveToWindow;
- (void)removeFromSuperview;
- (void)setCenter:(struct CGPoint)arg1;
- (void)setAlpha:(float)arg1;
- (void)setHidden:(BOOL)arg1;
- (void)setTransform:(struct CGAffineTransform)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)_setLoaded:(BOOL)arg1;
- (void)_actionDidfinish;
- (BOOL)_actionShouldBegin;
- (void)_didFailToReceiveAdWithError:(id)arg1;
- (void)_didUnloadAd;
- (void)_didLoadAd;
- (void)_willLoadAd;
- (void)setActionInProgress:(BOOL)arg1;
- (void)cancelAction;
- (void)insertSubview:(id)arg1 above:(id)arg2;
- (void)insertSubview:(id)arg1 below:(id)arg2;
- (void)insertSubview:(id)arg1 aboveSubview:(id)arg2;
- (void)insertSubview:(id)arg1 belowSubview:(id)arg2;
- (void)addSubview:(id)arg1;
- (void)exchangeSubviewAtIndex:(int)arg1 withSubviewAtIndex:(int)arg2;
- (void)insertSubview:(id)arg1 atIndex:(int)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

