//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSString, NSUUID;

@interface DNDSPairedDevice : NSObject <NSCopying>
{
    NSString *_deviceIdentifier;
    NSUInteger _deviceClass;
    NSUInteger _syncProtocolVersion;
    NSUUID *_pairingIdentifier;
    NSString *_pairingDataStore;
}

@property(readonly, copy, nonatomic) NSString *pairingDataStore; // @synthesize pairingDataStore=_pairingDataStore;
@property(readonly, copy, nonatomic) NSUUID *pairingIdentifier; // @synthesize pairingIdentifier=_pairingIdentifier;
@property(readonly, nonatomic) NSUInteger syncProtocolVersion; // @synthesize syncProtocolVersion=_syncProtocolVersion;
@property(readonly, nonatomic) NSUInteger deviceClass; // @synthesize deviceClass=_deviceClass;
@property(readonly, copy, nonatomic) NSString *deviceIdentifier; // @synthesize deviceIdentifier=_deviceIdentifier;
// - (void).cxx_destruct;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (id)initWithDeviceIdentifier:(id)arg1 deviceClass:(NSUInteger)arg2 syncProtocolVersion:(NSUInteger)arg3 pairingIdentifier:(id)arg4 pairingDataStore:(id)arg5;

@end

