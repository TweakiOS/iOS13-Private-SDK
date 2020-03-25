//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface TSDFPSCounter : NSObject
{
    NSMutableArray *_sampleArray;
    double _startTimeInterval;
    double _endTimeInterval;
    NSUInteger _frameCount;
}

// - (void).cxx_destruct;
- (id)p_fpsInfo;
- (double)p_standardDeviationFromArray:(id)arg1 mean:(double)arg2;
- (id)p_modeFromArray:(id)arg1;
- (id)formatInfoForLog:(id)arg1 identifier:(id)arg2 type:(id)arg3 testName:(id)arg4 direction:(id)arg5 duration:(double)arg6 slide:(long long)arg7;
- (id)fpsGraphString;
- (id)fpsSummaryString;
- (id)p_fpsSummaryStringIncludingGraph:(BOOL)arg1;
- (void)addSample:(id)arg1;
- (void)addFrameAtDrawTime:(double)arg1 duration:(double)arg2;
- (void)addFrameAtDrawTime:(double)arg1;
- (void)addFrame;
- (void)reset;
- (id)init;

@end
