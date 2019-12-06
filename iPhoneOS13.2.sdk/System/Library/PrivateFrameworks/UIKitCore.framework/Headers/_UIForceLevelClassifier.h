//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSArray, NSMutableDictionary, NSObservationSource;
@protocol _UIForceLevelClassifierDelegate;

@interface _UIForceLevelClassifier : NSObject <NSObserver>
{
    NSObservationSource *_progressTouchForceObservable;
    NSMutableDictionary *_cachedProgressObservables;
    NSArray *_delegateObservations;
    BOOL _respectsSystemGestureTouchFiltering;
    long long _currentForceLevel;
    id <_UIForceLevelClassifierDelegate> _delegate;
    double _currentTouchForceMultiplier;
}

@property(nonatomic) BOOL respectsSystemGestureTouchFiltering; // @synthesize respectsSystemGestureTouchFiltering=_respectsSystemGestureTouchFiltering;
@property(nonatomic) double currentTouchForceMultiplier; // @synthesize currentTouchForceMultiplier=_currentTouchForceMultiplier;
@property(nonatomic) __weak id <_UIForceLevelClassifierDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) long long currentForceLevel; // @synthesize currentForceLevel=_currentForceLevel;
// - (void).cxx_destruct;
- (void)_notifyDelegateOfProgress:(double)arg1 toForceLevel:(long long)arg2;
- (id)observableForProgressToForceLevel:(long long)arg1 minimumRequiredForceLevel:(long long)arg2;
- (id)observableForProgressToForceLevel:(long long)arg1;
- (void)receiveObservedValue:(id)arg1;
- (void)touchForceMultiplierDidChange;
- (void)_accessibilityForceSensitivityChanged:(id)arg1;
- (BOOL)wantsUnclampedForceValues;
- (void)reset;
- (void)observeTouchWithForceValue:(double)arg1 atTimestamp:(double)arg2 withCentroidAtLocation:(CGPoint)arg3;
- (void)dealloc;
- (id)init;

@end
