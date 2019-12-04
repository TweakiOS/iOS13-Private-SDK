//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppStoreDaemon/ASDServiceProvider-Protocol.h>

@class ASDServiceBroker, NSString;

@interface ASDPersonalizationStore : NSObject <ASDServiceProvider>
{
    ASDServiceBroker *_serviceBroker;
}

+ (id)interface;
+ (id)sharedInstance;
- (void)tasteProfileFeatureEnabled:(id /* block */)arg1;
- (void)setClusterMappings:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)setClusterMapping:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)sendMetricsWithCompletionBlock:(id /* block */)arg1;
- (void)resetMetricsWithCompletionBlock:(id /* block */)arg1;
- (void)reloadClusterMappingsWithCompletionBlock:(id /* block */)arg1;
- (void)resetActorIDWithCompletionBlock:(id /* block */)arg1;
- (void)reportAppEvent:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)recordMetricsWithCompletionBlock:(id /* block */)arg1;
- (void)recordLaunchesWithCompletionBlock:(id /* block */)arg1;
- (void)getAppEventsWithCompletionBlock:(id /* block */)arg1;
- (void)getGroupingToken:(id /* block */)arg1;
- (void)getTasteProfileToken:(id /* block */)arg1;
- (void)getClusterMappingsWithCompletionBlock:(id /* block */)arg1;
- (void)flushMetricsWithCompletionBlock:(id /* block */)arg1;
- (id)_initWithServiceBroker:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
