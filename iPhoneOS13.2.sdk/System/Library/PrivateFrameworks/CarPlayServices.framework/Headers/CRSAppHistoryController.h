//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CarPlayServices/CRSAppHistoryServerToClientInterface-Protocol.h>

@class BSServiceConnection, NSString;
@protocol OS_dispatch_queue;

@interface CRSAppHistoryController : NSObject <CRSAppHistoryServerToClientInterface>
{
    BSServiceConnection *_connection;
    NSObject<OS_dispatch_queue> *_callbackQueue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // @synthesize callbackQueue=_callbackQueue;
@property(retain, nonatomic) BSServiceConnection *connection; // @synthesize connection=_connection;
- (void)setSessionUIContexts:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchSessionEchoContextsWithCompletion:(id /* block */)arg1;
- (void)fetchSessionUIContextsWithCompletion:(id /* block */)arg1;
- (void)fetchUIContextsWithCompletion:(id /* block */)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
