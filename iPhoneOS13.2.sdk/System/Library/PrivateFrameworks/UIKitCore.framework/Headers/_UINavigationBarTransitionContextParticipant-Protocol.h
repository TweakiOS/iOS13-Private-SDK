//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class _UINavigationBarTransitionContext;

@protocol _UINavigationBarTransitionContextParticipant 
- (void)finalizeStateFromTransition:(_UINavigationBarTransitionContext *)arg1;
- (void)ensureBackButtonTruncationOccursWithContext:(_UINavigationBarTransitionContext *)arg1;
- (void)recordToStateForTransition:(_UINavigationBarTransitionContext *)arg1;
- (void)prepareToRecordToState:(_UINavigationBarTransitionContext *)arg1;
- (void)recordFromStateForTransition:(_UINavigationBarTransitionContext *)arg1;
@end
