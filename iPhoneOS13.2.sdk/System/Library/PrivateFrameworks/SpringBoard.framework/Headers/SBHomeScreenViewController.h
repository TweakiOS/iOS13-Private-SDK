//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSMutableSet, SBAppStatusBarSettingsAssertion, SBFloatingDockBehaviorAssertion, SBFloatingDockWindowLevelAssertion, SBHIconManager, SBIconController, SBUIController, UIView, _UILegibilitySettings;
@protocol BSInvalidatable;

@interface SBHomeScreenViewController : UIViewController
{
    NSMutableSet *_iconRotationPreventionReasons;
    _Bool _disableAnimationForNextIconRotation;
    SBFloatingDockBehaviorAssertion *_homeScreenFloatingDockAssertion;
    SBAppStatusBarSettingsAssertion *_childOrPresentedStatusBarAssertion;
    UIView *_contentView;
    id <BSInvalidatable> _appIconForceTouchControllerOrientationUpdateDeferralAssertion;
    SBFloatingDockWindowLevelAssertion *_appIconForceTouchControllerWindowLevelAssertion;
    _Bool _iconControllerHidden;
    _Bool _homeScreenAutorotatesEvenWhenIconIsDragging;
    SBIconController *_iconController;
    SBUIController *_UIController;
    SBFloatingDockBehaviorAssertion *_widgetEditFloatingDockAssertion;
    id <BSInvalidatable> _widgetEditViewControllerOrientationUpdateDeferralAssertion;
}

@property(retain, nonatomic) id <BSInvalidatable> widgetEditViewControllerOrientationUpdateDeferralAssertion; // @synthesize widgetEditViewControllerOrientationUpdateDeferralAssertion=_widgetEditViewControllerOrientationUpdateDeferralAssertion;
@property(retain, nonatomic) SBFloatingDockBehaviorAssertion *widgetEditFloatingDockAssertion; // @synthesize widgetEditFloatingDockAssertion=_widgetEditFloatingDockAssertion;
@property(nonatomic) _Bool homeScreenAutorotatesEvenWhenIconIsDragging; // @synthesize homeScreenAutorotatesEvenWhenIconIsDragging=_homeScreenAutorotatesEvenWhenIconIsDragging;
@property(readonly, nonatomic) __weak SBUIController *UIController; // @synthesize UIController=_UIController;
@property(readonly, nonatomic) __weak SBIconController *iconController; // @synthesize iconController=_iconController;
@property(nonatomic, getter=isIconControllerHidden) _Bool iconControllerHidden; // @synthesize iconControllerHidden=_iconControllerHidden;
- (void)_relinquishForceTouchWindowLevelAssertion;
- (void)_acquireForceTouchWindowLevelAssertionForIconView:(id)arg1;
- (void)_relinquishForceTouchOrientationUpdateDeferralAssertion;
- (void)_acquireForceTouchOrientationUpdateDeferralAssertion;
- (void)_appIconForceTouchControllerDidDismissNotification:(id)arg1;
- (void)_appIconForceTouchControllerWillPresentNotification:(id)arg1;
- (void)_widgetEditViewDidDisappearImplementation;
- (void)_widgetEditViewDidDisappear:(id)arg1;
- (void)_widgetEditViewWillAppear:(id)arg1;
- (void)disableAnimationForNextIconRotation;
- (void)setAllowIconRotation:(_Bool)arg1 forReason:(id)arg2;
- (void)nudgeIconInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)_cleanupAfterTransitionToSize:(struct CGSize)arg1 fromInterfaceOrientation:(long long)arg2 withTransitionContext:(id)arg3;
- (void)_animateTransitionToSize:(struct CGSize)arg1 andInterfaceOrientation:(long long)arg2 withTransitionContext:(id)arg3;
- (void)_prepareForTransitionToSize:(struct CGSize)arg1 andInterfaceOrientation:(long long)arg2 withTransitionCoordinator:(id)arg3;
- (id)_autorotationPreventionReasons;
- (void)setNeedsStatusBarAppearanceUpdate;
@property(readonly, nonatomic) __weak SBHIconManager *iconManager; // @dynamic iconManager;
@property(retain, nonatomic) _UILegibilitySettings *legibilitySettings; // @dynamic legibilitySettings;
- (_Bool)shouldAutomaticallyForwardAppearanceMethods;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (_Bool)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (id)homeScreenView;
- (void)loadView;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithIconController:(id)arg1 UIController:(id)arg2;

@end
