//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



@class NSString, NSTimer, UIPanGestureRecognizer, UITapGestureRecognizer, UIViewController, _TVNonFocusSwipeUpCapture;
@protocol TVMediaController, TVMediaPlaybackManagerDelegate;

@interface TVMediaPlaybackManager : NSObject <UIGestureRecognizerDelegate>
{
    int _mediaPlaybackState;
    int _mediaPlaybackTrigger;
    unsigned long long _mediaPlaybackStateModifier;
    unsigned long long _mediaPlaybackTriggerModifier;
    NSTimer *_backgroundedTimer;
    _TVNonFocusSwipeUpCapture *_swipeUpCapture;
    struct {
        _Bool hasShouldEnableUIModeImplicitly;
        _Bool hasEvaluateSwipeUpMessage;
        _Bool hasPresentPlaybackController;
    } _delegateFlags;
    _Bool _isFirstAppearance;
    _Bool _goesToForegroundOnFirstAppear;
    UIViewController<TVMediaController> *_mediaController;
    id <TVMediaPlaybackManagerDelegate> _delegate;
    UITapGestureRecognizer *_menuGestureRecognizer;
    double _showcaseFactor;
}

@property(nonatomic) _Bool goesToForegroundOnFirstAppear; // @synthesize goesToForegroundOnFirstAppear=_goesToForegroundOnFirstAppear;
@property(nonatomic) double showcaseFactor; // @synthesize showcaseFactor=_showcaseFactor;
@property(readonly, nonatomic) UITapGestureRecognizer *menuGestureRecognizer; // @synthesize menuGestureRecognizer=_menuGestureRecognizer;
@property(nonatomic) __weak id <TVMediaPlaybackManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) UIViewController<TVMediaController> *mediaController; // @synthesize mediaController=_mediaController;
- (_Bool)_canMenu;
- (_Bool)_canSwipeUp;
- (_Bool)_shouldPause;
- (void)_scheduleBackgroundedTimer;
- (int)_processPausedStateTriggers;
- (int)_processWillBeForegroundedStateTriggers;
- (int)_processWillBeBackgroundedStateTriggers;
- (int)_processWaitingForTimeoutStateTriggers;
- (int)_processForegroundedStateTriggers;
- (int)_processBackgroundedStateTriggers;
- (int)_processUndefinedStateTriggers;
- (void)_processStateExit;
- (void)_processStateEnter;
- (void)_processTrigger;
- (void)_onShowcaseFactorDidChange;
- (void)_onTimeout;
- (void)_onSwipeUp;
- (void)_onMenu;
@property(readonly, nonatomic) long long currentUIMode;
@property(readonly, nonatomic) _Bool shouldHideUI;
- (void)onSupplementaryUIShouldDismiss;
- (_Bool)onSupplementaryUIShouldPresent;
- (void)onMediaControllerStateDidChange;
- (void)onEvent;
- (void)onDisappear;
- (void)onAppear;
@property(readonly, nonatomic) UIPanGestureRecognizer *swipeUpGestureRecognizer;
- (void)dealloc;
- (id)initWithMediaController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

