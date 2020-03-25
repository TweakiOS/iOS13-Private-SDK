//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSDictionary, NSNumber, NSString, NSUserDefaults;

@interface ICDefaults : NSObject
{
    NSUserDefaults *_userDefaults;
    BOOL _bypassBagSanityChecks;
    NSUserDefaults *_internalDefaults;
}

+ (id)standardDefaults;
@property(readonly, nonatomic) NSUserDefaults *internalDefaults; // @synthesize internalDefaults=_internalDefaults;
@property(nonatomic) BOOL bypassBagSanityChecks; // @synthesize bypassBagSanityChecks=_bypassBagSanityChecks;
// - (void).cxx_destruct;
- (void)_setOrRemoveObject:(id)arg1 forKey:(id)arg2;
- (BOOL)_shouldSpoofIPhoneRequestProperties;
- (void)synchronize;
@property(nonatomic, getter=isGrazingPathEnabled) BOOL grazingPathEnabled;
@property(nonatomic, getter=isExplicitContentAllowedForExpirationYear) BOOL explicitContentAllowedForExpirationYear;
@property(nonatomic, getter=isExplicitContentAllowedForCurrentYear) BOOL explicitContentAllowedForCurrentYear;
@property(copy, nonatomic) NSDate *ageVerificationExpirationDate;
@property(nonatomic) BOOL shouldRunAgeVerification;
@property(readonly, nonatomic) BOOL shouldForceiPhoneBehaviors;
@property(readonly, copy, nonatomic) NSNumber *networkTypeOverride;
@property(readonly, copy, nonatomic) NSString *productPlatformOverride;
@property(readonly, copy, nonatomic) NSString *productVersionOverride;
@property(readonly, copy, nonatomic) NSString *hardwarePlatformOverride;
@property(readonly, copy, nonatomic) NSNumber *fairPlayDeviceTypeOverride;
@property(readonly, copy, nonatomic) NSString *deviceModelOverride;
@property(readonly, copy, nonatomic) NSNumber *deviceClassOverride;
@property(nonatomic) BOOL ignoreExtendedCertificateValidation;
@property(copy, nonatomic) NSDictionary *lastKnownSubscriptionStatusBaseCacheKey;
@property(copy, nonatomic) NSDictionary *lastKnownLocalStoreAccountProperties;
@property(copy, nonatomic) NSDictionary *lastKnownUserAgeVerificationState;
@property(nonatomic) double lastAuthenticationDialogResponseTime;
@property(copy, nonatomic) NSDictionary *authServiceClientTokenCache;
@property(readonly, copy, nonatomic) NSNumber *authServiceClientTokenTimeToLive;
@property(copy, nonatomic) NSDate *lastAllowedInteractiveAuthenticationTime;
@property(copy, nonatomic) NSDictionary *lastCookieHeadersForRevokingMusicUserTokens;
@property(copy, nonatomic) NSNumber *lastActiveAccountDSID;
@property(copy, nonatomic) NSDictionary *mediaLibraryAccessApplicationIdentifiersWithTCCAcceptanceDates;
@property(copy, nonatomic) NSDictionary *pushNotificationState;
@property(copy, nonatomic) NSDictionary *cachedMusicUserTokens;
@property(copy, nonatomic) NSDictionary *cachedSubscriptionStatus;
@property(readonly, nonatomic) NSString *defaultStoreFront;
@property(copy, nonatomic) NSString *cloudMediaLibraryUID;
- (id)init;

@end
