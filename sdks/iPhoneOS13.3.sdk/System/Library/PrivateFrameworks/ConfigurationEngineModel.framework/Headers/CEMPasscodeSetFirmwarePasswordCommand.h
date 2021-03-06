//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ConfigurationEngineModel/CEMCommandBase.h>

#import <ConfigurationEngineModel/CEMRegisteredTypeProtocol-Protocol.h>

@class NSNumber, NSString;

@interface CEMPasscodeSetFirmwarePasswordCommand : CEMCommandBase <CEMRegisteredTypeProtocol>
{
    NSString *_payloadCurrentPassword;
    NSString *_payloadNewPassword;
    NSNumber *_payloadAllowOroms;
}

+ (id)buildRequiredOnlyWithIdentifier:(id)arg1 withNewPassword:(id)arg2;
+ (id)buildWithIdentifier:(id)arg1 withCurrentPassword:(id)arg2 withNewPassword:(id)arg3 withAllowOroms:(id)arg4;
+ (id)allowedPayloadKeys;
+ (id)registeredIdentifier;
+ (id)registeredClassName;
@property(copy, nonatomic) NSNumber *payloadAllowOroms; // @synthesize payloadAllowOroms=_payloadAllowOroms;
@property(copy, nonatomic) NSString *payloadNewPassword; // @synthesize payloadNewPassword=_payloadNewPassword;
@property(copy, nonatomic) NSString *payloadCurrentPassword; // @synthesize payloadCurrentPassword=_payloadCurrentPassword;
// - (void).cxx_destruct;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (BOOL)loadPayload:(id)arg1 error:(id )arg2;
- (int)executionLevel;
- (BOOL)mustBeSupervised;

@end

