//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBUIMainScreenAnimationController.h>

@class BSAnimationSettings, SBSceneLayoutAnimationWrapperView, UIView;

@interface SBUIStartupFromBlackAnimationController : SBUIMainScreenAnimationController
{
    BSAnimationSettings *_animationSettings;
    BOOL _waitsForAppActivation;
    UIView *_internalContainerView;
    UIView *_blackView;
    SBSceneLayoutAnimationWrapperView *_layoutWrapperView;
}

@property(nonatomic) BOOL waitsForAppActivation; // @synthesize waitsForAppActivation=_waitsForAppActivation;
@property(retain, nonatomic) BSAnimationSettings *animationSettings; // @synthesize animationSettings=_animationSettings;
// - (void).cxx_destruct;
- (void)_showBlackView;
- (void)_cleanupAnimation;
- (void)_startAnimation;
- (void)_prepareAnimation;
- (BOOL)_shouldDismissBanner;
- (BOOL)_waitsForActivatingSceneContentAvailableIfNecessary;
- (void)_setHidden:(BOOL)arg1;
- (id)_getTransitionWindow;
- (id)initWithTransitionContextProvider:(id)arg1;

@end
