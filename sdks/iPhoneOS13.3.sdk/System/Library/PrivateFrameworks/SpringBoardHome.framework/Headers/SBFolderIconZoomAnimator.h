//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardHome/SBScaleIconZoomAnimator.h>

#import <SpringBoardHome/SBSearchGestureObserver-Protocol.h>

@class SBFFluidBehaviorSettings, SBFloatyFolderView, SBFolderController, SBIconView, SBSearchGesture, _SBInnerFolderIconZoomAnimator;

@interface SBFolderIconZoomAnimator : SBScaleIconZoomAnimator <SBSearchGestureObserver>
{
    SBFolderController *_innerFolderController;
    SBFloatyFolderView *_innerFolderView;
    _SBInnerFolderIconZoomAnimator *_innerZoomAnimator;
    BOOL _isAnimatingInFloatingDock;
    SBFFluidBehaviorSettings *_dockAnimationSettings;
    SBSearchGesture *_searchGesture;
}

@property(retain, nonatomic) SBSearchGesture *searchGesture; // @synthesize searchGesture=_searchGesture;
@property(retain, nonatomic) SBFFluidBehaviorSettings *dockAnimationSettings; // @synthesize dockAnimationSettings=_dockAnimationSettings;
@property(nonatomic) BOOL isAnimatingInFloatingDock; // @synthesize isAnimatingInFloatingDock=_isAnimatingInFloatingDock;
// - (void).cxx_destruct;
- (void)searchGesture:(id)arg1 startedShowing:(BOOL)arg2;
- (void)searchGesture:(id)arg1 changedPercentComplete:(double)arg2;
- (BOOL)_forceSquareZoomDimension;
- (CGRect)_zoomedFrame;
- (void)_performAnimationToFraction:(double)arg1 withCentralAnimationSettings:(id)arg2 delay:(double)arg3 alreadyAnimating:(BOOL)arg4 sharedCompletion:(id /* CDUnknownBlockType */)arg5;
- (NSUInteger)_numberOfSignificantAnimations;
- (void)_cleanupAnimation;
- (void)_setAnimationFraction:(double)arg1;
- (void)_setupMatchMoveAnimation;
- (void)_setupCounterDockMatchMoveAnimationWithOffset:(double)arg1 layer:(id)arg2 additive:(BOOL)arg3;
- (void)_setupMatchMoveWithDockWithTargetIconCenter:(CGPoint)arg1 targetIconAnchor:(CGPoint)arg2;
- (void)_setupMatchMoveWithDock;
- (void)_updateDockMatchMoveWithFraction:(double)arg1;
- (void)_prepareAnimation;
- (BOOL)shouldMatchMoveWithDock;
@property(readonly, nonatomic) SBIconView *targetIconView; // @dynamic targetIconView;
- (id)_referenceFolderIconView;
- (id)defaultTargetIconContainerView;
- (id)initWithAnimationContainer:(id)arg1 innerFolderController:(id)arg2 folderIcon:(id)arg3;

@end

