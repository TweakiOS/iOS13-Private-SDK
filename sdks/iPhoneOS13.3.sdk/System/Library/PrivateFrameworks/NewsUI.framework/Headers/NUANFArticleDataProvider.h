//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsUI/NUArticleDataProvider-Protocol.h>

@class FCArticle, NFEventManager, NSString, NUANFAssetLoader, NUANFContextLoader, NUANFFontLoader;
@protocol FCContentContext, NUEmbedDataManager, NUFontRegistration, SXHost;

@interface NUANFArticleDataProvider : NSObject <NUArticleDataProvider>
{
    FCArticle *_article;
    NSString *_articleID;
    id <FCContentContext> _contentContext;
    id <NUFontRegistration> _fontRegistration;
    id <SXHost> _host;
    NUANFFontLoader *_fontLoader;
    NUANFContextLoader *_contextLoader;
    NUANFAssetLoader *_assetLoader;
    id <NUEmbedDataManager> _embedDataManger;
    NFEventManager *_eventManager;
}

@property(retain, nonatomic) NFEventManager *eventManager; // @synthesize eventManager=_eventManager;
@property(retain, nonatomic) id <NUEmbedDataManager> embedDataManger; // @synthesize embedDataManger=_embedDataManger;
@property(retain, nonatomic) NUANFAssetLoader *assetLoader; // @synthesize assetLoader=_assetLoader;
@property(retain, nonatomic) NUANFContextLoader *contextLoader; // @synthesize contextLoader=_contextLoader;
@property(retain, nonatomic) NUANFFontLoader *fontLoader; // @synthesize fontLoader=_fontLoader;
@property(readonly, nonatomic) id <SXHost> host; // @synthesize host=_host;
@property(readonly, nonatomic) id <NUFontRegistration> fontRegistration; // @synthesize fontRegistration=_fontRegistration;
@property(readonly, nonatomic) id <FCContentContext> contentContext; // @synthesize contentContext=_contentContext;
@property(copy, nonatomic) NSString *articleID; // @synthesize articleID=_articleID;
@property(retain, nonatomic) FCArticle *article; // @synthesize article=_article;
// - (void).cxx_destruct;
- (void)setupAssetPrefetchCancellationWithOperation:(id)arg1;
- (void)setupAssetPrefetchRequestEventsWithEvents:(id)arg1;
- (void)reloadArticleIfNeeded;
- (void)loadArticleWithCompletionBlock:(id /* CDUnknownBlockType */)arg1;
- (void)cancelAssetPrefetch;
- (void)prefetchAssets;
- (void)loadContextWithCompletionBlock:(id /* CDUnknownBlockType */)arg1;
- (void)dealloc;
- (id)initWithArticle:(id)arg1 contentContext:(id)arg2 fontRegistration:(id)arg3 host:(id)arg4 embedDataManager:(id)arg5;

@end

