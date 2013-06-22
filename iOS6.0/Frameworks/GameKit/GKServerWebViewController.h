/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <GameKit/GKViewController.h>

#import "UIAlertViewDelegate-Protocol.h"
#import "UIWebViewDelegate-Protocol.h"

@class GKBackgroundView, NSData, NSString, NSURLRequest, UIActivityIndicatorView, UIAlertView, UIWebView;

@interface GKServerWebViewController : GKViewController <UIWebViewDelegate, UIAlertViewDelegate>
{
    GKBackgroundView *_backgroundView;
    UIWebView *_webView;
    NSString *_okCallback;
    NSString *_cancelCallback;
    NSString *_leftCallback;
    NSString *_rightCallback;
    BOOL _addedSheetFrame;
    NSString *_playerID;
    NSString *_authToken;
    NSURLRequest *_previousRequest;
    int _status;
    NSData *_pushToken;
    id _completionHandler;
    struct UIEdgeInsets _backgroundInsets;
    UIAlertView *_alert;
    BOOL _dismissOnAuthenticate;
    UIActivityIndicatorView *_rightNavSpinner;
    NSString *_rightButtonTitle;
    int _alertTag;
}

@property(nonatomic) int alertTag; // @synthesize alertTag=_alertTag;
@property(retain, nonatomic) NSString *rightButtonTitle; // @synthesize rightButtonTitle=_rightButtonTitle;
@property(retain, nonatomic) UIActivityIndicatorView *rightNavSpinner; // @synthesize rightNavSpinner=_rightNavSpinner;
@property(copy, nonatomic) id completionHandler; // @synthesize completionHandler=_completionHandler;
@property(nonatomic) BOOL dismissOnAuthenticate; // @synthesize dismissOnAuthenticate=_dismissOnAuthenticate;
@property(retain, nonatomic) UIAlertView *alert; // @synthesize alert=_alert;
@property(nonatomic) BOOL addedSheetFrame; // @synthesize addedSheetFrame=_addedSheetFrame;
@property(retain, nonatomic) NSData *pushToken; // @synthesize pushToken=_pushToken;
@property(nonatomic) int status; // @synthesize status=_status;
@property(retain, nonatomic) NSURLRequest *previousRequest; // @synthesize previousRequest=_previousRequest;
@property(retain, nonatomic) NSString *authToken; // @synthesize authToken=_authToken;
@property(retain, nonatomic) NSString *playerID; // @synthesize playerID=_playerID;
@property(nonatomic) struct UIEdgeInsets backgroundInsets; // @synthesize backgroundInsets=_backgroundInsets;
@property(retain, nonatomic) NSString *rightCallback; // @synthesize rightCallback=_rightCallback;
@property(retain, nonatomic) NSString *leftCallback; // @synthesize leftCallback=_leftCallback;
@property(retain, nonatomic) NSString *cancelCallback; // @synthesize cancelCallback=_cancelCallback;
@property(retain, nonatomic) NSString *okCallback; // @synthesize okCallback=_okCallback;
@property(retain, nonatomic) UIWebView *webView; // @synthesize webView=_webView;
@property(retain, nonatomic) GKBackgroundView *backgroundView; // @synthesize backgroundView=_backgroundView;
- (void)uploadContacts;
- (void)cancelAlertWithoutDelegateCallback;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (void)parseAlertURLString:(id)arg1;
- (void)showMessageForError:(id)arg1;
- (void)processSpinnerURLComponents:(id)arg1;
- (void)rightNavButtonPressed;
- (void)leftNavButtonPressed;
- (void)parseNavBarURLString:(id)arg1;
- (void)processGameKitURLComponents:(id)arg1;
- (id)decodeDashEncodedString:(id)arg1;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1;
- (BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(int)arg3;
- (void)webView:(id)arg1 processNativeCommand:(id)arg2;
- (void)startCommandProcessingForWebView:(id)arg1;
- (void)authenticateAndTryURLRequestAgain:(id)arg1;
- (void)setHeadersForRequest:(id)arg1;
- (void)finish;
- (void)loadURL:(id)arg1;
- (void)updateNavBarForLoading:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)loadView;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

