//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface PKPaymentTransactionDetailAmountLineItemGenerator : NSObject
{
}

- (id)_foreignExchangeLineItemsForExchangeInfo:(id)arg1;
- (id)_rewardsLineItemsForRewards:(id)arg1 currencyCode:(id)arg2;
- (id)_feeLineItemsForFees:(id)arg1;
- (id)_subtotalLineItemForTransaction:(id)arg1;
- (id)_totalReceivedLineItemForTransaction:(id)arg1;
- (id)_totalSentLineItemForTransaction:(id)arg1;
- (id)_totalTransferredItemForTransaction:(id)arg1;
- (id)_totalPaidLineItemForTransaction:(id)arg1 isUnqualified:(_Bool)arg2;
- (id)_primaryFundingSourceLineItemForTransaction:(id)arg1 pass:(id)arg2;
- (id)_secondaryFundingSourceLineItemForTransaction:(id)arg1;
- (id)_lineItemsForPeerPaymentTransaction:(id)arg1 pass:(id)arg2;
- (id)_lineItemsForPurchaseTransaction:(id)arg1 pass:(id)arg2;
- (id)_lineItemsForWithdrawalTransaction:(id)arg1 pass:(id)arg2;
- (id)lineItemsForInstallmentPlan:(id)arg1 paymentPass:(id)arg2;
- (id)lineItemsForTransaction:(id)arg1 pass:(id)arg2 associatedTransaction:(id)arg3;

@end
