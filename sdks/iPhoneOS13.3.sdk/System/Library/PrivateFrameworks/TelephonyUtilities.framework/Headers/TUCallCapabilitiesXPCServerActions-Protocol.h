//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSString, NSUUID;

@protocol TUCallCapabilitiesXPCServerActions <NSObject>
- (oneway void)endEmergencyCallbackMode;
- (oneway void)cancelPinRequestFromPrimaryDevice;
- (oneway void)requestPinFromPrimaryDevice;
- (oneway void)invalidateAndRefreshThumperCallingProvisioningURLForSenderIdentityWithUUID:(NSUUID *)arg1;
- (oneway void)invalidateAndRefreshWiFiCallingProvisioningURLForSenderIdentityWithUUID:(NSUUID *)arg1;
- (oneway void)setThumperCallingAllowedOnDefaultPairedDevice:(BOOL)arg1 forSenderIdentityWithUUID:(NSUUID *)arg2;
- (oneway void)setThumperCallingAllowed:(BOOL)arg1 onSecondaryDeviceWithID:(NSString *)arg2 forSenderIdentityWithUUID:(NSUUID *)arg3;
- (oneway void)setThumperCallingEnabled:(BOOL)arg1 forSenderIdentityWithUUID:(NSUUID *)arg2;
- (oneway void)setVoLTECallingEnabled:(BOOL)arg1 forSenderIdentityWithUUID:(NSUUID *)arg2;
- (oneway void)setWiFiCallingRoamingEnabled:(BOOL)arg1 forSenderIdentityWithUUID:(NSUUID *)arg2;
- (oneway void)setWiFiCallingEnabled:(BOOL)arg1 forSenderIdentityWithUUID:(NSUUID *)arg2;
- (oneway void)setRelayCallingEnabled:(BOOL)arg1 forDeviceWithID:(NSString *)arg2;
- (oneway void)setRelayCallingEnabled:(BOOL)arg1;
@end
