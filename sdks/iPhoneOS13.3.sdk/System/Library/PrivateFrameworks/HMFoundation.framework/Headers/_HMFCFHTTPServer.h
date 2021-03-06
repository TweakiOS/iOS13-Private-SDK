//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HMFoundation/HMFLogging-Protocol.h>

@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue, _HMFCFHTTPServerDelegate;

__attribute__((visibility("hidden")))
@interface _HMFCFHTTPServer : HMFObject <HMFLogging>
{
    id <_HMFCFHTTPServerDelegate> _delegate;
    NSUInteger _port;
    NSObject<OS_dispatch_queue> *_clientQueue;
    struct _CFHTTPServer _internal;
    NSMutableArray *_connections;
}

+ (id)logCategory;
@property(readonly, nonatomic) NSMutableArray *connections; // @synthesize connections=_connections;
@property(readonly, nonatomic) struct _CFHTTPServer internal; // @synthesize internal=_internal;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
@property(readonly, nonatomic) NSUInteger port; // @synthesize port=_port;
@property __weak id <_HMFCFHTTPServerDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (id)logIdentifier;
@property(readonly, nonatomic, getter=isValid) BOOL valid;
- (void)invalidate;
- (void)setWatchdogTimeout:(double)arg1;
- (double)watchdogTimeout;
@property double connectionIdleTimeout;
- (void)dealloc;
- (id)initWithPort:(NSUInteger)arg1 options:(NSUInteger)arg2;
- (id)init;

@end

