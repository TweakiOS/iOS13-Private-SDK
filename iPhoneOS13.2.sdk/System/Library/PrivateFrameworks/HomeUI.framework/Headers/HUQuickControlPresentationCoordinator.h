//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeUI/HUCardViewControllerDelegate-Protocol.h>
#import <HomeUI/HUPresentationDelegate-Protocol.h>
#import <HomeUI/HUQuickControlContainerViewControllerDelegate-Protocol.h>

#import <HomeUI/UINavigationControllerDelegate-Protocol.h>
#import <HomeUI/UIPresentationControllerDelegatePrivate-Protocol.h>
#import <HomeUI/UITraitEnvironment-Protocol.h>
#import <HomeUI/UIViewControllerTransitioningDelegate-Protocol.h>
#import <HomeUI/_UIClickPresentationInteractionDelegate-Protocol.h>
#import <HomeUI/_UISheetPresentationControllerDelegate-Protocol.h>

@class HUCardViewController, HUForceInterpolatedPressGestureRecognizer, HUGridActionSetTitleAndDescriptionView, HUGridServiceCell, HUGridServiceCellTextView, HUIconView, HUItemTableViewController, HUPressedItemContext, HUQuickControlContainerViewController, HUQuickControlNavigationController, HUQuickControlPresentationContext, NSMapTable, NSMutableSet, NSString, UIImpactFeedbackGenerator, UILabel, UITapGestureRecognizer, UITraitCollection, UIView, UIViewController, UIVisualEffectView, _UIClickPresentationInteraction;
@protocol HUQuickControlPresentationCoordinatorDelegate, NACancelable;

@interface HUQuickControlPresentationCoordinator : NSObject <HUQuickControlContainerViewControllerDelegate, HUPresentationDelegate, UIGestureRecognizerDelegate, HUCardViewControllerDelegate, UIPresentationControllerDelegatePrivate, _UIClickPresentationInteractionDelegate, UIViewControllerTransitioningDelegate, _UISheetPresentationControllerDelegate, UINavigationControllerDelegate, UITraitEnvironment>
{
    HUCardViewController *_cardViewController;
    HUQuickControlPresentationContext *_presentationContext;
    HUQuickControlContainerViewController *_quickControlViewController;
    HUGridServiceCell *_pressedTile;
    UIView *_targetView;
    id <HUQuickControlPresentationCoordinatorDelegate> _delegate;
    HUQuickControlNavigationController *_cardNavigationController;
    HUItemTableViewController *_settingsViewController;
    UITapGestureRecognizer *_singleTapGestureRecognizer;
    UITapGestureRecognizer *_doubleTapGestureRecognizer;
    HUForceInterpolatedPressGestureRecognizer *_pressGestureRecognizer;
    NSMutableSet *_mutuallyExclusiveGestureRecognizers;
    id <NACancelable> _pressGestureActiveTimerCancellationToken;
    NSMapTable *_pressedItemContexts;
    _UIClickPresentationInteraction *_presentationInteraction;
    UIVisualEffectView *_pressedTileBlurEffectView;
    UIView *_pressedTilePrerenderedView;
    HUIconView *_transitionIconView;
    HUIconView *_transitionIconViewVibrant;
    UILabel *_transitionPrimaryLabel;
    HUGridServiceCellTextView *_transitionTextView;
    HUGridServiceCellTextView *_transitionTextViewVibrant;
    UIVisualEffectView *_transitionTextViewVibrantEffectView;
    HUGridActionSetTitleAndDescriptionView *_transitionTitleAndDescriptionView;
    UIVisualEffectView *_transitionTitleAndDescriptionVibrantEffectView;
    UILabel *_transitionSecondaryLabel;
    UIVisualEffectView *_transitionSecondaryLabelVibrantEffectView;
    UIVisualEffectView *_transitionBlurView;
    UIImpactFeedbackGenerator *_feedbackGenerator;
}

@property(retain, nonatomic) UIImpactFeedbackGenerator *feedbackGenerator; // @synthesize feedbackGenerator=_feedbackGenerator;
@property(retain, nonatomic) UIVisualEffectView *transitionBlurView; // @synthesize transitionBlurView=_transitionBlurView;
@property(retain, nonatomic) UIVisualEffectView *transitionSecondaryLabelVibrantEffectView; // @synthesize transitionSecondaryLabelVibrantEffectView=_transitionSecondaryLabelVibrantEffectView;
@property(retain, nonatomic) UILabel *transitionSecondaryLabel; // @synthesize transitionSecondaryLabel=_transitionSecondaryLabel;
@property(retain, nonatomic) UIVisualEffectView *transitionTitleAndDescriptionVibrantEffectView; // @synthesize transitionTitleAndDescriptionVibrantEffectView=_transitionTitleAndDescriptionVibrantEffectView;
@property(retain, nonatomic) HUGridActionSetTitleAndDescriptionView *transitionTitleAndDescriptionView; // @synthesize transitionTitleAndDescriptionView=_transitionTitleAndDescriptionView;
@property(retain, nonatomic) UIVisualEffectView *transitionTextViewVibrantEffectView; // @synthesize transitionTextViewVibrantEffectView=_transitionTextViewVibrantEffectView;
@property(retain, nonatomic) HUGridServiceCellTextView *transitionTextViewVibrant; // @synthesize transitionTextViewVibrant=_transitionTextViewVibrant;
@property(retain, nonatomic) HUGridServiceCellTextView *transitionTextView; // @synthesize transitionTextView=_transitionTextView;
@property(retain, nonatomic) UILabel *transitionPrimaryLabel; // @synthesize transitionPrimaryLabel=_transitionPrimaryLabel;
@property(retain, nonatomic) HUIconView *transitionIconViewVibrant; // @synthesize transitionIconViewVibrant=_transitionIconViewVibrant;
@property(retain, nonatomic) HUIconView *transitionIconView; // @synthesize transitionIconView=_transitionIconView;
@property(retain, nonatomic) UIView *pressedTilePrerenderedView; // @synthesize pressedTilePrerenderedView=_pressedTilePrerenderedView;
@property(retain, nonatomic) UIVisualEffectView *pressedTileBlurEffectView; // @synthesize pressedTileBlurEffectView=_pressedTileBlurEffectView;
@property(retain, nonatomic) _UIClickPresentationInteraction *presentationInteraction; // @synthesize presentationInteraction=_presentationInteraction;
@property(readonly, nonatomic) NSMapTable *pressedItemContexts; // @synthesize pressedItemContexts=_pressedItemContexts;
@property(retain, nonatomic) id <NACancelable> pressGestureActiveTimerCancellationToken; // @synthesize pressGestureActiveTimerCancellationToken=_pressGestureActiveTimerCancellationToken;
@property(readonly, nonatomic) NSMutableSet *mutuallyExclusiveGestureRecognizers; // @synthesize mutuallyExclusiveGestureRecognizers=_mutuallyExclusiveGestureRecognizers;
@property(retain, nonatomic) HUForceInterpolatedPressGestureRecognizer *pressGestureRecognizer; // @synthesize pressGestureRecognizer=_pressGestureRecognizer;
@property(retain, nonatomic) UITapGestureRecognizer *doubleTapGestureRecognizer; // @synthesize doubleTapGestureRecognizer=_doubleTapGestureRecognizer;
@property(retain, nonatomic) UITapGestureRecognizer *singleTapGestureRecognizer; // @synthesize singleTapGestureRecognizer=_singleTapGestureRecognizer;
@property(retain, nonatomic) HUItemTableViewController *settingsViewController; // @synthesize settingsViewController=_settingsViewController;
@property(retain, nonatomic) HUQuickControlNavigationController *cardNavigationController; // @synthesize cardNavigationController=_cardNavigationController;
@property(nonatomic) __weak id <HUQuickControlPresentationCoordinatorDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) __weak UIView *targetView; // @synthesize targetView=_targetView;
@property(retain, nonatomic) HUGridServiceCell *pressedTile; // @synthesize pressedTile=_pressedTile;
@property(retain, nonatomic) HUQuickControlContainerViewController *quickControlViewController; // @synthesize quickControlViewController=_quickControlViewController;
@property(retain, nonatomic) HUQuickControlPresentationContext *presentationContext; // @synthesize presentationContext=_presentationContext;
@property(retain, nonatomic) HUCardViewController *cardViewController; // @synthesize cardViewController=_cardViewController;
- (void)_logUserMetricsAfterPress;
- (_Bool)_allowsCardPresentationWithOnlySettings;
- (_Bool)_isRTL;
- (id)_dismissServiceDetailsViewController:(id)arg1 animated:(_Bool)arg2;
- (id)_dismissCardViewController;
- (id)_dismissChildViewController;
- (id)finishPresentation:(id)arg1 animated:(_Bool)arg2;
- (void)quickControlViewControllerDidTapDetailsButton:(id)arg1;
- (void)quickControlViewControllerWillDismissDetailsViewController:(id)arg1 shouldDismissQuickControl:(_Bool)arg2;
- (id)detailsViewControllerForQuickControlViewController:(id)arg1 item:(id)arg2;
- (_Bool)hasDetailsActionForQuickControlViewController:(id)arg1 item:(id)arg2;
- (id)quickControlViewController:(id)arg1 applierForSourceViewTransitionWithAnimationSettings:(id)arg2 presenting:(_Bool)arg3;
- (double)quickControlViewController:(id)arg1 sourceViewInitialScaleForPresentation:(_Bool)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (id)cardViewControllerRequestingDismissal:(id)arg1;
- (void)presentationControllerWillDismiss:(id)arg1;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(_Bool)arg3;
- (id)_prepareSettingsViewController;
@property(readonly, nonatomic, getter=isQuickControlPresented) _Bool quickControlIsPresented;
- (void)_cleanupForQuickControlDismissal;
- (void)_restoreOriginalTile;
- (id)_dismissQuickControlViewControllerAnimated:(_Bool)arg1;
- (id)dismissQuickControlAnimated:(_Bool)arg1;
- (id)dismissQuickControlAnimated:(_Bool)arg1 wasDismissed:(_Bool *)arg2;
- (void)_validatePresentationContext:(id)arg1;
- (id)_beginControlPresentationAnimated:(_Bool)arg1;
- (_Bool)_shouldCancelPresentation;
- (id)presentQuickControlWithContext:(id)arg1 animated:(_Bool)arg2;
- (void)_actuateTapticFeedback;
- (void)_prepareForTapticFeedback;
- (void)_pressedStateDidEndForItem:(id)arg1 clearPresentationContext:(_Bool)arg2;
- (void)_updateOverrideAttributesWithTransform:(struct CGAffineTransform)arg1 alpha:(double)arg2 forItem:(id)arg3;
- (void)_updateOverrideAttributesWithScale:(double)arg1 forItem:(id)arg2;
- (id)_createPressedContextForItem:(id)arg1 userInitiated:(_Bool)arg2;
- (void)_initiateProgrammaticBounceForItem:(id)arg1;
- (void)_configureInitialStateForPressedItemContext:(id)arg1 userInitiated:(_Bool)arg2;
- (void)_preparePressedItemContextForItem:(id)arg1 startApplier:(_Bool)arg2;
- (struct CGRect)titleAndDescriptionViewFrameInActionSetTile;
- (struct CGRect)secondaryLabelFrameInNavigationBar;
- (struct CGRect)secondaryLabelFrameInActionSetTile;
- (struct CGRect)secondaryLabelFrameInTile;
- (struct CGRect)primaryLabelFrameInNavigationBar;
- (struct CGRect)primaryLabelFrameInActionSetTile;
- (struct CGRect)primaryLabelFrameInTile;
- (struct CGRect)iconFrameInNavigationBar;
- (unsigned long long)iconSizeInNavigationBar;
- (struct CGRect)iconFrameInActionSetTile;
- (struct CGRect)iconFrameInTile;
- (unsigned long long)iconSizeInActionSetTile;
- (unsigned long long)iconSizeInTile;
- (_Bool)isActionSetTile;
- (_Bool)isTileOff;
- (void)removeAllTransitionSubviews;
- (id)animationControllerForDismissedController:(id)arg1;
- (void)_createTransitionViewsForDismissal;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)_createTransitionViewsForPresentation;
- (_Bool)shouldDismissWholePresentationHierarchy;
- (id)clickPresentationInteraction:(id)arg1 presentationForPresentingViewController:(id)arg2;
- (void)clickPresentationInteractionEnded:(id)arg1 wasCancelled:(_Bool)arg2;
- (_Bool)clickPresentationInteractionShouldPresent:(id)arg1;
- (id)clickPresentationInteraction:(id)arg1 previewForHighlightingAtLocation:(struct CGPoint)arg2;
- (_Bool)clickPresentationInteractionShouldBegin:(id)arg1;
- (id)_sheetPresentationControllerViewForTouchContinuation:(id)arg1;
- (void)_pressGestureDidEnd:(_Bool)arg1;
- (void)_pressGestureDidBecomeActive;
- (void)_pressGestureDidBeginWithLocation:(struct CGPoint)arg1;
- (void)_handlePressGesture:(id)arg1;
- (void)_handleDoubleTapGesture:(id)arg1;
- (void)_handleSingleTapGesture:(id)arg1;
- (void)_installGestureRecognizer;
- (id)_gestureInstallationView;
- (void)_handleMutuallyExclusiveGesture:(id)arg1;
- (void)playBounceForItem:(id)arg1;
- (void)removeMutuallyExclusiveGestureRecognizer:(id)arg1;
- (void)addMutuallyExclusiveGestureRecognizer:(id)arg1;
@property(readonly, nonatomic) HUPressedItemContext *activePressedItemContext;
@property(readonly, nonatomic) UIViewController *presentingViewController;
- (void)traitCollectionDidChange:(id)arg1;
@property(readonly, nonatomic) UITraitCollection *traitCollection;
- (id)initWithTargetView:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

