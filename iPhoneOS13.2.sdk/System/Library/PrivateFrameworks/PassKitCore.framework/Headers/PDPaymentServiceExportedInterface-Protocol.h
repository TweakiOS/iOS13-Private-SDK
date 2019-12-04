//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PassKitCore/PDXPCServiceExportedInterface-Protocol.h>

@class NSCalendar, NSData, NSDate, NSSet, NSString, PKApplyWebServiceApplicationDeleteRequest, PKApplyWebServiceApplyRequest, PKApplyWebServiceDocumentSubmissionRequest, PKApplyWebServiceTermsRequest, PKExpressPassInformation, PKMerchant, PKPaymentApplication, PKPaymentProductsActionRequest, PKPaymentTransaction, PKPaymentWebServiceContext;

@protocol PDPaymentServiceExportedInterface <PDXPCServiceExportedInterface>
- (void)willPassWithUniqueIdentifierAutomaticallyBecomeDefault:(NSString *)arg1 completion:(void (^)(_Bool))arg2;
- (void)passOwnershipTokenWithIdentifier:(NSString *)arg1 completion:(void (^)(NSString *))arg2;
- (void)storePassOwnershipToken:(NSString *)arg1 withIdentifier:(NSString *)arg2;
- (void)setDeviceCheckInContextBuildVersion:(NSString *)arg1 outstandingAction:(long long)arg2 forRegion:(NSString *)arg3;
- (void)performDeviceCheckInWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (void)performProductActionRequest:(PKPaymentProductsActionRequest *)arg1 completion:(void (^)(PKPaymentAvailableProductsResponse *, NSError *))arg2;
- (void)productsWithCompletion:(void (^)(PKPaymentAvailableProductsResponse *, NSError *))arg1;
- (void)noteAccountDeletedWithCompletion:(void (^)(void))arg1;
- (void)recomputeCategoryVisualizationMangitudesForPassUniqueID:(NSString *)arg1 style:(long long)arg2;
- (void)categoryVisualizationMagnitudesForPassUniqueID:(NSString *)arg1 completion:(void (^)(NSSet *))arg2;
- (void)transactionsRequiringReviewForAccountWithIdentifier:(NSString *)arg1 completion:(void (^)(NSSet *))arg2;
- (void)submitTransactionAnswerForTransaction:(NSString *)arg1 questionType:(unsigned long long)arg2 answer:(NSString *)arg3 completion:(void (^)(NSError *))arg4;
- (void)submitDeleteRequest:(PKApplyWebServiceApplicationDeleteRequest *)arg1 completion:(void (^)(NSError *))arg2;
- (void)submitTermsRequest:(PKApplyWebServiceTermsRequest *)arg1 completion:(void (^)(PKApplyWebServiceApplyResponse *, NSError *))arg2;
- (void)submitDocumentRequest:(PKApplyWebServiceDocumentSubmissionRequest *)arg1 completion:(void (^)(PKApplyWebServiceApplyResponse *, NSError *))arg2;
- (void)submitApplyRequest:(PKApplyWebServiceApplyRequest *)arg1 completion:(void (^)(PKApplyWebServiceApplyResponse *, NSError *))arg2;
- (void)featureApplicationWithIdentifier:(NSString *)arg1 completion:(void (^)(PKFeatureApplication *))arg2;
- (void)featureApplicationsForProvisioningWithCompletion:(void (^)(NSArray *, NSError *))arg1;
- (void)featureApplicationsWithCompletion:(void (^)(NSArray *))arg1;
- (void)requiresUpgradedPasscodeWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (void)enforceUpgradedPasscodePolicyWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (void)disbursementVoucherWithDisbursementSource:(unsigned long long)arg1 disbursementTarget:(unsigned long long)arg2 bundleIdentifier:(NSString *)arg3 teamIdentifier:(NSString *)arg4 completion:(void (^)(PKDisbursementVoucher *))arg5;
- (void)installmentPlansWithTransactionReferenceIdentifier:(NSString *)arg1 completion:(void (^)(NSSet *))arg2;
- (void)removeMapsDataForTransactionWithIdentifier:(NSString *)arg1 forPassUniqueIdentifier:(NSString *)arg2 issueReportIdentifier:(NSString *)arg3 completion:(void (^)(PKPaymentTransaction *))arg4;
- (void)insertOrUpdatePaymentTransaction:(PKPaymentTransaction *)arg1 forPassUniqueIdentifier:(NSString *)arg2 paymentApplication:(PKPaymentApplication *)arg3 handler:(void (^)(PKPaymentTransaction *))arg4;
- (void)downloadAllPaymentPassesWithHandler:(void (^)(void))arg1;
- (void)initializeSecureElement:(void (^)(_Bool))arg1;
- (void)initializeSecureElementIfNecessaryWithHandler:(void (^)(_Bool, NSData *, NSData *))arg1;
- (void)removeExpressPassWithUniqueIdentifier:(NSString *)arg1 completion:(void (^)(_Bool, NSSet *))arg2;
- (void)removeExpressPassesWithCardType:(long long)arg1 completion:(void (^)(_Bool, NSSet *))arg2;
- (void)conflictingExpressPassIdentifiersForPassInformation:(PKExpressPassInformation *)arg1 withReferenceExpressState:(NSSet *)arg2 completion:(void (^)(NSSet *))arg3;
- (void)conflictingExpressPassIdentifiersForPassInformation:(PKExpressPassInformation *)arg1 withCompletion:(void (^)(NSSet *))arg2;
- (void)setExpressWithPassInformation:(PKExpressPassInformation *)arg1 credential:(NSData *)arg2 completion:(void (^)(_Bool, NSSet *))arg3;
- (void)expressPassInformationForMode:(NSString *)arg1 withHandler:(void (^)(PKExpressPassInformation *))arg2;
- (void)expressPassesInformationWithHandler:(void (^)(NSSet *))arg1;
- (void)expressPassesInformationWithAutomaticSelectionTechnologyType:(long long)arg1 handler:(void (^)(NSSet *))arg2;
- (void)expressPassesInformationWithCardType:(long long)arg1 handler:(void (^)(NSSet *))arg2;
- (void)expressPassInformationWithPassUniqueIdentifier:(NSString *)arg1 handler:(void (^)(PKExpressPassInformation *))arg2;
- (void)mapsMerchantsWithCompletion:(void (^)(NSSet *))arg1;
- (void)passUniqueIdentifierForTransactionWithServiceIdentifier:(NSString *)arg1 completion:(void (^)(NSString *))arg2;
- (void)passUniqueIdentifierForTransactionWithIdentifier:(NSString *)arg1 completion:(void (^)(NSString *))arg2;
- (void)installmentTransactionsForInstallmentPlanIdentifier:(NSString *)arg1 completion:(void (^)(NSSet *))arg2;
- (void)transactionWithReferenceIdentifier:(NSString *)arg1 completion:(void (^)(PKPaymentTransaction *))arg2;
- (void)transactionWithServiceIdentifier:(NSString *)arg1 completion:(void (^)(PKPaymentTransaction *))arg2;
- (void)transactionWithTransactionIdentifier:(NSString *)arg1 completion:(void (^)(PKPaymentTransaction *))arg2;
- (void)pendingTransactionsForPassWithUniqueIdentifier:(NSString *)arg1 withTransactionSource:(unsigned long long)arg2 withBackingData:(unsigned long long)arg3 startDate:(NSDate *)arg4 endDate:(NSDate *)arg5 limit:(long long)arg6 completion:(void (^)(NSSet *))arg7;
- (void)approvedTransactionsForPassWithUniqueIdentifier:(NSString *)arg1 withTransactionSource:(unsigned long long)arg2 withBackingData:(unsigned long long)arg3 startDate:(NSDate *)arg4 endDate:(NSDate *)arg5 limit:(long long)arg6 completion:(void (^)(NSSet *))arg7;
- (void)transactionsForPaymentPassWithUniqueIdentifier:(NSString *)arg1 withTransactionType:(long long)arg2 withTransactionSource:(unsigned long long)arg3 withBackingData:(unsigned long long)arg4 startDate:(NSDate *)arg5 endDate:(NSDate *)arg6 limit:(long long)arg7 completion:(void (^)(NSSet *))arg8;
- (void)transactionsForPaymentPassWithuniqueIdentifier:(NSString *)arg1 withMerchantCategory:(long long)arg2 withTransactionSource:(unsigned long long)arg3 withBackingData:(unsigned long long)arg4 startDate:(NSDate *)arg5 endDate:(NSDate *)arg6 limit:(long long)arg7 completion:(void (^)(NSSet *))arg8;
- (void)transactionsForPaymentPassWithUniqueIdentifier:(NSString *)arg1 matchingMerchant:(PKMerchant *)arg2 withTransactionSource:(unsigned long long)arg3 withBackingData:(unsigned long long)arg4 limit:(long long)arg5 completion:(void (^)(NSSet *))arg6;
- (void)transactionsForPaymentPassWithUniqueIdentifier:(NSString *)arg1 withMapsIdentifier:(unsigned long long)arg2 withTransactionSource:(unsigned long long)arg3 withBackingData:(unsigned long long)arg4 limit:(long long)arg5 completion:(void (^)(NSSet *))arg6;
- (void)transactionsForPaymentPassWithUniqueIdentifier:(NSString *)arg1 withPeerPaymentCounterpartHandle:(NSString *)arg2 withTransactionSource:(unsigned long long)arg3 withBackingData:(unsigned long long)arg4 limit:(long long)arg5 completion:(void (^)(NSSet *))arg6;
- (void)transactionsWithTransactionSource:(unsigned long long)arg1 withBackingData:(unsigned long long)arg2 limit:(long long)arg3 completion:(void (^)(NSSet *))arg4;
- (void)cashbackByPeriodFromPassUniqueIdentifier:(NSString *)arg1 withStartDate:(NSDate *)arg2 endDate:(NSDate *)arg3 calendar:(NSCalendar *)arg4 calendarUnit:(unsigned long long)arg5 type:(long long)arg6 completion:(void (^)(NSArray *))arg7;
- (void)transactionCountByPeriodForPassWithUniqueIdentifier:(NSString *)arg1 withTransactionSource:(unsigned long long)arg2 withBackingData:(unsigned long long)arg3 calendar:(NSCalendar *)arg4 unit:(unsigned long long)arg5 includePurchaseTotal:(_Bool)arg6 completion:(void (^)(NSArray *))arg7;
- (void)transactionsForPassWithUniqueIdentifier:(NSString *)arg1 withTransactionSource:(unsigned long long)arg2 withBackingData:(unsigned long long)arg3 startDate:(NSDate *)arg4 endDate:(NSDate *)arg5 orderedByDate:(long long)arg6 limit:(long long)arg7 completion:(void (^)(NSSet *))arg8;
- (void)transactionsForPassWithUniqueIdentifier:(NSString *)arg1 withTransactionSource:(unsigned long long)arg2 withBackingData:(unsigned long long)arg3 startDate:(NSDate *)arg4 endDate:(NSDate *)arg5 limit:(long long)arg6 completion:(void (^)(NSSet *))arg7;
- (void)transactionsForPaymentPassWithUniqueIdentifier:(NSString *)arg1 withTransactionSource:(unsigned long long)arg2 withBackingData:(unsigned long long)arg3 limit:(long long)arg4 completion:(void (^)(NSSet *))arg5;
- (void)defaultPaymentPassUniqueIdentifier:(void (^)(NSString *))arg1;
- (void)setDefaultPaymentPassUniqueIdentifier:(NSString *)arg1 handler:(void (^)(void))arg2;
- (void)sharedPaymentWebServiceContextWithHandler:(void (^)(PKPaymentWebServiceContext *))arg1;
- (void)setSharedPaymentWebServiceContext:(PKPaymentWebServiceContext *)arg1 handler:(void (^)(void))arg2;
@end
