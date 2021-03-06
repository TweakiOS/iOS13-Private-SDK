//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ManagedConfigurationUI/MCURLListenerListController.h>


@class NSMutableDictionary, NSSManager, UIImage;

__attribute__((visibility("hidden")))
@interface MCProfileListController : MCURLListenerListController <UITableViewDelegate>
{
    BOOL _hasFetchedProfilesInfo;
    BOOL _hasFailedFetchingProfilesInfo;
    int _provisioningProfileInstalledToken;
    int _provisioningProfileRemovedToken;
    NSMutableDictionary *_dataDictionary;
    UIImage *_profileListIcon;
    NSSManager *_nssManager;
}

+ (id)specifiersForBlockedApps:(id)arg1;
@property(nonatomic) int provisioningProfileRemovedToken; // @synthesize provisioningProfileRemovedToken=_provisioningProfileRemovedToken;
@property(nonatomic) int provisioningProfileInstalledToken; // @synthesize provisioningProfileInstalledToken=_provisioningProfileInstalledToken;
@property(nonatomic) BOOL hasFailedFetchingProfilesInfo; // @synthesize hasFailedFetchingProfilesInfo=_hasFailedFetchingProfilesInfo;
@property(nonatomic) BOOL hasFetchedProfilesInfo; // @synthesize hasFetchedProfilesInfo=_hasFetchedProfilesInfo;
@property(retain, nonatomic) NSSManager *nssManager; // @synthesize nssManager=_nssManager;
@property(retain, nonatomic) UIImage *profileListIcon; // @synthesize profileListIcon=_profileListIcon;
@property(retain, nonatomic) NSMutableDictionary *dataDictionary; // @synthesize dataDictionary=_dataDictionary;
// - (void).cxx_destruct;
- (void)_hideProgressIndicatorAndShowBackButton:(BOOL)arg1;
- (void)_showProgressIndicator;
- (void)handleProfilesInfoResponse:(id)arg1 error:(id)arg2;
- (void)fetchRemoteProfileList;
- (BOOL)_showProfileDetailPageForUserEnrollmentProfile:(id)arg1;
- (void)_handleProfileCellSelectionAtIndexPath:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)_resolveIndexPathForSection:(id)arg1;
- (long long)_profilesCount;
- (id)_dataForIndexPath:(id)arg1;
- (BOOL)_isSectionPopulated:(int)arg1;
- (BOOL)_isUIProfileInstallationRestricted;
- (void)_fetchPhoneProfileList;
- (id)specifiers;
- (id)_specifiersForDataDictionary;
- (void)_appSignerApplicationsChanged:(id)arg1;
- (void)_blockedAppsChanged:(id)arg1;
- (void)_profileListChanged:(id)arg1;
- (void)_installedApplicationsChanged:(id)arg1;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

