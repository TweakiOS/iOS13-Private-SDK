//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AKAppleIDAuthenticationContext;

@interface AKGrandSlamResponseHandler : NSObject
{
    AKAppleIDAuthenticationContext *_context;
}

@property(retain, nonatomic) AKAppleIDAuthenticationContext *context; // @synthesize context=_context;
- (void)_revokeDeviceTrust;
- (void)_handleInvalidMasterTokenWithSubErrorCode:(long long)arg1;
- (void)handleResponseError:(id)arg1;
- (id)initWithContext:(id)arg1;

@end
