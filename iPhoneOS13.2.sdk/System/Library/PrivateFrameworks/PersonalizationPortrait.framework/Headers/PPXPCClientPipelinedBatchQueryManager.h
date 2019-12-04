//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface PPXPCClientPipelinedBatchQueryManager : NSObject
{
    // Error parsing type: AQ, name: _queryId
    NSMutableDictionary *_queryContexts;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (void)assertBatch:(id)arg1 forQueryName:(id)arg2 hasExpectedContainedType:(Class)arg3;
- (void)cancelPendingQueriesWithError:(id)arg1;
- (void)handleReplyWithName:(id)arg1 batch:(id)arg2 isLast:(_Bool)arg3 error:(id)arg4 queryId:(unsigned long long)arg5 completion:(id /* block */)arg6;
- (_Bool)syncExecuteQueryWithName:(id)arg1 error:(id *)arg2 queryInitializer:(id /* block */)arg3 handleBatch:(id /* block */)arg4;
- (id)initWithName:(id)arg1;
- (id)init;

@end
