//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/HUApplier.h>

@class CADisplayLink, HUAnimationSettings, NSMutableSet;

@interface HUAnimationApplier : HUApplier
{
    BOOL _applyDynamically;
    HUAnimationSettings *_animationSettings;
    CADisplayLink *_displayLink;
    double _startTime;
    NSMutableSet *_relativeAnimations;
    NSMutableSet *_effectiveProgressObservers;
}

+ (id)_applierWithAnimationSettings:(id)arg1 applyDynamically:(BOOL)arg2;
+ (id)staticApplierWithAnimationSettings:(id)arg1;
+ (id)dynamicApplierWithAnimationSettings:(id)arg1;
+ (id)_applyAnimationSettings:(id)arg1 withApplier:(id /* CDUnknownBlockType */)arg2 completion:(id /* CDUnknownBlockType */)arg3 applyDynamically:(BOOL)arg4;
+ (id)applyAnimationSettings:(id)arg1 withDynamicApplier:(id /* CDUnknownBlockType */)arg2 completion:(id /* CDUnknownBlockType */)arg3;
+ (id)applyAnimationSettings:(id)arg1 withStaticApplier:(id /* CDUnknownBlockType */)arg2 completion:(id /* CDUnknownBlockType */)arg3;
@property(readonly, nonatomic) NSMutableSet *effectiveProgressObservers; // @synthesize effectiveProgressObservers=_effectiveProgressObservers;
@property(readonly, nonatomic) NSMutableSet *relativeAnimations; // @synthesize relativeAnimations=_relativeAnimations;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(retain, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property(copy, nonatomic) HUAnimationSettings *animationSettings; // @synthesize animationSettings=_animationSettings;
@property(nonatomic) BOOL applyDynamically; // @synthesize applyDynamically=_applyDynamically;
// - (void).cxx_destruct;
- (BOOL)complete:(BOOL)arg1;
- (BOOL)cancel;
- (void)_invalidateDisplayLinkIfNecessary;
- (void)_displayLinkTick;
- (void)_updateDynamicProgress:(double)arg1;
- (BOOL)start;
- (void)_startEffectiveProgressTimerForObserver:(id)arg1;
- (BOOL)notifyUponEffectiveProgress:(double)arg1 withBlock:(id /* CDUnknownBlockType */)arg2;
- (double)_remainingTimeIntervalForEffectiveProgress:(double)arg1;
- (BOOL)addAlongsideAnimationApplier:(id)arg1 relativeStart:(double)arg2 relativeDuration:(double)arg3;
- (double)_effectiveDuration;
@property(readonly, nonatomic) double effectiveProgress;
- (id)init;
- (id)initWithAnimationSettings:(id)arg1;

@end
