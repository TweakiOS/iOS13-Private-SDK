//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Preferences/PSListController.h>

@class NSArray, PSSpecifier;

__attribute__((visibility("hidden")))
@interface VUIAccountSettingsConnectedAppsViewController : PSListController
{
    PSSpecifier *_appGroup;
    NSArray *_appSpecifiers;
}

// - (void).cxx_destruct;
- (long long)_alertStyle;
- (void)_promptToDisableChannel:(id)arg1 withExternalID:(id)arg2;
- (void)_promptToEnableChannel:(id)arg1 withExternalID:(id)arg2;
- (void)_showVppaExpiredPrompt:(id)arg1;
- (void)_showPrivacySheet:(id)arg1;
- (id)_accessStatusForSpecifier:(id)arg1;
- (void)_toggleSpecifier:(id)arg1 sender:(id)arg2;
- (void)_stopAppSpinner;
- (void)_startAppSpinner;
- (void)_loadAppGroup;
- (void)_addPrivacyFooterToGroup:(id)arg1;
- (id)_appGroupSpecifier;
- (id)specifiers;
- (void)viewDidLoad;

@end

