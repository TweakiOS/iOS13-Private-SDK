//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CompanionSync/SYStateLoggable-Protocol.h>

@class PBCodable, SYService;
@protocol OS_dispatch_queue, OS_os_activity, OS_os_transaction, SYSyncEngineResponder;

__attribute__((visibility("hidden")))
@interface SYSyncEngine : NSObject <SYStateLoggable>
{
    id <SYSyncEngineResponder> _responder;
    NSObject<OS_os_transaction> *_transaction;
    NSObject<OS_os_activity> *_transportActivity;
    SYService *_service;
    NSObject<OS_dispatch_queue> *_queue;
}

@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) __weak SYService *service; // @synthesize service=_service;
@property(readonly, nonatomic) NSObject<OS_os_activity> *transportActivity; // @synthesize transportActivity=_transportActivity;
// - (void).cxx_destruct;
@property(readonly, nonatomic) PBCodable *stateForLogging;
- (id)cancelMessagesReturningFailures:(id)arg1;
- (id)outputStreamWithMetadata:(id)arg1 priority:(long long)arg2 options:(id)arg3 context:(id)arg4 error:(id )arg5;
- (void)enqueueSyncRequest:(id)arg1 withMessageID:(unsigned short)arg2 priority:(long long)arg3 options:(id)arg4 userContext:(id)arg5 callback:(id /* CDUnknownBlockType */)arg6;
@property(readonly, nonatomic) BOOL targetConnected;
@property(readonly, nonatomic) BOOL targetIsNearby;
@property(readonly, nonatomic) BOOL buffersHandshake;
@property(readonly, nonatomic) BOOL buffersSessions;
@property(readonly, nonatomic) BOOL isInSession;
- (void)endSession;
- (void)beginSession;
- (void)suspend;
- (BOOL)resume:(id )arg1;
@property(nonatomic) __weak id <SYSyncEngineResponder> responder;
- (void)dealloc;
- (id)initWithService:(id)arg1 queue:(id)arg2;

@end

