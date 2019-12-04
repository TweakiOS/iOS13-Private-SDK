//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class HMDSyncOperationOptions, HMFTimer, NSString, NSUUID;

@interface HMDSyncOperation : HMFObject
{
    NSUUID *_identifier;
    unsigned long long _operationType;
    HMFTimer *_delayTimer;
    id /* block */ _operationBlock;
    HMDSyncOperationOptions *_options;
}

+ (id)cloudZoneFetchSyncOperation:(id)arg1 cloudConflict:(_Bool)arg2 block:(id /* block */)arg3;
+ (id)cloudZonePushSyncOperation:(id)arg1 block:(id /* block */)arg2;
+ (id)cloudFetchSyncOperationWithCloudConflict:(_Bool)arg1 block:(id /* block */)arg2;
+ (id)cloudVerifyAccountSyncOperationWithBlock:(id /* block */)arg1;
+ (id)cloudForcePushSyncOperationWithBlock:(id /* block */)arg1;
+ (id)cloudPushSyncOperationWithBlock:(id /* block */)arg1;
+ (id)cancelOperationWithBlock:(id /* block */)arg1;
+ (id)queryDatabaseOperationWithBlock:(id /* block */)arg1;
@property(readonly, nonatomic) HMDSyncOperationOptions *options; // @synthesize options=_options;
@property(copy, nonatomic) id /* block */ operationBlock; // @synthesize operationBlock=_operationBlock;
@property(retain, nonatomic) HMFTimer *delayTimer; // @synthesize delayTimer=_delayTimer;
@property(readonly, nonatomic) unsigned long long operationType; // @synthesize operationType=_operationType;
@property(readonly, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) NSString *zoneName;
- (id)description;
- (id)_initWithOperationType:(unsigned long long)arg1 options:(id)arg2 syncBlock:(id /* block */)arg3;

@end
