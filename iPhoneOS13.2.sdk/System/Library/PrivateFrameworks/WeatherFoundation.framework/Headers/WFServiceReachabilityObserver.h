//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable, NSMutableDictionary, NWPathEvaluator;
@protocol OS_dispatch_queue;

@interface WFServiceReachabilityObserver : NSObject
{
    NSObject<OS_dispatch_queue> *_observerQueue;
    NSMutableDictionary *_blockObserversForUUID;
    NSHashTable *_observerObjects;
    long long _reachability;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NWPathEvaluator *_serviceReachabilityEvaluator;
}

+ (id)sharedObserver;
@property(retain) NWPathEvaluator *serviceReachabilityEvaluator; // @synthesize serviceReachabilityEvaluator=_serviceReachabilityEvaluator;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // @synthesize callbackQueue=_callbackQueue;
@property(nonatomic) long long reachability; // @synthesize reachability=_reachability;
@property(retain) NSHashTable *observerObjects; // @synthesize observerObjects=_observerObjects;
@property(retain) NSMutableDictionary *blockObserversForUUID; // @synthesize blockObserversForUUID=_blockObserversForUUID;
@property(retain) NSObject<OS_dispatch_queue> *observerQueue; // @synthesize observerQueue=_observerQueue;
- (void)removeAllObservers;
- (void)_deliverReachabilityUpdate:(long long)arg1;
- (void)_setupReachability;
- (_Bool)removeBlockObserverWithHandle:(id)arg1;
- (id)addBlockObserver:(id /* block */)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (_Bool)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
@property(readonly) _Bool isServiceAvailable;
- (void)dealloc;
- (id)_init;
- (id)init;

@end
