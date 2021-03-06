//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Montreal/MontrealNNDescription.h>

#import <Montreal/MontrealNNDescriptionProtocol-Protocol.h>

@class NSNumber;

@interface MontrealNNModelOptimizerParam : MontrealNNDescription <MontrealNNDescriptionProtocol>
{
    float _learningRate;
    float _momentum;
    NSUInteger _optimizerType;
    NSNumber *_gradientClipMin;
    NSNumber *_gradientClipMax;
}

@property(readonly) NSNumber *gradientClipMax; // @synthesize gradientClipMax=_gradientClipMax;
@property(readonly) NSNumber *gradientClipMin; // @synthesize gradientClipMin=_gradientClipMin;
@property(readonly) float momentum; // @synthesize momentum=_momentum;
@property(readonly) float learningRate; // @synthesize learningRate=_learningRate;
@property(readonly) NSUInteger optimizerType; // @synthesize optimizerType=_optimizerType;
// - (void).cxx_destruct;
- (void)description:(id)arg1 indent:(id)arg2;
- (id)initWithOptimizerType:(NSUInteger)arg1 learningRate:(float)arg2 momentum:(float)arg3 gradientClipMin:(id)arg4 gradientClipMax:(id)arg5;
- (id)initWithDictionary:(id)arg1;

@end

