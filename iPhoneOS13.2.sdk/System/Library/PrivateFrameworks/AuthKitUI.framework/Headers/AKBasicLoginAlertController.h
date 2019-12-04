//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIAlertController.h>

#import <AuthKitUI/UITextFieldDelegate-Protocol.h>

@class NSString;
@protocol AKBasicLoginAlertControllerDelegate, NSObject;

@interface AKBasicLoginAlertController : UIAlertController <UITextFieldDelegate>
{
    long long _alertStyle;
    id CodeObserver;
    id /* block */ _ak_cancelAction;
    id /* block */ _ak_authenticateAction;
    id /* block */ _ak_createIDAction;
    id /* block */ _ak_useIDAction;
    id /* block */ _ak_forgotIDAction;
    id /* block */ _ak_forgotPasswordAction;
    NSString *_ak_username;
    NSString *_ak_password;
    NSString *_ak_title;
    NSString *_ak_reason;
    NSString *_ak_authenticateButtonTitle;
    id /* block */ _ak_regenerateCodeAction;
    id /* block */ _ak_codeEnteredAction;
    NSString *_generatedCode;
    id <AKBasicLoginAlertControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <AKBasicLoginAlertControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *generatedCode; // @synthesize generatedCode=_generatedCode;
@property(copy, nonatomic) id /* block */ codeEnteredAction; // @synthesize codeEnteredAction=_ak_codeEnteredAction;
@property(copy, nonatomic) id /* block */ regenerateCodeAction; // @synthesize regenerateCodeAction=_ak_regenerateCodeAction;
@property(copy, nonatomic) id /* block */ forgotPasswordAction; // @synthesize forgotPasswordAction=_ak_forgotPasswordAction;
@property(copy, nonatomic) id /* block */ forgotIDAction; // @synthesize forgotIDAction=_ak_forgotIDAction;
@property(copy, nonatomic) id /* block */ useIDAction; // @synthesize useIDAction=_ak_useIDAction;
@property(copy, nonatomic) id /* block */ createIDAction; // @synthesize createIDAction=_ak_createIDAction;
@property(copy, nonatomic) id /* block */ authenticateAction; // @synthesize authenticateAction=_ak_authenticateAction;
@property(copy, nonatomic) id /* block */ ak_cancelAction; // @synthesize ak_cancelAction=_ak_cancelAction;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)_endObservingDidEnterCodeNotifications;
- (void)_didEnterCode:(id)arg1;
- (void)_beginObservingDidEnterCodeNotifications;
- (void)_passwordFieldDidChange:(id)arg1;
- (void)_clearPasswordField;
- (void)_jiggleTheAlert;
- (void)stopAnimating;
- (void)startAnimating;
- (_Bool)disablesAutomaticKeyboardDismissal;
- (id)_passwordField;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)setPasscodeFieldDisabled:(_Bool)arg1;
- (void)clearSecondFactorEntry;
@property(copy, nonatomic) NSString *authenticateButtonTitle; // @synthesize authenticateButtonTitle=_ak_authenticateButtonTitle;
@property(copy, nonatomic) NSString *reason; // @synthesize reason=_ak_reason;
@property(copy, nonatomic) NSString *authenticateTitle; // @synthesize authenticateTitle=_ak_title;
@property(copy, nonatomic) NSString *password; // @synthesize password=_ak_password;
@property(copy, nonatomic) NSString *username; // @synthesize username=_ak_username;
@property(nonatomic) long long alertStyle;
- (void)_dismissAndShowiForgot:(id)arg1;
- (void)_setupViewControllerForSecondFactorEntryStyle;
- (void)_setupViewControllerForIForgotStyle;
- (void)_setupViewControllerForUserOrCreateAppleIDStyle;
- (void)_setupViewControllerForNonEditableUsernameFieldStyle;
- (void)_setupViewControllerForDefaultStyle;
- (void)_setupAuthenticateAndCancelButtons;
- (void)_syncUsernameAndPasswordPropertiesWithTextFieldContent;
- (id)_interpolatedReasonString;
- (id)_wrappedCancelAction;
- (void)_setupViewControllerForAlertStyle;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithAlertStyle:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
