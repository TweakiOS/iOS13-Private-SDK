//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardHome/SBViewControllerPercentCompletionReporting-Protocol.h>
#import <SpringBoardHome/SBViewControllerReversibleAnimatedTransitioning-Protocol.h>

@protocol SBViewControllerContextTransitioning;

@protocol SBViewControllerInteractiveAnimatedTransitioning <SBViewControllerReversibleAnimatedTransitioning, SBViewControllerPercentCompletionReporting>
- (void)finishInteractiveTransition:(id <SBViewControllerContextTransitioning>)arg1 withCompletionSpeed:(double)arg2 completionCurve:(long long)arg3;
- (void)updateTransition:(id <SBViewControllerContextTransitioning>)arg1 withPercentComplete:(double)arg2;
@end

