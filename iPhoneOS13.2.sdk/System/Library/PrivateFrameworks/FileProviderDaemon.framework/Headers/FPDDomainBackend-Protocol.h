//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FileProviderDaemon/FPProviderDomainAccessControl-Protocol.h>


@class FPCTLTermDumper, FPDDomain, FPDDomainIndexer, FPDExtension, FPDRequest, FPExtensionEnumerationSettings, FPItem, FPItemID, FPSandboxingURLWrapper, NSArray, NSData, NSObject, NSProgress, NSURL;
@protocol FPDLifetimeExtender, FPXEnumeratorObserver, OS_dispatch_queue;

@protocol FPDDomainBackend <NSObject, FPProviderDomainAccessControl>
@property(readonly) NSObject<OS_dispatch_queue> *backendQueue;
@property(readonly, copy) NSArray *rootURLs;
- (void)resolveProviderItemID:(FPItemID *)arg1 completionHandler:(void (^)(FPItemID *, NSError *))arg2;
- (void)fetchOperationServiceOrEndpointWithRequest:(FPDRequest *)arg1 completionHandler:(void (^)(id <FPXOperationService>, NSXPCListenerEndpoint *, NSError *))arg2;
- (FPDDomainIndexer *)createIndexerWithExtension:(FPDExtension *)arg1 enabled:(_Bool)arg2 error:(id *)arg3;
- (void)reimportItemsBelowItemWithID:(FPItemID *)arg1 removeCachedItems:(_Bool)arg2 markItemDataless:(_Bool)arg3 completionHandler:(void (^)(NSError *))arg4;
- (void)valuesForAttributes:(NSArray *)arg1 forURL:(NSURL *)arg2 request:(FPDRequest *)arg3 completionHandler:(void (^)(NSDictionary *, NSError *))arg4;
- (void)enumerateWithSettings:(FPExtensionEnumerationSettings *)arg1 lifetimeExtender:(id <FPDLifetimeExtender>)arg2 observer:(id <FPXEnumeratorObserver>)arg3 completionHandler:(void (^)(id <FPXEnumerator>, NSError *))arg4;
- (_Bool)removeAllFilesWithError:(id *)arg1;
- (void)currentMaterializedSetSyncAnchorWithCompletionHandler:(void (^)(NSData *))arg1;
- (void)enumerateMaterializedSetFromSyncAnchor:(NSData *)arg1 completionHandler:(void (^)(NSArray *, NSArray *, _Bool, NSData *, NSError *))arg2;
- (void)writeCheckReportTo:(FPCTLTermDumper *)arg1 limitNumberOfItems:(_Bool)arg2 completionHandler:(void (^)(NSError *))arg3;
- (void)dumpStateTo:(FPCTLTermDumper *)arg1 limitNumberOfItems:(_Bool)arg2;
- (void)URLForItemID:(FPItemID *)arg1 creatingPlaceholderIfMissing:(_Bool)arg2 ignoreAlternateContentsURL:(_Bool)arg3 request:(FPDRequest *)arg4 completionHandler:(void (^)(NSError *, FPSandboxingURLWrapper *, FPSandboxingURLWrapper *))arg5;
- (_Bool)updateRootAfterDomainChangeWithError:(id *)arg1;
- (void)itemChangedAtURL:(NSURL *)arg1 request:(FPDRequest *)arg2;
- (void)createItemBasedOnTemplate:(FPItem *)arg1 fields:(unsigned long long)arg2 urlWrapper:(FPSandboxingURLWrapper *)arg3 options:(unsigned long long)arg4 bounceOnCollision:(_Bool)arg5 request:(FPDRequest *)arg6 completionHandler:(void (^)(FPItem *, NSError *))arg7;
- (void)evictItemWithID:(FPItemID *)arg1 request:(FPDRequest *)arg2 completionHandler:(void (^)(NSError *))arg3;
- (NSProgress *)evictItemAtURL:(NSURL *)arg1 request:(FPDRequest *)arg2 completionHandler:(void (^)(FPItemID *, NSError *))arg3;
- (NSProgress *)startProvidingItemAtURL:(NSURL *)arg1 readingOptions:(unsigned long long)arg2 request:(FPDRequest *)arg3 completionHandler:(void (^)(NSError *))arg4;
- (void)fetchFSItemsForItemIdentifiers:(NSArray *)arg1 materializingIfNeeded:(_Bool)arg2 request:(FPDRequest *)arg3 completionHandler:(void (^)(NSDictionary *, NSError *))arg4;
- (void)itemIDForURL:(NSURL *)arg1 request:(FPDRequest *)arg2 completionHandler:(void (^)(FPItemID *, NSError *))arg3;
- (void)itemForURL:(NSURL *)arg1 request:(FPDRequest *)arg2 completionHandler:(void (^)(FPItem *, NSError *))arg3;
- (void)itemForItemID:(FPItemID *)arg1 request:(FPDRequest *)arg2 completionHandler:(void (^)(FPItem *, NSError *))arg3;
- (NSURL *)createRootByImportingURL:(NSURL *)arg1 error:(id *)arg2;
- (_Bool)needsRootCreation;
- (_Bool)isProviderForURL:(NSURL *)arg1;
- (_Bool)startAndGetSyncAnchor:(id *)arg1;
- (void)invalidate;
- (id)initWithDomain:(FPDDomain *)arg1;

@optional
+ (void)registerXPCActivities;
- (void)ingestFromCacheItemWithID:(FPItemID *)arg1 requestedFields:(unsigned long long)arg2 request:(FPDRequest *)arg3 completionHandler:(void (^)(NSError *))arg4;
- (void)didChangeItemID:(FPItemID *)arg1;
- (void)unpinItemWithID:(FPItemID *)arg1 request:(FPDRequest *)arg2 completionHandler:(void (^)(FPItem *, NSError *))arg3;
- (void)pinItemWithID:(FPItemID *)arg1 request:(FPDRequest *)arg2 completionHandler:(void (^)(FPItem *, NSError *))arg3;
- (void)setDownloadPolicy:(unsigned long long)arg1 forItemWithID:(FPItemID *)arg2 request:(FPDRequest *)arg3 completionHandler:(void (^)(NSError *))arg4;
- (void)downloadItemWithItemID:(FPItemID *)arg1 request:(FPDRequest *)arg2 progress:(NSProgress *)arg3 completionHandler:(void (^)(NSURL *, NSError *))arg4;
- (long long)nonEvictableSpace;
- (void)forceIngestionForItemID:(FPItemID *)arg1 completionHandler:(void (^)(FPItem *, NSError *))arg2;
- (void)forceFSIngestionForItemID:(FPItemID *)arg1 completionHandler:(void (^)(FPItem *, NSError *))arg2;
- (void)forceIngestionAtURL:(NSURL *)arg1 completionHandler:(void (^)(FPItem *, NSError *))arg2;
- (NSURL *)materializedURLForItemID:(FPItemID *)arg1;
- (void)decorateItems:(NSArray *)arg1 completionHandler:(void (^)(NSArray *))arg2;
- (void)fakeFSEventAtURL:(NSURL *)arg1;
@end
