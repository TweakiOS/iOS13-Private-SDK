//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WorkflowUI/WFActionSettingsViewController.h>

#import <ActionKitUI/UITableViewDataSource-Protocol.h>
#import <ActionKitUI/UITableViewDelegate-Protocol.h>
#import <ActionKitUI/WFAccountLoginViewControllerDelegate-Protocol.h>

@class NSArray, NSString, UITableView;

__attribute__((visibility("hidden")))
@interface WFAccountListViewController : WFActionSettingsViewController <UITableViewDataSource, UITableViewDelegate, WFAccountLoginViewControllerDelegate>
{
    Class _accountClass;
    UITableView *_tableView;
    NSArray *_accounts;
}

@property(copy, nonatomic) NSArray *accounts; // @synthesize accounts=_accounts;
@property(readonly, nonatomic) __weak UITableView *tableView; // @synthesize tableView=_tableView;
@property(readonly, nonatomic) Class accountClass; // @synthesize accountClass=_accountClass;
- (void)loginViewControllerDidCancel:(id)arg1;
- (void)loginViewController:(id)arg1 didLoginWithAccount:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (id)initWithAction:(id)arg1 definition:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
