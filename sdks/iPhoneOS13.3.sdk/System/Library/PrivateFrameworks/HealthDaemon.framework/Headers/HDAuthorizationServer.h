//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HDHealthStoreClient, HDProfile, NSMutableArray, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface HDAuthorizationServer : NSObject
{
    _Atomic BOOL _invalidated;
    NSString *_sourceBundleIdentifier;
    HDProfile *_profile;
    NSObject<OS_dispatch_queue> *_queue;
    HDHealthStoreClient *_client;
    NSMutableArray *_authorizationRequestIdentifiers;
    NSUUID *_transactionSessionIdentifier;
}

@property(retain, nonatomic) NSUUID *transactionSessionIdentifier; // @synthesize transactionSessionIdentifier=_transactionSessionIdentifier;
@property(retain, nonatomic) NSMutableArray *authorizationRequestIdentifiers; // @synthesize authorizationRequestIdentifiers=_authorizationRequestIdentifiers;
@property(readonly, nonatomic) HDHealthStoreClient *client; // @synthesize client=_client;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) __weak HDProfile *profile; // @synthesize profile=_profile;
@property(readonly, copy) NSString *sourceBundleIdentifier; // @synthesize sourceBundleIdentifier=_sourceBundleIdentifier;
// - (void).cxx_destruct;
- (void)_invalidate;
- (void)_queue_enqueueAuthorizationRequestForBundleIdentifier:(id)arg1 writeTypes:(id)arg2 readTypes:(id)arg3 authorizationNeededHandler:(id /* CDUnknownBlockType */)arg4 requestCompletionHandler:(id /* CDUnknownBlockType */)arg5;
- (id)_authorizationStatusForTypes:(id)arg1 error:(id )arg2;
- (void)_performIfAuthorizedForTypes:(id)arg1 sharing:(BOOL)arg2 onQueue:(id)arg3 usingBlock:(id /* CDUnknownBlockType */)arg4 errorHandler:(id /* CDUnknownBlockType */)arg5;
- (void)handleObjectAuthorizationRequestsWithPromptHandler:(id /* CDUnknownBlockType */)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)enqueueObjectAuthorizationRequestForSamples:(id)arg1 promptIfNeeded:(BOOL)arg2 authorizationNeededHandler:(id /* CDUnknownBlockType */)arg3 completion:(id /* CDUnknownBlockType */)arg4;
- (void)handleAuthorizationRequestsForBundleIdentifier:(id)arg1 promptHandler:(id /* CDUnknownBlockType */)arg2 requestCompletionHandler:(id /* CDUnknownBlockType */)arg3;
- (void)handleAuthorizationRequestsWithPromptHandler:(id /* CDUnknownBlockType */)arg1 requestCompletionHandler:(id /* CDUnknownBlockType */)arg2;
- (void)enqueueAuthorizationRequestToWriteTypes:(id)arg1 readTypes:(id)arg2 authorizationNeededHandler:(id /* CDUnknownBlockType */)arg3 requestCompletionHandler:(id /* CDUnknownBlockType */)arg4;
- (id)authorizationStatusForType:(id)arg1 error:(id )arg2;
- (id)readAuthorizationWithTypes:(id)arg1 error:(id )arg2;
- (id)readAuthorizationStatusForType:(id)arg1 error:(id )arg2;
- (BOOL)isAuthorizationStatusDeterminedForTypes:(id)arg1 error:(id )arg2;
- (void)performIfAuthorizedToDeleteObjectsWithTypes:(id)arg1 onQueue:(id)arg2 usingBlock:(id /* CDUnknownBlockType */)arg3 errorHandler:(id /* CDUnknownBlockType */)arg4;
- (void)performIfAuthorizedToSaveObjectsWithTypes:(id)arg1 onQueue:(id)arg2 usingBlock:(id /* CDUnknownBlockType */)arg3 errorHandler:(id /* CDUnknownBlockType */)arg4;
- (void)performIfAuthorizedToReadTypes:(id)arg1 onQueue:(id)arg2 usingBlock:(id /* CDUnknownBlockType */)arg3 errorHandler:(id /* CDUnknownBlockType */)arg4;
- (void)invalidate;
- (id)initWithClient:(id)arg1 queue:(id)arg2;
- (void)updateDefaultAuthorizationStatusesWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (BOOL)resetAuthorizationStatusForBundleIdentifier:(id)arg1 error:(id )arg2;
- (BOOL)resetAuthorizationStatusesForObjects:(id)arg1 error:(id )arg2;
- (void)endAuthorizationRequestDelegateTransactionWithSessionIdentifier:(id)arg1 error:(id)arg2;
- (void)_queue_beginAuthorizationRequestDelegateTransactionWithSessionIdentifier:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)beginAuthorizationRequestDelegateTransactionWithSessionIdentifier:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)beginAuthorizationRequestDelegateTransactionWithRequestRecord:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)requestAuthorizationForBundleIdentifier:(id)arg1 writeTypes:(id)arg2 readTypes:(id)arg3 completion:(id /* CDUnknownBlockType */)arg4;
- (void)_setAuthorizationStatusesEntitled:(id)arg1 authorizationModes:(id)arg2 forBundleIdentifier:(id)arg3 options:(NSUInteger)arg4 completion:(id /* CDUnknownBlockType */)arg5;
- (void)setAuthorizationStatuses:(id)arg1 authorizationModes:(id)arg2 forBundleIdentifier:(id)arg3 options:(NSUInteger)arg4 completion:(id /* CDUnknownBlockType */)arg5;
- (id)allObjectAuthorizationsForSampleWithUUID:(id)arg1 error:(id )arg2;
- (id)allDocumentAuthorizationRecordsForType:(id)arg1 bundleIdentifier:(id)arg2 error:(id )arg3;
- (id)allSourcesRequestingTypes:(id)arg1 error:(id )arg2;
- (id)allAuthorizationRecordsForType:(id)arg1 error:(id )arg2;
- (id)allAuthorizationRecordsForBundleIdentifier:(id)arg1 error:(id )arg2;

@end

