//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BRCAccountSession, BRCMetricEndpoint, BRCSyncHealthReport, NSMutableDictionary;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface BRCAnalyticsReporter : NSObject
{
    BRCAccountSession *_session;
    NSObject<OS_dispatch_queue> *_queue;
    BRCMetricEndpoint *_metricEndpoint;
    NSMutableDictionary *_eventsByKind;
    BRCSyncHealthReport *_syncHealthReport;
}

// - (void).cxx_destruct;
- (void)lookupUserDownloadEventByDocID:(id)arg1 accessor:(id /* CDUnknownBlockType */)arg2;
- (void)lookupUserDownloadEventByOperationID:(id)arg1 accessor:(id /* CDUnknownBlockType */)arg2;
- (void)createUserDownloadEventForOperationID:(id)arg1 isRecursive:(BOOL)arg2 isForBackup:(BOOL)arg3;
- (void)lookupFSEventToSyncUpEventByItemID:(id)arg1 accessor:(id /* CDUnknownBlockType */)arg2;
- (void)lookupFSEventToSyncUpEventByFileID:(NSUInteger)arg1 genID:(unsigned int)arg2 accessor:(id /* CDUnknownBlockType */)arg3;
- (void)createFSEventToSyncUpEventForFileID:(NSUInteger)arg1 genID:(unsigned int)arg2;
- (void)dumpToContext:(id)arg1;
- (void)_withEventMetricsOfKind:(id)arg1 accessor:(id /* CDUnknownBlockType */)arg2;
- (void)_cleanupTimedOutEventMetrics:(id)arg1;
- (void)_forgetEventMetrics:(id)arg1;
- (void)forgetEventMetric:(id)arg1;
- (void)submitEventMetric:(id)arg1;
- (id)initWithSession:(id)arg1;

@end

