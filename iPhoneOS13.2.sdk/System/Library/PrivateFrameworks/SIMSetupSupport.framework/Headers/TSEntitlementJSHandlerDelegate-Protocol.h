//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class NSString;

@protocol TSEntitlementJSHandlerDelegate 
- (void)accountPendingRelease;
- (void)accountCancelled;
- (void)didTransferPlanSuccessfullyWithEid:(NSString *)arg1 imei:(NSString *)arg2 meid:(NSString *)arg3 iccid:(NSString *)arg4 alternateSDMP:(NSString *)arg5 state:(NSString *)arg6;
- (void)didPurchasePlanSuccessfullyWithEid:(NSString *)arg1 imei:(NSString *)arg2 meid:(NSString *)arg3 iccid:(NSString *)arg4 alternateSDMP:(NSString *)arg5;
@end
