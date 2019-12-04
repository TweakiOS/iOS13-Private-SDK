//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpringBoard/SBHardwareButtonGestureParametersProviderBase.h>

#import <SpringBoard/SBHardwareButtonGestureParametersObserver-Protocol.h>
#import <SpringBoard/SBPressPrecedenceArbiter-Protocol.h>


@class BSMonotonicReferenceTime, NSString, SBClickGestureRecognizer, SBHardwareButtonGestureParameters, SBHomeHardwareButton, SBLockHardwareButtonActions, SBLongPressGestureRecognizer, SBPressGestureRecognizer, SBVolumeHardwareButton, UIGestureRecognizer;

@interface SBLockHardwareButton : SBHardwareButtonGestureParametersProviderBase <UIGestureRecognizerDelegate, SBHardwareButtonGestureParametersObserver, SBPressPrecedenceArbiter>
{
    unsigned long long _aggdStartTime;
    BSMonotonicReferenceTime *_lastPressDownReferenceTime;
    SBLockHardwareButtonActions *_buttonActions;
    SBHardwareButtonGestureParameters *_buttonGestureParameters;
    SBPressGestureRecognizer *_buttonDownGestureRecognizer;
    SBClickGestureRecognizer *_singlePressGestureRecognizer;
    SBLongPressGestureRecognizer *_longPressGestureRecognizer;
    SBClickGestureRecognizer *_doublePressGestureRecognizer;
    SBClickGestureRecognizer *_triplePressGestureRecognizer;
    SBClickGestureRecognizer *_quadruplePressGestureRecognizer;
    UIGestureRecognizer *_screenshotGestureRecognizer;
    SBLongPressGestureRecognizer *_shutdownGestureRecognizer;
    SBHomeHardwareButton *_homeHardwareButton;
    SBVolumeHardwareButton *_volumeHardwareButton;
    long long _homeButtonType;
    unsigned long long _configuredMaximumPressCount;
    unsigned long long _currentPressCount;
}

@property(nonatomic) unsigned long long currentPressCount; // @synthesize currentPressCount=_currentPressCount;
@property(nonatomic) unsigned long long configuredMaximumPressCount; // @synthesize configuredMaximumPressCount=_configuredMaximumPressCount;
@property(nonatomic) long long homeButtonType; // @synthesize homeButtonType=_homeButtonType;
@property(nonatomic) __weak SBVolumeHardwareButton *volumeHardwareButton; // @synthesize volumeHardwareButton=_volumeHardwareButton;
@property(nonatomic) __weak SBHomeHardwareButton *homeHardwareButton; // @synthesize homeHardwareButton=_homeHardwareButton;
@property(nonatomic) __weak SBLongPressGestureRecognizer *shutdownGestureRecognizer; // @synthesize shutdownGestureRecognizer=_shutdownGestureRecognizer;
@property(nonatomic) __weak UIGestureRecognizer *screenshotGestureRecognizer; // @synthesize screenshotGestureRecognizer=_screenshotGestureRecognizer;
@property(retain, nonatomic) SBClickGestureRecognizer *quadruplePressGestureRecognizer; // @synthesize quadruplePressGestureRecognizer=_quadruplePressGestureRecognizer;
@property(retain, nonatomic) SBClickGestureRecognizer *triplePressGestureRecognizer; // @synthesize triplePressGestureRecognizer=_triplePressGestureRecognizer;
@property(retain, nonatomic) SBClickGestureRecognizer *doublePressGestureRecognizer; // @synthesize doublePressGestureRecognizer=_doublePressGestureRecognizer;
@property(retain, nonatomic) SBLongPressGestureRecognizer *longPressGestureRecognizer; // @synthesize longPressGestureRecognizer=_longPressGestureRecognizer;
@property(retain, nonatomic) SBClickGestureRecognizer *singlePressGestureRecognizer; // @synthesize singlePressGestureRecognizer=_singlePressGestureRecognizer;
@property(retain, nonatomic) SBPressGestureRecognizer *buttonDownGestureRecognizer; // @synthesize buttonDownGestureRecognizer=_buttonDownGestureRecognizer;
@property(retain, nonatomic) SBHardwareButtonGestureParameters *buttonGestureParameters; // @synthesize buttonGestureParameters=_buttonGestureParameters;
@property(retain, nonatomic) SBLockHardwareButtonActions *buttonActions; // @synthesize buttonActions=_buttonActions;
- (id)hardwareButtonGestureParameters;
- (void)provider:(id)arg1 didUpdateButtonGestureParameters:(id)arg2;
- (void)_reportAggdLoggingForButtonEventIsDownEvent:(_Bool)arg1;
- (void)cancelLongPress;
- (void)quadruplePress:(id)arg1;
- (void)triplePress:(id)arg1;
- (void)doublePress:(id)arg1;
- (void)longPress:(id)arg1;
- (void)singlePress:(id)arg1;
- (void)buttonDown:(id)arg1;
- (void)_updatePressCountForDownEvent;
- (id)preemptablePressGestureRecognizers;
- (void)_gestureRecognizerFailed:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)SOSTriggerMechanismDidChange;
- (void)forceResetSequenceDidBegin;
- (_Bool)reverseFadeOutIfNeeded;
@property(readonly, nonatomic) _Bool isButtonDown;
- (void)_reconfigureButtonGestureRecognizers;
- (void)screenshotRecognizerDidRecognize:(id)arg1;
- (void)_createGestureRecognizers;
- (id)initWithScreenshotGestureRecognizer:(id)arg1 shutdownGestureRecognizer:(id)arg2 proximitySensorManager:(id)arg3 homeHardwareButton:(id)arg4 volumeHardwareButton:(id)arg5 buttonActions:(id)arg6 homeButtonType:(long long)arg7 createGestures:(_Bool)arg8;
- (id)initWithScreenshotGestureRecognizer:(id)arg1 shutdownGestureRecognizer:(id)arg2 proximitySensorManager:(id)arg3 homeHardwareButton:(id)arg4 volumeHardwareButton:(id)arg5 homeButtonType:(long long)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

