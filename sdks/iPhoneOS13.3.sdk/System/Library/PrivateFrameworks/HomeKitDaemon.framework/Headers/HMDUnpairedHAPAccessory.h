//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDUnassociatedAccessory.h>

@class NSArray, NSData, NSMutableArray;

@interface HMDUnpairedHAPAccessory : HMDUnassociatedAccessory
{
    NSMutableArray *_accessoryServers;
    long long _certificationStatus;
    NSData *_setupHash;
}

@property(retain, nonatomic) NSData *setupHash; // @synthesize setupHash=_setupHash;
@property(nonatomic) long long certificationStatus; // @synthesize certificationStatus=_certificationStatus;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (long long)associationOptions;
- (BOOL)hasIPLink;
- (BOOL)hasBTLELink;
- (id)descriptionForTransportTypes;
@property(readonly, nonatomic) NSUInteger transportTypes;
- (id)preferredAccessoryServer;
- (void)removeAccessoryServer:(id)arg1;
- (void)addAccessoryServer:(id)arg1;
@property(readonly, copy) NSArray *accessoryServers;
- (void)identifyWithCompletionHandler:(id /* CDUnknownBlockType */)arg1;
- (BOOL)isReachable;
- (id)dumpDescription;
- (id)descriptionWithPointer:(BOOL)arg1 additionalDescription:(id)arg2;
- (id)initWithIdentifier:(id)arg1 name:(id)arg2 category:(id)arg3 messageDispatcher:(id)arg4;
- (id)initWithAccessoryServer:(id)arg1 messageDispatcher:(id)arg2;

@end

