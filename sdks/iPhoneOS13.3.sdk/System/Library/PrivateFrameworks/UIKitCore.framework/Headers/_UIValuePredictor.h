//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


__attribute__((visibility("hidden")))
@interface _UIValuePredictor : NSObject <NSCopying>
{
    NSUInteger _capacity;
    NSUInteger _arrayCapacity;
    double _values;
    double _valueWeights;
    double _predictions;
    double _confidenceFactorsForVelocity;
    double _confidenceFactorsForHistoricalAccuracy;
    double _confidenceFactorsForDerivativeStability;
    double _confidenceFactors;
    double _derivatives;
    double _minHistoricalAccuracyThreshold;
    double _maxHistoricalAccuracyThreshold;
    double _derivativeStabilityThreshold;
    double _minVelocityThreshold;
    double _maxVelocityThreshold;
    double _minConstraint;
    double _maxConstraint;
    BOOL _wrapConstraint;
    NSUInteger _numValues;
    NSUInteger _numPredictions;
    NSUInteger _numDerivatives;
}

@property(readonly, nonatomic) NSUInteger numDerivatives; // @synthesize numDerivatives=_numDerivatives;
@property(readonly, nonatomic) NSUInteger numPredictions; // @synthesize numPredictions=_numPredictions;
@property(readonly, nonatomic) NSUInteger numValues; // @synthesize numValues=_numValues;
@property(nonatomic) BOOL wrapConstraint; // @synthesize wrapConstraint=_wrapConstraint;
@property(nonatomic) double maxConstraint; // @synthesize maxConstraint=_maxConstraint;
@property(nonatomic) double minConstraint; // @synthesize minConstraint=_minConstraint;
@property(nonatomic) double maxVelocityThreshold; // @synthesize maxVelocityThreshold=_maxVelocityThreshold;
@property(nonatomic) double minVelocityThreshold; // @synthesize minVelocityThreshold=_minVelocityThreshold;
@property(nonatomic) double derivativeStabilityThreshold; // @synthesize derivativeStabilityThreshold=_derivativeStabilityThreshold;
@property(nonatomic) double maxHistoricalAccuracyThreshold; // @synthesize maxHistoricalAccuracyThreshold=_maxHistoricalAccuracyThreshold;
@property(nonatomic) double minHistoricalAccuracyThreshold; // @synthesize minHistoricalAccuracyThreshold=_minHistoricalAccuracyThreshold;
- (id)description;
- (id)descriptionFromIndex:(NSUInteger)arg1 toIndex:(NSUInteger)arg2 includeHeader:(BOOL)arg3 includeDetailedConfidence:(BOOL)arg4;
- (double )confidenceFactors;
- (double )predictions;
- (void)addValue:(double)arg1 weight:(double)arg2;
- (void)_updatePredictionsAtIndex:(long long)arg1;
- (void)_updateConfidenceFactorsAtIndex:(int)arg1;
- (void)_updateConfidenceFactorsForDerivativeStabilityAtIndex:(int)arg1;
- (void)_updateConfidenceFactorsForHistoricalAccuracyAtIndex:(int)arg1;
- (void)_getPriorPredictions:(double )arg1 forValueAtIndex:(int)arg2;
- (void)_updateConfidenceFactorsForVelocityAtIndex:(long long)arg1;
- (void)_propagateDerivatives:(double )arg1 fromHigherDerivatives:(double )arg2 atIndex:(long long)arg3;
- (void)_updateDerivatives:(double )arg1 fromArray:(double )arg2 weights:(double )arg3 atIndex:(long long)arg4 wrap:(BOOL)arg5;
- (void)_slideDataWindow;
- (void)_ensureCapacity:(NSUInteger)arg1;
- (void)_setupDefaults;
- (double)_constrainPrediction:(double)arg1;
- (double )_derivatives;
- (double )_confidenceFactorsAtIndex:(NSUInteger)arg1;
- (double )_confidenceFactorsForDerivativeStabilityAtIndex:(NSUInteger)arg1;
- (double )_confidenceFactorsForHistoricalAccuracyAtIndex:(NSUInteger)arg1;
- (double )_confidenceFactorsForVelocityAtIndex:(NSUInteger)arg1;
- (double )_predictionsAtIndex:(NSUInteger)arg1;
- (double )_valueWeightsAtIndex:(NSUInteger)arg1;
- (double )_valuesAtIndex:(NSUInteger)arg1;
- (void)dealloc;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initFromValuePredictor:(id)arg1;
- (id)init;
- (id)initWithNumPredictions:(NSUInteger)arg1 numDerivatives:(NSUInteger)arg2;

@end

