//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Preferences/PSSetupController.h>

@interface ACUISetupViewController : PSSetupController
{
    BOOL _didAttemptDataclassSetup;
    BOOL _shouldForceMailSetup;
}

+ (id)_specifierForDataclassEditControllerClass:(Class)arg1 withName:(id)arg2 account:(id)arg3;
+ (void)showDataclassConfigurationControllerForAccount:(id)arg1 name:(id)arg2 fromViewController:(id)arg3 specifier:(id)arg4 completion:(id /* CDUnknownBlockType */)arg5;
+ (void)showAlternateCreationControllerForAccountType:(id)arg1 username:(id)arg2 fromViewController:(id)arg3 specifier:(id)arg4 completion:(id /* CDUnknownBlockType */)arg5;
- (void)_dismissAndNotifyParent;
- (void)finishedAccountSetup;
- (void)controller:(id)arg1 didFinishSettingUpAccount:(id)arg2;

@end

