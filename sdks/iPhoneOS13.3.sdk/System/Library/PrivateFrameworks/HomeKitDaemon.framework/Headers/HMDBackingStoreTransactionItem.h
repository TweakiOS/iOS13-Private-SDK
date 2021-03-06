//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMDBackingStoreChangeObject-Protocol.h>

@class HMDBackingStoreModelObject, HMFMessage, NSSet;

@interface HMDBackingStoreTransactionItem : HMFObject <HMDBackingStoreChangeObject>
{
    HMDBackingStoreModelObject *_change;
    NSSet *_dependentUUIDs;
    HMFMessage *_message;
}

@property(readonly, nonatomic) HMFMessage *message; // @synthesize message=_message;
@property(readonly, nonatomic) NSSet *dependentUUIDs; // @synthesize dependentUUIDs=_dependentUUIDs;
@property(readonly, nonatomic) HMDBackingStoreModelObject *change; // @synthesize change=_change;
// - (void).cxx_destruct;
- (id)initWithChange:(id)arg1 message:(id)arg2;

@end

