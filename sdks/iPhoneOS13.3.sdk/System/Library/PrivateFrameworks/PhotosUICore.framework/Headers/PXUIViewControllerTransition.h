//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class PXRegionOfInterest, UIPercentDrivenInteractiveTransition, UIViewController;

@interface PXUIViewControllerTransition : NSObject <UIViewControllerAnimatedTransitioning>
{
    UIViewController *_internalMasterViewController;
    UIViewController *_internalDetailViewController;
    id /* CDUnknownBlockType */ _transitionAnimationStartHandler;
    id /* CDUnknownBlockType */ _transitionAnimationCompletionHandler;
    BOOL _supportsEdgeSwipeBackGesture;
    BOOL _interactive;
    BOOL _transitioningToDetail;
    UIPercentDrivenInteractiveTransition *_interactionController;
    long long _state;
    id __pauseToken;
    PXRegionOfInterest *_masterRegionOfInterest;
}

+ (BOOL)isTransitionSupportedWithMasterViewController:(id)arg1 detailViewController:(id)arg2;
@property(nonatomic, getter=isTransitioningToDetail) BOOL transitioningToDetail; // @synthesize transitioningToDetail=_transitioningToDetail;
@property(retain, nonatomic) PXRegionOfInterest *masterRegionOfInterest; // @synthesize masterRegionOfInterest=_masterRegionOfInterest;
@property(readonly, nonatomic, getter=isInteractive) BOOL interactive; // @synthesize interactive=_interactive;
@property(readonly, nonatomic) BOOL supportsEdgeSwipeBackGesture; // @synthesize supportsEdgeSwipeBackGesture=_supportsEdgeSwipeBackGesture;
@property(retain, nonatomic, setter=_setPauseToken:) id _pauseToken; // @synthesize _pauseToken=__pauseToken;
@property(nonatomic) long long state; // @synthesize state=_state;
// - (void).cxx_destruct;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (long long)transitionIdentifierForTransitionMode:(NSUInteger)arg1;
@property(readonly, nonatomic) UIPercentDrivenInteractiveTransition *interactionController; // @synthesize interactionController=_interactionController;
- (void)didEndTransition;
- (void)willEndTransition;
- (void)willStartTransition;
- (void)installTransitionAnimationCompletionHandler:(id /* CDUnknownBlockType */)arg1;
- (void)installTransitionAnimationStartHandler:(id /* CDUnknownBlockType */)arg1;
@property(readonly, nonatomic) long long transitionIdentifier;
@property(readonly, nonatomic) __weak UIViewController *detailViewController;
@property(readonly, nonatomic) __weak UIViewController *masterViewController;
- (id)initWithMasterViewController:(id)arg1 detailViewController:(id)arg2;
- (id)init;

@end

