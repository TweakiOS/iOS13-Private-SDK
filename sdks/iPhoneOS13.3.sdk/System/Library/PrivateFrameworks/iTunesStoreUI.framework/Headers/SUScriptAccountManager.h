//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSLock, NSMutableArray;

@interface SUScriptAccountManager : NSObject
{
    NSMutableArray *_accounts;
    NSLock *_lock;
}

+ (void)endAccountManagerSessionForObject:(id)arg1;
+ (id)beginAccountManagerSessionForObject:(id)arg1;
- (void)_ntsReloadAccounts;
- (void)_dispatchEvent:(id)arg1 forName:(id)arg2;
- (void)_accountsChangedNotification:(id)arg1;
@property(readonly, retain) NSArray *accounts;
- (id)accountForDSID:(id)arg1;
- (void)dealloc;
- (id)init;

@end

