//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HDSQLitePredicate, NSDate, NSNumber, NSSet, NSString, _HKAuthorizationRecord;

@interface HDReadAuthorizationStatus : NSObject
{
    _HKAuthorizationRecord *_authorizationRecord;
    NSSet *_restrictedSourceEntities;
    NSString *_restrictedBundleIdentifier;
    NSNumber *_deletedObjectBaselineAnchor;
    NSNumber *_objectLimitAnchor;
}

+ (id)notDerminedReadAuthorizationStatus;
+ (id)unrestrictedReadAuthorizationStatus;
@property(readonly, copy, nonatomic) NSNumber *objectLimitAnchor; // @synthesize objectLimitAnchor=_objectLimitAnchor;
@property(readonly, copy, nonatomic) NSNumber *deletedObjectBaselineAnchor; // @synthesize deletedObjectBaselineAnchor=_deletedObjectBaselineAnchor;
@property(readonly, copy, nonatomic) NSString *restrictedBundleIdentifier; // @synthesize restrictedBundleIdentifier=_restrictedBundleIdentifier;
@property(readonly, copy, nonatomic) NSSet *restrictedSourceEntities; // @synthesize restrictedSourceEntities=_restrictedSourceEntities;
@property(readonly, copy, nonatomic) _HKAuthorizationRecord *authorizationRecord; // @synthesize authorizationRecord=_authorizationRecord;
// - (void).cxx_destruct;
- (id)description;
@property(readonly, copy, nonatomic) HDSQLitePredicate *authorizationPredicate;
@property(readonly, nonatomic) BOOL isAuthorizationDetermined;
- (void)disableSharing;
- (void)disableReading;
@property(readonly, nonatomic) BOOL canRead;
@property(readonly, copy, nonatomic) NSDate *objectLimitModifiedDate;
@property(readonly, nonatomic) long long authorizationMode;
@property(readonly, nonatomic) long long authorizationRequest;
@property(readonly, nonatomic) long long authorizationStatus;
- (id)initWithReadAuthorizationStatus:(long long)arg1 authorizationRequest:(long long)arg2 authorizationMode:(long long)arg3 restrictedBundleIdentifier:(id)arg4 restrictedSourceEntities:(id)arg5 deletedObjectBaselineAnchor:(id)arg6 objectLimitAnchor:(id)arg7 objectLimitModifiedDate:(id)arg8;

@end

