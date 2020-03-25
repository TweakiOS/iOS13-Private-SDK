//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSString, PKPaymentRequest, PKRemoteDevice;

@interface PKRemotePaymentRequest : NSObject <NSSecureCoding>
{
    PKRemoteDevice *_device;
    PKPaymentRequest *_paymentRequest;
    NSString *_selectedApplicationIdentifier;
    NSString *_identifier;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) NSString *selectedApplicationIdentifier; // @synthesize selectedApplicationIdentifier=_selectedApplicationIdentifier;
@property(retain, nonatomic) PKPaymentRequest *paymentRequest; // @synthesize paymentRequest=_paymentRequest;
@property(readonly, nonatomic) PKRemoteDevice *device; // @synthesize device=_device;
// - (void).cxx_destruct;
- (id)description;
- (BOOL)isEqualToRemoteRequest:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDevice:(id)arg1 identifier:(id)arg2;
- (id)initWithDevice:(id)arg1;

@end
