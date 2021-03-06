//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/PKPaymentWebServiceProxyObjectExportedInterface-Protocol.h>

@class NSXPCConnection, PKPaymentWebService;
@protocol OS_dispatch_queue, PKPaymentWebServiceTargetDeviceProtocol;

@interface PKPaymentWebServiceRemoteProxyTargetDevice : NSObject <PKPaymentWebServiceProxyObjectExportedInterface>
{
    NSObject<OS_dispatch_queue> *_handlerQueue;
    PKPaymentWebService *_webService;
    id <PKPaymentWebServiceTargetDeviceProtocol> _targetDevice;
    NSXPCConnection *_connection;
}

@property(readonly, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
// - (void).cxx_destruct;
- (void)deleteApplePayTrustKeyWithIdentifier:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)createApplePayTrustKeyWithRequest:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)applePayTrustKeyForIdentifier:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)invalidateRemoteProxyTargetDevice;
- (void)archiveBackgroundContext:(id)arg1;
- (void)archiveContext:(id)arg1;
- (void)passOwnershipTokenWithIdentifier:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)storePassOwnershipToken:(id)arg1 withIdentifier:(id)arg2;
- (void)performDeviceCheckInWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)endRequiringUpgradedPasscodeIfNecessary;
- (void)startRequiringUpgradedPasscodeWithPasscodeMeetsPolicy:(BOOL)arg1;
- (void)enforceUpgradedPasscodePolicyWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)notePasscodeUpgradeFlowDidEnd;
- (void)notePasscodeUpgradeFlowWillBeginWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)appleAccountInformationWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)renewAppleAccountWithCompletionHandler:(id /* CDUnknownBlockType */)arg1;
- (void)setDefaultPaymentPassUniqueIdentifier:(id)arg1;
- (void)willPassWithUniqueIdentifierAutomaticallyBecomeDefault:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)updateAccountWithIdentifier:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)deviceMetadataWithFields:(NSUInteger)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)featureApplicationsForProvisioningWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)updatedAccountsForProvisioningWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)supportedFeatureIdentifiersForAccountProvisioningWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)supportedFeatureIdentifiersWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)supportsAccountsWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)supportsPeerPaymentRegistrationWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)removePass:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)addPassData:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)handlePotentialExpressPass:(id)arg1 withCompletion:(id /* CDUnknownBlockType */)arg2;
- (void)validateTransferPreconditionsWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)secureElementOwnershipStateForCurrentUserWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)claimSecureElementForCurrentUserWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)downloadAllPaymentPasses;
- (void)validateAddPreconditionsWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)canProvisionPaymentPassWithPrimaryAccountIdentifier:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)passesOfType:(NSUInteger)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)hasPassesOfType:(NSUInteger)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)setNewAuthRandom:(id /* CDUnknownBlockType */)arg1;
- (void)setNewAuthRandomIfNecessaryReturningPairingState:(id /* CDUnknownBlockType */)arg1;
- (void)noteProvisioningDidEnd;
- (void)noteProvisioningDidBegin;
- (void)noteProvisioningUserInterfaceDidDisappear;
- (void)noteProvisioningUserInterfaceDidAppear;
- (void)paymentSupportedInCurrentRegion:(id /* CDUnknownBlockType */)arg1;
- (void)didRegisterWithRegionMap:(id)arg1 primaryRegionTopic:(id)arg2;
- (void)deleteApplicationWithAID:(id)arg1;
- (void)getProvisioningDataWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)signData:(id)arg1 signatureEntanglementMode:(NSUInteger)arg2 withCompletion:(id /* CDUnknownBlockType */)arg3;
- (void)getTrustedDeviceEnrollmentInfoWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)getRegistrationDataWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)getConfigurationDataWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)queueConnectionToTrustedServiceManagerForPushTopic:(id)arg1 withCompletion:(id /* CDUnknownBlockType */)arg2;
- (void)getContextWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)dealloc;
- (id)initWithWebService:(id)arg1 connection:(id)arg2;
- (id)init;

@end

