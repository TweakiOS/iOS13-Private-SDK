//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class NSString, VCUIShortcutViewController, WFWorkflow, WFWorkflowReference;

@protocol VCUIShortcutViewControllerDelegate 
- (void)shortcutViewControllerDidCancel:(VCUIShortcutViewController *)arg1;

@optional
- (void)shortcutViewController:(VCUIShortcutViewController *)arg1 didFinishWithName:(NSString *)arg2;
- (void)shortcutViewController:(VCUIShortcutViewController *)arg1 didDeleteShortcut:(WFWorkflowReference *)arg2;
- (void)shortcutViewController:(VCUIShortcutViewController *)arg1 didSaveShortcut:(WFWorkflow *)arg2;
- (void)shortcutViewController:(VCUIShortcutViewController *)arg1 didCreateShortcut:(WFWorkflow *)arg2;
@end
