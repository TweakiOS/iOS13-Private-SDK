//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SignpostCAInstrumentationProcessor, SignpostCAStallAggregation;
@protocol OS_dispatch_queue;

@interface SignpostCAStallAggregationBuilder : NSObject
{
    NSUInteger _frameLifetimeCount;
    NSUInteger _commitCount;
    NSUInteger _transactionLifetimeCount;
    float _maxDurationSec;
    NSObject<OS_dispatch_queue> *_syncQueue;
    SignpostCAStallAggregation *_stallAggregation;
    SignpostCAInstrumentationProcessor *_caInstrumentationProcessor;
}

@property(readonly, nonatomic) SignpostCAInstrumentationProcessor *caInstrumentationProcessor; // @synthesize caInstrumentationProcessor=_caInstrumentationProcessor;
@property(readonly, nonatomic) SignpostCAStallAggregation *stallAggregation; // @synthesize stallAggregation=_stallAggregation;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *syncQueue; // @synthesize syncQueue=_syncQueue;
@property(nonatomic) float maxDurationSec; // @synthesize maxDurationSec=_maxDurationSec;
// - (void).cxx_destruct;
- (id)newConfiguredExtractor;
- (void)handleSignpostIntervalBegin:(id)arg1;
- (void)handleSignpostInterval:(id)arg1;
- (void)handleSignpostEvent:(id)arg1;
- (void)_handleLongFrameLifetime:(id)arg1;
- (void)_handleLongTransactionLifetime:(id)arg1;
- (void)_handleLongCommit:(id)arg1;
- (BOOL)_isOverThreshold:(id)arg1;
@property(readonly, copy, nonatomic) SignpostCAStallAggregation *stallAggregationSnapshot;
- (void)_processDurationNs:(NSUInteger)arg1 type:(unsigned char)arg2 processExecutablePath:(id)arg3 pid:(int)arg4 aggregateForSystem:(BOOL)arg5;
- (void)addSubsystemCategoriesOfInterestToWhitelist:(id)arg1;
- (void)handleDeviceReboot;
- (id)init;
- (void)_initializeCAInstrumentationProcessor;

@end

