//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitUI/PKPaymentSetupFieldCell.h>

@class UIImageView;

@interface PKPaymentSetupBuiltInCardOnFilePrimaryAccountNumberFieldCell : PKPaymentSetupFieldCell
{
    UIImageView *_accessoryImageView;
    BOOL _hasDarkAppearance;
    long long _paymentCredentialType;
}

@property(nonatomic) BOOL hasDarkAppearance; // @synthesize hasDarkAppearance=_hasDarkAppearance;
@property(nonatomic) long long paymentCredentialType; // @synthesize paymentCredentialType=_paymentCredentialType;
// - (void).cxx_destruct;
- (id)_networkImage;
- (BOOL)textFieldShouldClear:(id)arg1;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(_NSRange)arg2 replacementString:(id)arg3;
- (BOOL)textFieldShouldBeginEditing:(id)arg1;
- (void)_updateNetworkImage;
- (void)setPaymentSetupField:(id)arg1;
- (void)setEnabled:(BOOL)arg1;
- (BOOL)isEnabled;
- (void)_dynamicUserInterfaceTraitDidChange;
- (void)dealloc;
- (id)init;
- (void)pk_applyAppearance:(id)arg1;

@end
