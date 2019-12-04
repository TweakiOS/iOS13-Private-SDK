//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/CAAnimationDelegate-Protocol.h>
#import <SpringBoard/SBUIAnimationStepping-Protocol.h>

@class BSAnimationSettings, CADisplayLink, NSArray, NSMutableSet, NSString;

@interface SBAnimationStepper : NSObject <CAAnimationDelegate, SBUIAnimationStepping>
{
    BSAnimationSettings *_animationSettings;
    NSMutableSet *_views;
    NSMutableSet *_finishedAnimatingViews;
    CADisplayLink *_displayLink;
    id /* block */ _completion;
    double _percentage;
    _Bool _invalidated;
    _Bool _completed;
    _Bool _finishingForward;
    _Bool _finishingBackward;
    _Bool _animatingToStepPercent;
    double _animatedSteppingTimestamp;
    double _animatedSteppingStartPercent;
    double _animatedSteppingTargetPercent;
    double _finishBackwardTimestamp;
    double _finishBackwardDuration;
    double _finishBackwardPercentage;
    _Bool _adjustsDurationForLongestAnimation;
    double _duration;
    double _finishSpeed;
}

@property(nonatomic) double finishSpeed; // @synthesize finishSpeed=_finishSpeed;
@property(nonatomic) _Bool adjustsDurationForLongestAnimation; // @synthesize adjustsDurationForLongestAnimation=_adjustsDurationForLongestAnimation;
@property(readonly, nonatomic) double duration; // @synthesize duration=_duration;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (void)finishSteppingBackwardToStart;
- (void)finishSteppingForwardToEnd;
@property(nonatomic) double stepPercentage;
@property(readonly, nonatomic, getter=isStepped) _Bool stepped;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (double)_nextCommitTime;
- (void)_displayLinkFiredForBackwardToStart:(id)arg1;
- (void)_displayLinkFired:(id)arg1;
- (void)_setStepPercentage:(double)arg1;
- (void)_updateAnimationSteppingTarget:(double)arg1;
- (void)_checkForCompletion;
- (void)finishSteppingBackwardToStartWithCompletion:(id /* block */)arg1;
- (void)finishSteppingForwardToEndWithCompletion:(id /* block */)arg1;
- (void)invalidate;
- (void)_makeSubviewTree:(id)arg1 fromView:(id)arg2;
- (void)_adjustDurationForLongestAnimation;
- (void)startSteppingAnimationsInView:(id)arg1;
@property(readonly, nonatomic) NSArray *views; // @dynamic views;
- (void)dealloc;
- (id)initWithAnimationSettings:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
