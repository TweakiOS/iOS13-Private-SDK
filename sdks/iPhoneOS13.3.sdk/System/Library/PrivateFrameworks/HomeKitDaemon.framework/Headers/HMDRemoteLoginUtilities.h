//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface HMDRemoteLoginUtilities : NSObject
{
}

+ (id)ssAccountForACAccount:(id)arg1;
+ (id)idmsAccountForAccountWithUsername:(id)arg1 altDSID:(id)arg2 DSID:(id)arg3;
+ (id)idmsAccountForITunesService:(id)arg1;
+ (id)primaryITunesAccount;
+ (long long)serviceTypeForAccountService:(NSUInteger)arg1;

@end

