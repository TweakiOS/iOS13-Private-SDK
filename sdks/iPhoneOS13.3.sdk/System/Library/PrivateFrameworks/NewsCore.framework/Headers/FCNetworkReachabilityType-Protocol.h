//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@protocol FCNetworkReachabilityObserving;

@protocol FCNetworkReachabilityType <NSObject>
@property(nonatomic) long long offlineReason;
@property(readonly, nonatomic) BOOL isCloudKitReachable;
- (void)removeObserver:(id <FCNetworkReachabilityObserving>)arg1;
- (void)addObserver:(id <FCNetworkReachabilityObserving>)arg1;
@end

