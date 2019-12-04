//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class HMFVersion, NSData, NSString;

@protocol HMDNetworkRouterFirewallRuleManagerDebug 
- (void)forceFetchCloudChangesAndForceChangeNotifications:(_Bool)arg1 completion:(void (^)(NSSet *, NSError *))arg2;
- (void)removeOverridesForProductGroup:(NSString *)arg1 productNumber:(NSString *)arg2 completion:(void (^)(NSError *))arg3;
- (void)removeAllOverridesWithCompletion:(void (^)(NSError *))arg1;
- (void)addOverrides:(NSData *)arg1 completion:(void (^)(NSError *))arg2;
- (void)setOverrides:(NSData *)arg1 completion:(void (^)(NSError *))arg2;
- (void)removeAllLocalRulesWithCompletion:(void (^)(NSError *))arg1;
- (void)dumpLocalRulesForProductGroup:(NSString *)arg1 productNumber:(NSString *)arg2 firmwareVersion:(HMFVersion *)arg3 ignoreOverrides:(_Bool)arg4 rawOutput:(_Bool)arg5 completion:(void (^)(NSError *, NSString *))arg6;
- (void)dumpLocalRulesForProductGroup:(NSString *)arg1 ignoreOverrides:(_Bool)arg2 rawOutput:(_Bool)arg3 completion:(void (^)(NSError *, NSString *))arg4;
- (void)dumpAllLocalRulesIgnoringOverrides:(_Bool)arg1 rawOutput:(_Bool)arg2 completion:(void (^)(NSError *, NSString *))arg3;
- (void)dumpCloudRecordsForProductGroup:(NSString *)arg1 productNumber:(NSString *)arg2 rawOutput:(_Bool)arg3 completion:(void (^)(NSError *, NSString *))arg4;
- (void)listCloudRecordsForProductGroup:(NSString *)arg1 rawOutput:(_Bool)arg2 completion:(void (^)(NSError *, NSString *))arg3;
@end
