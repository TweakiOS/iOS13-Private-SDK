//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PKPaymentApplication, PKPaymentPass, PKPaymentTransaction;

@interface PKPendingPaymentTransaction : NSObject
{
    PKPaymentTransaction *_transaction;
    PKPaymentPass *_pass;
    PKPaymentApplication *_paymentApplication;
}

@property(retain, nonatomic) PKPaymentApplication *paymentApplication; // @synthesize paymentApplication=_paymentApplication;
@property(retain, nonatomic) PKPaymentPass *pass; // @synthesize pass=_pass;
@property(retain, nonatomic) PKPaymentTransaction *transaction; // @synthesize transaction=_transaction;
// - (void).cxx_destruct;
- (id)initWithTransaction:(id)arg1 pass:(id)arg2 paymentApplication:(id)arg3;

@end

