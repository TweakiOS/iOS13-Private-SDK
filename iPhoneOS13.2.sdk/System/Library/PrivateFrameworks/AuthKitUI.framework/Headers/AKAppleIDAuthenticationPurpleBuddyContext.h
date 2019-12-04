//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AuthKitUI/AKAppleIDAuthenticationInAppContext.h>

@class NSDictionary, NSString, UINavigationController, UIViewController;

@interface AKAppleIDAuthenticationPurpleBuddyContext : AKAppleIDAuthenticationInAppContext
{
    NSDictionary *_overrideFirstActionSignal;
    UIViewController *_topViewControllerOnLoadStart;
    UINavigationController *_navigationController;
}

@property(nonatomic) __weak UINavigationController *navigationController; // @synthesize navigationController=_navigationController;
- (void)remoteUIController:(id)arg1 didReceiveObjectModel:(id)arg2 actionSignal:(unsigned long long *)arg3;
- (void)presentBiometricOrPasscodeValidationForAppleID:(id)arg1 completion:(id /* block */)arg2;
- (void)presentLoginAlertWithError:(id)arg1 title:(id)arg2 message:(id)arg3 completion:(id /* block */)arg4;
- (void)dismissServerProvidedUIWithCompletion:(id /* block */)arg1;
- (void)dismissBasicLoginUIWithCompletion:(id /* block */)arg1;
- (void)presentBasicLoginUIWithCompletion:(id /* block */)arg1;
@property(readonly, nonatomic) NSString *passwordForCreating;
@property(readonly, nonatomic) NSString *usernameForCreating;
- (id)init;

@end
