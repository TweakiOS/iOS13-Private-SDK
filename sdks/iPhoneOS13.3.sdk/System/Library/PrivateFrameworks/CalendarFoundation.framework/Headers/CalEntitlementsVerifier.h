//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CalEntitlementsVerifier : NSObject
{
}

+ (BOOL)currentProcessHasBirthdayModificationEntitlement;
+ (BOOL)currentProcessHasSyncClientEntitlement;
+ (BOOL)currentProcessHasContactsUIEntitlement;
+ (BOOL)currentProcessHasLocationdEffectiveBundleEntitlement;
+ (BOOL)currentProcessHasWatchOSMutableDatabaseEntitlement;
+ (BOOL)currentProcessHasAllowSuggestionsEntitlement;
+ (BOOL)currentProcessIsDataAccess;
+ (BOOL)currentProcessIsCalendarDaemon;
+ (BOOL)currentProcessIsFirstPartyCalendarApp;
+ (BOOL)currentProcessHasBooleanEntitlement:(id)arg1;

@end
