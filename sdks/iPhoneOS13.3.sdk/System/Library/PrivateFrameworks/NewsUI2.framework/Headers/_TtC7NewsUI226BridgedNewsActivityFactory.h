//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <swiftCore/_TtCs12_SwiftObject.h>

#import <NewsUI2/TSBridgedNewsActivityFactoryType-Protocol.h>

@class MISSING_TYPE;

@interface _TtC7NewsUI226BridgedNewsActivityFactory : _TtCs12_SwiftObject <TSBridgedNewsActivityFactoryType>
{
    MISSING_TYPE *tagService;
    MISSING_TYPE *headlineService;
    MISSING_TYPE *headlineModelFactory;
}

- (id)webLinkWithURL:(id)arg1;
- (id)manageSubscriptions;
- (id)adPreviewWithIdentifier:(id)arg1;
- (id)notifications;
- (id)previewWithHeadline:(id)arg1;
- (id)pickYourFavorites;
- (id)videoPlayerWithArticleIDs:(id)arg1 analyticsReferral:(id)arg2;
- (id)videoPlayerWithWidgetPlaylist:(id)arg1 analyticsReferral:(id)arg2;
- (id)history;
- (id)saved;
- (id)editorialArticleWithIdentifier:(id)arg1 articleViewContext:(id)arg2;
- (id)unrealizedHeadlineWithArticleID:(id)arg1 articleContext:(id)arg2 articlePresentationStyle:(long long)arg3 showShareSheet:(BOOL)arg4 forceArticleUpdate:(BOOL)arg5;
- (id)headlineWithHeadlineProviding:(id)arg1 articleContext:(id)arg2 articlePresentationStyle:(long long)arg3 showShareSheet:(BOOL)arg4 forceArticleUpdate:(BOOL)arg5;
- (void)feedWithTagIdentifier:(id)arg1 feedViewContext:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (id)feedWithTag:(id)arg1 feedViewContext:(id)arg2;
- (id)forYouFeedWithFeedViewContext:(id)arg1 articleViewContext:(id)arg2 analyticsReferral:(id)arg3;

@end

