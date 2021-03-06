//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDNetworkRouterFirewallRuleManagerBackingStoreFetchHelper.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class CKServerChangeToken, HMBMirrorInput, NSSet;

@interface HMDNetworkRouterFirewallRuleCloudZoneFetchInfo : HMDNetworkRouterFirewallRuleManagerBackingStoreFetchHelper <HMFLogging>
{
    NSSet *_interestedRecordIDs;
    CKServerChangeToken *_changeToken;
    CKServerChangeToken *_originalChangeToken;
    HMBMirrorInput *_mirrorInput;
}

+ (id)logCategory;
@property(retain, nonatomic) HMBMirrorInput *mirrorInput; // @synthesize mirrorInput=_mirrorInput;
@property(readonly, nonatomic) CKServerChangeToken *originalChangeToken; // @synthesize originalChangeToken=_originalChangeToken;
@property(retain, nonatomic) CKServerChangeToken *changeToken; // @synthesize changeToken=_changeToken;
@property(readonly, nonatomic) NSSet *interestedRecordIDs; // @synthesize interestedRecordIDs=_interestedRecordIDs;
// - (void).cxx_destruct;
- (void)finishWithError:(id)arg1;
- (id)initWithOptions:(id)arg1 changeToken:(id)arg2 promise:(id)arg3 database:(id)arg4 useAnonymousRequests:(BOOL)arg5 interestedRecordIDs:(id)arg6 mirrorInput:(id)arg7;

@end

