//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VideosUI/VideosExtrasTemplateViewController.h>


@class NSArray, NSIndexPath, NSMapTable, UIImageView, UITableView, VideosExtrasViewElementViewController;

__attribute__((visibility("hidden")))
@interface VideosExtrasListTemplateViewController : VideosExtrasTemplateViewController <UITableViewDataSource, UITableViewDelegate>
{
    UITableView *_tableView;
    BOOL _tableViewLeft;
    UIImageView *_vignetteView;
    BOOL _relatedContentEmbedded;
    NSArray *_masterViewConstraints;
    NSArray *_detailViewConstraints;
    NSMapTable *_relatedContentViewControllerMap;
    NSIndexPath *_autohighlightIndexPath;
    VideosExtrasViewElementViewController *_relatedContentViewController;
}

+ (id)relatedContentViewControllerForElement:(id)arg1;
@property(retain, nonatomic) VideosExtrasViewElementViewController *relatedContentViewController; // @synthesize relatedContentViewController=_relatedContentViewController;
// - (void).cxx_destruct;
- (void)_configureVignette:(BOOL)arg1;
- (void)_prepareLayout;
- (void)_setNavigationConstraints;
- (void)_setDetailContraints;
- (void)_unembedRelatedContent;
- (void)_pushRelatedViewController:(id)arg1 animated:(BOOL)arg2;
- (void)_embedRelatedContentViewController;
- (void)_setRelatedContentEmbedded:(BOOL)arg1;
- (void)_configureBannerWithElement:(id)arg1;
- (void)_updateRelatedContent:(id)arg1 forListItem:(id)arg2;
- (void)_updateForTemplate:(id)arg1;
- (BOOL)shouldUpdateByReplacingViewControllerWithTemplate:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didHighlightRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)_addConstraintsToTableView:(id)arg1;
- (void)viewDidLoad;
- (BOOL)showsPlaceholder;
- (id)templateElement;
- (void)dealloc;
- (id)initWithDocument:(id)arg1 options:(id)arg2 context:(id)arg3;

@end
