//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@protocol SXDebugLayoutOptionsObserving;

@protocol SXDebugLayoutOptionsProviding 
- (void)removeObserver:(id <SXDebugLayoutOptionsObserving>)arg1;
- (void)addObserver:(id <SXDebugLayoutOptionsObserving>)arg1;
- (long long)overrideChannelSubscriptionStatus:(long long)arg1;
- (long long)overrideBundleSubscriptionStatus:(long long)arg1;
- (unsigned long long)overrideViewingLocation:(unsigned long long)arg1;
@end
