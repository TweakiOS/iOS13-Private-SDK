//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <SpringBoard/PTSettingsKeyObserver-Protocol.h>
#import <SpringBoard/SBHUDViewControlling-Protocol.h>


@class CCUICAPackageDescription, NSArray, NSDate, NSMutableArray, NSMutableOrderedSet, NSString, NSTimer, SBElasticSliderMaterialWrapperView, SBElasticSliderView, SBFTouchPassThroughView, SBUIViewFloatSpringProperty, SBVolumeHUDSettings, UIButton, UILabel, UILongPressGestureRecognizer, UIPanGestureRecognizer, UISegmentedControl, UISlider, UISwitch, UIView, _UIEdgeFeedbackGenerator, _UIFeedback, _UIFeedbackEngine, _UILegibilityLabel;
@protocol SBElasticAudioDataSource, SBElasticAudioVolumeViewControllerDelegate;

@interface SBElasticVolumeViewController : UIViewController <UIGestureRecognizerDelegate, PTSettingsKeyObserver, SBHUDViewControlling>
{
    SBFTouchPassThroughView *_sliderContainerView;
    SBElasticSliderMaterialWrapperView *_sliderWrapperView;
    long long _previousState;
    long long _state;
    SBFTouchPassThroughView *_labelContainerView;
    _UILegibilityLabel *_leadingLabel;
    _UILegibilityLabel *_trailingLabel;
    UIView *_touchTrackingView;
    UIView *_dimmingView;
    double _startingValue;
    UIPanGestureRecognizer *_sliderViewPanGestureRecognizer;
    UILongPressGestureRecognizer *_shortLongPressGestureRecognizer;
    _UIEdgeFeedbackGenerator *_edgeFeedbackGenerator;
    unsigned long long _sliderTrackingCount;
    NSTimer *_dismissalTimer;
    NSTimer *_sliderApplyValueTimer;
    NSMutableOrderedSet *_sliderApplyValueQueue;
    _Bool _initialTransitionCompleted;
    _Bool _lockState;
    _Bool _isDebugging;
    _Bool _isRotating;
    _Bool _isDeflating;
    _Bool _startingDismissal;
    _Bool _reduceMotionEnabled;
    UIView *_debugContainerView;
    UILabel *_debugLabel;
    UISegmentedControl *_debugStateSegmentedControl;
    UILabel *_debugAutoDismissLabel;
    UISwitch *_debugAutoDismissalSwitch;
    UILabel *_debugLockStateLabel;
    UISwitch *_debugLockStateSwitch;
    UISlider *_debugWidthSlider;
    UISlider *_debugHeightSlider;
    UISlider *_debugPortraitYOriginSlider;
    UIButton *_debugDumpButton;
    UIButton *_debugNextAudioRouteButton;
    UIButton *_debugResetAudioRouteButton;
    unsigned long long _debugOverrideAudioRouteCount;
    long long _debugOverrideAudioRouteType;
    NSDate *_volumeUpLastHitDate;
    NSDate *_volumeDownLastHitDate;
    NSMutableArray *_runningListOfVolumesUpdates;
    unsigned long long _tickFeedbackIntervalCycleCounter;
    _UIFeedbackEngine *_tickVolumeFeedbackEngine;
    _UIFeedbackEngine *_edgeVolumeFeedbackEngine;
    _UIFeedback *_tickVolumeFeedback;
    _UIFeedback *_edgeVolumeFeedback;
    NSString *_volumeString;
    NSString *_highVolumeString;
    NSString *_audioRouteString;
    int _anyCallActive;
    unsigned long long _audioRouteCount;
    long long _audioRouteType;
    CCUICAPackageDescription *_audioRoutePackage;
    NSArray *_debugAutolayoutConstraints;
    SBUIViewFloatSpringProperty *_positionXSpring;
    SBUIViewFloatSpringProperty *_positionYSpring;
    SBUIViewFloatSpringProperty *_scaleSpring;
    SBUIViewFloatSpringProperty *_minMaxScaleXSpring;
    SBUIViewFloatSpringProperty *_minMaxScaleYSpring;
    _Bool _volumeUpButtonIsDown;
    _Bool _volumeDownButtonIsDown;
    int _axis;
    id <SBElasticAudioDataSource> _dataSource;
    id <SBElasticAudioVolumeViewControllerDelegate> _delegate;
    SBVolumeHUDSettings *_settings;
    SBElasticSliderView *_sliderView;
}

@property(readonly, nonatomic) SBElasticSliderView *sliderView; // @synthesize sliderView=_sliderView;
@property(readonly, nonatomic) _Bool volumeDownButtonIsDown; // @synthesize volumeDownButtonIsDown=_volumeDownButtonIsDown;
@property(readonly, nonatomic) _Bool volumeUpButtonIsDown; // @synthesize volumeUpButtonIsDown=_volumeUpButtonIsDown;
@property(readonly, nonatomic) SBVolumeHUDSettings *settings; // @synthesize settings=_settings;
@property(nonatomic) __weak id <SBElasticAudioVolumeViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <SBElasticAudioDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (unsigned long long)_updateVolumeLevelSlider:(float)arg1 animated:(_Bool)arg2;
- (void)_modifySpringsFromState:(long long)arg1 toState:(long long)arg2;
- (void)_updateForAxisChange:(int)arg1;
- (void)_updateDebugUIPositions;
- (void)_updateTouchTrackingView;
- (void)_updateSliderViewToCenter:(struct CGPoint)arg1 size:(struct CGSize)arg2 integralized:(_Bool)arg3 continuousCornerRadius:(double *)arg4;
- (void)_updateSliderViewMetricsForState:(long long)arg1 bounds:(struct CGRect)arg2 integralized:(_Bool)arg3 useSizeSpringData:(_Bool)arg4 useCenterSpringData:(_Bool)arg5;
- (void)_updateSliderViewMetricsForState:(long long)arg1 bounds:(struct CGRect)arg2 integralized:(_Bool)arg3 useSpringData:(_Bool)arg4;
- (void)_updateDimmingVisible:(_Bool)arg1;
- (void)_updateLabelsForAxis:(int)arg1 containerViewSize:(struct CGSize)arg2 state:(long long)arg3 animated:(_Bool)arg4;
- (void)_updateGlyphStateIfNecessaryForVolumeLevel:(float *)arg1;
- (_Bool)_computeCachedAudioRouteDisplayInformation;
- (double)cornerRadiusForState:(long long)arg1 useSpringData:(_Bool)arg2;
- (double)glyphScaleForState:(long long)arg1;
- (struct CGPoint)centerForState:(long long)arg1 containerViewSize:(struct CGSize)arg2 bounds:(struct CGRect)arg3 useSpringData:(_Bool)arg4;
- (struct CGSize)sizeForState:(long long)arg1 useSpringData:(_Bool)arg2;
- (struct CGSize)maximumSizeForSlider;
- (void)_debugDimensionSliderValueDidChange:(id)arg1;
- (void)_debugLockStateSwitchValueChanged:(id)arg1;
- (void)_debugAutoDismissalSwitchValueChanged:(id)arg1;
- (void)_debugChangingStateFromSegmentedControl:(id)arg1;
- (void)_debugResetAudioRoute:(id)arg1;
- (void)_debugNextAudioRoute:(id)arg1;
- (void)_debugDump:(id)arg1;
- (void)_updateDebugString:(id)arg1;
- (void)_refreshDebugUI:(_Bool)arg1;
- (void)_reloadData;
- (void)_updateViewsWithSpringData;
- (void)_destroySprings;
- (void)_createSprings;
- (void)_updateSliderTracking;
- (void)_noteSliderViewDidEndTracking;
- (void)_noteSliderViewDidBeginTracking;
@property(readonly, nonatomic) _Bool isSliderTracking;
- (void)_endTrackingWithGestureRecognizer:(id)arg1;
- (void)_continueTrackingWithGestureRecognizer:(id)arg1;
- (void)_beginTrackingWithGestureRecognizer:(id)arg1;
- (void)_handleShortLongPressGestureRecognizer:(id)arg1;
- (void)_handleSliderViewPanGestureRecognizer:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)_resetInputForMajorAxisSpring;
- (void)_forciblyResetMinMaxSprings;
- (void)_clearLastHitDates;
- (void)_setScaleSpringActiveForVolumeButtonUpdateIfNeeded;
- (_Bool)_volumeUpdateIsMinimumOfPotentialVolumeUpdates;
- (void)_stretchVolumeSliderForMinimumVolumeUpdateIfNeeded;
- (_Bool)_volumeUpdateIsMaximumOfPotentialVolumeUpdates;
- (void)_stretchVolumeSliderForMaximumVolumeUpdateIfNeeded;
- (void)_markVolumeUpdateInRunningListOfVolumesUpdates:(double)arg1;
- (void)_actuallyDismiss;
- (void)_dismissalTimerFired:(id)arg1;
- (void)_invalidateDismissalTimerForReason:(id)arg1;
- (void)_scheduleDismissal:(id)arg1;
- (void)_completeDeflatorDismissalSpringAnimation;
- (void)_beginDeflatorDismissalSpringAnimation;
- (_Bool)_isStateChangeAllowedFrom:(long long)arg1 toState:(long long)arg2;
- (void)_animateFromState:(long long)arg1 toState:(long long)arg2 animations:(id /* block */)arg3 completion:(id /* block */)arg4;
- (void)transitionToState:(long long)arg1 animated:(_Bool)arg2 completion:(id /* block */)arg3;
- (void)transitionStateContextuallyForVolumeChangeEvent;
- (long long)hudPresentationOrientation;
@property(readonly, nonatomic) int axis; // @synthesize axis=_axis;
- (void)_playTickHapticForSteppedVolume:(double)arg1;
- (void)_playMinimumVolumeHaptic;
- (void)_playMaximumVolumeHaptic;
- (void)_updateEdgeFeedbackParametersForMaxVolume:(_Bool)arg1;
- (void)_createHapticFeedbackEngines;
- (void)_activeCallStatusStateChanged:(id)arg1;
- (_Bool)_updateAnyCallActive;
- (_Bool)_anyCallActive;
- (_Bool)shouldShowHighVolumeWarningForCurrentVolume;
- (_Bool)_changeVolumeLevel:(double)arg1;
- (void)changeVolumeLevel:(double)arg1 animated:(_Bool)arg2;
- (id)activeAudioCategory;
- (id)activeAudioRouteTypes;
- (float)currentVolume;
- (void)dismissAnimatedWithCompletion:(id /* block */)arg1;
- (_Bool)definesAnimatedDismissal;
- (void)setupFailureRelationshipForGestureRecognizer:(id)arg1;
- (void)reloadData;
- (void)noteVolumeWillDeltaStepToVolume:(double)arg1;
- (void)noteVolumeDownWasHit:(_Bool)arg1;
- (void)noteVolumeUpWasHit:(_Bool)arg1;
- (void)updateVolumeLevel:(float)arg1;
- (void)setVolumeDownButtonIsDown:(_Bool)arg1;
- (void)setVolumeUpButtonIsDown:(_Bool)arg1;
- (void)_reduceMotionStatusDidChange;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (_Bool)_canShowWhileLocked;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)dealloc;
- (void)viewDidLoad;
- (void)loadView;
- (unsigned long long)supportedInterfaceOrientations;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

