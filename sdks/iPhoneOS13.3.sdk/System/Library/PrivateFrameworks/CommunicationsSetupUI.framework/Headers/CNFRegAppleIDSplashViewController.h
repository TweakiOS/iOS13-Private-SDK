//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Preferences/PSAppleIDSplashViewController.h>

@class CNFRegController;

@interface CNFRegAppleIDSplashViewController : PSAppleIDSplashViewController
{
    BOOL _showBusyUIOnAppearance;
    CNFRegController *_regController;
    long long _serviceType;
}

+ (id)_inProgressRegisteringNonPhoneAccountForService:(id)arg1;
+ (BOOL)shouldShowSplashViewForService:(id)arg1 inProgressRegisteringNonPhoneAccount:(id )arg2;
@property BOOL showBusyUIOnAppearance; // @synthesize showBusyUIOnAppearance=_showBusyUIOnAppearance;
@property long long serviceType; // @synthesize serviceType=_serviceType;
@property(retain) CNFRegController *regController; // @synthesize regController=_regController;
// - (void).cxx_destruct;
- (id)_iCloudUserName;
- (void)_cnfSignInWithUsername:(id)arg1 password:(id)arg2;
- (void)_handleRegistarResults:(BOOL)arg1 alertController:(id)arg2;
- (void)handleAuthCompletionWithResults:(id)arg1;
- (void)_applicationDidResume:(id)arg1;
- (void)_completeIfAccountIsAlreadyRegistered;
- (void)_showSettingsController;
- (id)_imService;
- (void)continueRegisteringAccount:(id)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (id)serviceIcon;
- (id)serviceDescription;
- (id)serviceName;
- (void)setSpecifier:(id)arg1;
- (void)dealloc;

@end

