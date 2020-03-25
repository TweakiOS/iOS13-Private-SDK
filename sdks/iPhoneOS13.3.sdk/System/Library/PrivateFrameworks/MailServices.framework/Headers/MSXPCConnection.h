//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSXPCConnection.h>

@class EFPromise, NSLock, NSObject, NSXPCInterface, Protocol;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MSXPCConnection : NSXPCConnection
{
    NSLock *_lock;
    NSObject<OS_dispatch_queue> *_queue;
    EFPromise *_connectionPromise;
    NSXPCInterface *_remoteObjectInterface;
    NSXPCInterface *_exportedInterface;
    id _exportedObject;
    id /* CDUnknownBlockType */ _interruptionHandler;
    id /* CDUnknownBlockType */ _invalidationHandler;
    long long _resumeCount;
    unsigned int _state;
    BOOL _shouldLaunchMobileMail;
    Protocol *_protocol;
}

@property(nonatomic) BOOL shouldLaunchMobileMail; // @synthesize shouldLaunchMobileMail=_shouldLaunchMobileMail;
@property(readonly, retain, nonatomic) Protocol *protocol; // @synthesize protocol=_protocol;
// - (void).cxx_destruct;
- (void)_sendInvocation:(id)arg1 remoteInterface:(id)arg2 remoteProxy:(id)arg3 errorHandler:(id /* CDUnknownBlockType */)arg4;
- (id)remoteObjectProxyWithErrorHandler:(id /* CDUnknownBlockType */)arg1;
- (id)remoteObjectProxy;
- (unsigned int)effectiveGroupIdentifier;
- (unsigned int)effectiveUserIdentifier;
- (int)processIdentifier;
- (int)auditSessionIdentifier;
- (id)_connection;
- (void)invalidate;
- (void)suspend;
- (void)resume;
- (void)setInvalidationHandler:(id /* CDUnknownBlockType */)arg1;
- (id /* CDUnknownBlockType */)invalidationHandler;
- (void)setInterruptionHandler:(id /* CDUnknownBlockType */)arg1;
- (id /* CDUnknownBlockType */)interruptionHandler;
- (void)_queue_invokeInvalidationHandler;
- (void)_invokeInterruptionHandlerForPromise:(id)arg1;
- (id /* CDUnknownBlockType */)_nts_wrappedInterruptionHandler;
- (void)_finishPromise:(id)arg1 withConnection:(id)arg2 error:(id)arg3;
- (void)_invalidatePromise:(id)arg1;
- (id)_connectionForPromise:(id)arg1;
- (void)setExportedObject:(id)arg1;
- (id)exportedObject;
- (void)setExportedInterface:(id)arg1;
- (id)exportedInterface;
- (void)setRemoteObjectInterface:(id)arg1;
- (id)remoteObjectInterface;
- (id)description;
- (void)dealloc;
- (id)initWithProtocol:(id)arg1;

@end
