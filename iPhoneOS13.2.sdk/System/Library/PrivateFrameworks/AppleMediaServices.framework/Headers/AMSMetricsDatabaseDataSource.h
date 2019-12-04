//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppleMediaServices/AMSMetricsDataSource-Protocol.h>

@class AMSMetricsDatabase, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AMSMetricsDatabaseDataSource : NSObject <AMSMetricsDataSource>
{
    AMSMetricsDatabase *_database;
    NSString *_containerIdentifier;
    NSString *_currentLockKey;
    NSObject<OS_dispatch_queue> *_queue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSString *currentLockKey; // @synthesize currentLockKey=_currentLockKey;
@property(readonly, nonatomic) NSString *containerIdentifier; // @synthesize containerIdentifier=_containerIdentifier;
- (void)willStartBatchingWithLogKey:(id)arg1 error:(id *)arg2;
- (void)skipEvents:(id)arg1 error:(id *)arg2;
- (void)removeEvents:(id)arg1 error:(id *)arg2;
- (void)enumerateSortedEventsForTopic:(id)arg1 block:(id /* block */)arg2;
- (void)didFinishBatching;
- (void)removeAllEvents;
- (id)enqueueEvents:(id)arg1;
- (void)cancel;
@property(readonly, nonatomic) AMSMetricsDatabase *database; // @synthesize database=_database;
@property(readonly, nonatomic) long long eventCount;
- (void)dealloc;
- (id)initWithContainerIdentifier:(id)arg1;

@end
