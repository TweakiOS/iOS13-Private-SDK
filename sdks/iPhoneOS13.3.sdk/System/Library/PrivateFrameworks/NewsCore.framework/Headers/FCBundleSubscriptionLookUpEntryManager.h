//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FCBundleSubscriptionLookUpEntry, FCKeyValueStore;

@interface FCBundleSubscriptionLookUpEntryManager : NSObject
{
    FCBundleSubscriptionLookUpEntry *_bundleSubscriptionLookUpEntry;
    FCKeyValueStore *_localStore;
}

@property(retain, nonatomic) FCKeyValueStore *localStore; // @synthesize localStore=_localStore;
@property(retain, nonatomic) FCBundleSubscriptionLookUpEntry *bundleSubscriptionLookUpEntry; // @synthesize bundleSubscriptionLookUpEntry=_bundleSubscriptionLookUpEntry;
// - (void).cxx_destruct;
- (void)cleanupStaleExpiredEntry;
- (void)updateEntry:(id)arg1;
- (void)addBundleChannelIDs:(id)arg1 purchaseID:(id)arg2 inTrialPeriod:(BOOL)arg3 isPurchaser:(BOOL)arg4 isAmplifyUser:(BOOL)arg5;
- (id)_bundleSubscriptionLookupEntryForPurchaseID:(id)arg1;
- (void)loadLocalCachesFromStore;
- (id)initWithLocalStore:(id)arg1;

@end

