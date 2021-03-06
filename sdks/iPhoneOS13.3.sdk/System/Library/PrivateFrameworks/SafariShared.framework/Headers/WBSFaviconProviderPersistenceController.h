//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SafariShared/WBSDataCacheDelegate-Protocol.h>
#import <SafariShared/WBSSQLiteStoreDelegate-Protocol.h>

@class NSURL, WBSFaviconProviderDatabaseController, WBSFaviconProviderPrivateCache, WBSFaviconProviderRecordCache, WBSOnDiskDataCache;
@protocol OS_dispatch_queue;

@interface WBSFaviconProviderPersistenceController : NSObject <WBSDataCacheDelegate, WBSSQLiteStoreDelegate>
{
    NSURL *_baseURL;
    WBSOnDiskDataCache *_faviconDiskCache;
    WBSFaviconProviderDatabaseController *_faviconDatabase;
    WBSFaviconProviderRecordCache *_recordsCache;
    WBSFaviconProviderPrivateCache *_privateCache;
    id /* CDUnknownBlockType */ _setUpCompletionHandler;
    NSObject<OS_dispatch_queue> *_internalQueue;
    long long _controllerState;
    CGSize _preferredIconSize;
    BOOL _isReadOnly;
    NSURL *_databaseURL;
    NSURL *_diskCacheURL;
}

@property(readonly, nonatomic) NSURL *diskCacheURL; // @synthesize diskCacheURL=_diskCacheURL;
@property(readonly, nonatomic) NSURL *databaseURL; // @synthesize databaseURL=_databaseURL;
// - (void).cxx_destruct;
- (void)sqliteStoreDidFallBackToInMemoryStore:(id)arg1;
- (void)sqliteStoreDidFailDatabaseIntegrityCheck:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (void)dataCacheDidSetUp:(id)arg1;
- (void)pageURLStringsPrefixedWithVariantsOfDomainString:(id)arg1 includingPrivateData:(BOOL)arg2 completionHandler:(id /* CDUnknownBlockType */)arg3;
- (void)firstIconForVariantsOfDomainString:(id)arg1 includingPrivateData:(BOOL)arg2 completionHandler:(id /* CDUnknownBlockType */)arg3;
- (void)firstIconForVariantsOfPageURLString:(id)arg1 includingPrivateData:(BOOL)arg2 completionHandler:(id /* CDUnknownBlockType */)arg3;
- (void)iconInfoForIconURLString:(id)arg1 includingPrivateData:(BOOL)arg2 completionHandler:(id /* CDUnknownBlockType */)arg3;
- (void)iconInfoForPageURLString:(id)arg1 includingPrivateData:(BOOL)arg2 completionHandler:(id /* CDUnknownBlockType */)arg3;
- (void)_iconForIconUUID:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (void)iconForIconURLString:(id)arg1 includingPrivateData:(BOOL)arg2 completionHandler:(id /* CDUnknownBlockType */)arg3;
- (void)iconForPageURLString:(id)arg1 includingPrivateData:(BOOL)arg2 completionHandler:(id /* CDUnknownBlockType */)arg3;
- (void)removeIconFilesNotReferencedInDatabaseWithCompletionHandler:(id /* CDUnknownBlockType */)arg1;
- (void)removeIconsWithURLStringsNotFoundIn:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (void)removeAllIconsWithCompletionHandler:(id /* CDUnknownBlockType */)arg1;
- (void)removeIconWithPageURLString:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (void)linkPageURLString:(id)arg1 toIconURLString:(id)arg2 isPrivate:(BOOL)arg3 completionHandler:(id /* CDUnknownBlockType */)arg4;
- (void)rejectedResourceInfoForPageURLString:(id)arg1 iconURLString:(id)arg2 includingPrivateData:(BOOL)arg3 completionHandler:(id /* CDUnknownBlockType */)arg4;
- (void)setIconIsRejectedResource:(BOOL)arg1 forPageURLString:(id)arg2 iconURLString:(id)arg3 isPrivate:(BOOL)arg4 completionHandler:(id /* CDUnknownBlockType */)arg5;
- (void)setIconData:(id)arg1 forPageURLString:(id)arg2 iconURLString:(id)arg3 iconSize:(CGSize)arg4 hasGeneratedResolutions:(BOOL)arg5 isPrivate:(BOOL)arg6 completionHandler:(id /* CDUnknownBlockType */)arg7;
- (id)_imageFromURL:(id)arg1;
- (long long)_faviconStatusFromWBSSQLStoreStatus:(long long)arg1;
- (void)_finishSetUpWithStatus:(long long)arg1;
- (void)flushPrivateDataFromMemoryWithCompletionHandler:(id /* CDUnknownBlockType */)arg1;
- (void)savePendingChangesBeforeTermination;
- (void)closeWithCompletionHandler:(id /* CDUnknownBlockType */)arg1;
- (void)openAndCheckIntegrity:(BOOL)arg1 createIfNeeded:(BOOL)arg2 fallBackToMemoryStoreIfError:(BOOL)arg3 completionHandler:(id /* CDUnknownBlockType */)arg4;
- (id)initWithPersistenceBaseURL:(id)arg1 databaseName:(id)arg2 preferredIconSize:(CGSize)arg3 isReadOnly:(BOOL)arg4;
- (id)init;

@end

