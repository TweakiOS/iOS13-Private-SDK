//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <PassKitUI/PKContentContainerObserver-Protocol.h>
#import <PassKitUI/PKViewWindowObserver-Protocol.h>

#import <PassKitUI/UINavigationControllerDelegate-Protocol.h>
#import <PassKitUI/UIViewControllerTransitioningDelegate-Protocol.h>

@class NSString, PKCompactNavigationContainedNavigationController, PKWrapperViewController, UITapGestureRecognizer, UIView;
@protocol PKCompactNavigationContainerControllerDelegate, UICoordinateSpace;

@interface PKCompactNavigationContainerController : UIViewController <UIViewControllerTransitioningDelegate, UINavigationControllerDelegate, UIGestureRecognizerDelegate, PKContentContainerObserver, PKViewWindowObserver>
{
    _Bool _centeredCard;
    _Bool _hasExplicitlyDefinedSupportedInterfaceOrientations;
    unsigned long long _explicitlyDefinedSupportedInterfaceOrientations;
    _Bool _requiresMasking;
    UIView *_maskingContainerView;
    struct CGRect _maximumModalPresentationFrame;
    PKWrapperViewController *_presentationContextVC;
    CDStruct_47050b7f _topVCInfo;
    struct CGRect _statusBarFrame;
    unsigned short _layoutGroupCounter;
    unsigned short _contentSizeUpdateDeferralCounter;
    _Bool _deferredContentSizeUpdate;
    _Bool _deferredContentSizeUpdateIsAnimated;
    _Bool _deferredContentSizeUpdateIsForced;
    UIViewController *_topVC;
    _Bool _topVCIsExpectedClass;
    _Bool _topVCIsInInitialLayout;
    UIViewController *_pendingTopVC;
    unsigned long long _pendingTopVCIdentifier;
    unsigned long long _updateChildViewControllerSizeCounter;
    UITapGestureRecognizer *_tapGestureRecognizer;
    unsigned char _visibility;
    _Bool _keyboardVisible;
    struct CGRect _keyboardFrame;
    struct CGRect _lastKeyboardFrame;
    _Bool _didMoveToWindowDirtiesLayout;
    _Bool _presentingNavigationController;
    PKCompactNavigationContainedNavigationController *_containedNavigationController;
    unsigned long long _style;
    id <UICoordinateSpace> _exclusionCoordinateSpace;
    id <PKCompactNavigationContainerControllerDelegate> _delegate;
    struct CGRect _exclusionRect;
}

+ (id)dimmingColor;
@property(nonatomic, getter=isPresentingNavigationController) _Bool presentingNavigationController; // @synthesize presentingNavigationController=_presentingNavigationController;
@property(nonatomic) __weak id <PKCompactNavigationContainerControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) id <UICoordinateSpace> exclusionCoordinateSpace; // @synthesize exclusionCoordinateSpace=_exclusionCoordinateSpace;
@property(readonly, nonatomic) struct CGRect exclusionRect; // @synthesize exclusionRect=_exclusionRect;
@property(readonly, nonatomic) unsigned long long style; // @synthesize style=_style;
@property(readonly, nonatomic) PKCompactNavigationContainedNavigationController *containedNavigationController; // @synthesize containedNavigationController=_containedNavigationController;
@property(nonatomic) _Bool didMoveToWindowDirtiesLayout; // @synthesize didMoveToWindowDirtiesLayout=_didMoveToWindowDirtiesLayout;
- (id)childViewControllerForWhitePointAdaptivityStyle;
- (id)childViewControllerForScreenEdgesDeferringSystemGestures;
- (id)childViewControllerForHomeIndicatorAutoHidden;
- (long long)preferredUserInterfaceStyle;
- (id)childViewControllerForStatusBarHidden;
- (id)childViewControllerForStatusBarStyle;
- (void)_updateLayoutForKeyboardAction:(id /* block */)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillChange:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)_updateForKeyboardIfNecessary;
- (void)tapGestureRecognized:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(_Bool)arg3;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(_Bool)arg3;
- (void)_updateStatusBarFrame;
- (void)observedView:(id)arg1 didMoveToWindow:(id)arg2;
- (void)contentContainer:(id)arg1 preferredContentSizeDidChangeForChildContentContainer:(id)arg2;
- (struct CGSize)_navigationControllerSizeForChildViewControllerInfo:(CDStruct_47050b7f)arg1 withCurrentInfo:(CDStruct_47050b7f)arg2;
- (CDStruct_47050b7f)_infoForViewController:(id)arg1;
- (void)_updateTopViewController:(id)arg1 animated:(_Bool)arg2;
- (void)_updateTopViewControllerAsync:(id)arg1 animated:(_Bool)arg2;
- (void)updateChildViewControllerSizeAnimated:(_Bool)arg1 forceUpdate:(_Bool)arg2;
- (void)updateChildViewControllerSizeAnimated:(_Bool)arg1;
- (id)_backgroundColor;
- (void)setExclusionRect:(struct CGRect)arg1 withCoordinateSpace:(id)arg2;
- (void)setSupportedInterfaceOrientations:(unsigned long long)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (struct CGSize)modalPresentationSize;
- (struct CGSize)childViewControllerSizeForNavigationControllerSize:(struct CGSize)arg1;
- (struct CGSize)navigationControllerSizeForChildViewControllerPreferredContentSize:(struct CGSize)arg1 isRoot:(_Bool)arg2;
- (struct CGSize)childViewControllerPreferredContentSizeForSize:(struct CGSize)arg1 isRoot:(_Bool)arg2;
- (void)insertBackgroundLevelView:(id)arg1;
- (void)_endLayoutGroup;
- (void)_beginLayoutGroup;
- (struct CGRect)_targetNavigationControllerFrameForInfo:(CDStruct_47050b7f)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (_Bool)_canShowWhileLocked;
- (void)viewDidLoad;
- (void)loadView;
- (void)dealloc;
- (id)initWithNavigationController:(id)arg1 style:(unsigned long long)arg2;
- (id)initWithNavigationController:(id)arg1;
- (id)init;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

