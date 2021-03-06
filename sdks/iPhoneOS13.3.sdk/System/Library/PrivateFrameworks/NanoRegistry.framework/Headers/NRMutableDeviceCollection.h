//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoRegistry/NRMutableStateBase.h>

#import <NanoRegistry/NRMutableStateParentDelegate-Protocol.h>

@class NRMutableDevice, NRPBMutableDeviceCollection, NSMutableDictionary, NSUUID;

@interface NRMutableDeviceCollection : NRMutableStateBase <NRMutableStateParentDelegate, NSFastEnumeration>
{
    NRPBMutableDeviceCollection *_protobuf;
    NSMutableDictionary *_deviceCollection;
    NSMutableDictionary *_childMap;
}

+ (BOOL)supportsSecureCoding;
+ (id)diffFrom:(id)arg1 to:(id)arg2;
+ (void)parseDiff:(id)arg1 forPropertyChange:(id)arg2 withBlock:(id /* CDUnknownBlockType */)arg3;
@property(retain, nonatomic) NSMutableDictionary *childMap; // @synthesize childMap=_childMap;
@property(retain, nonatomic) NSMutableDictionary *deviceCollection; // @synthesize deviceCollection=_deviceCollection;
@property(retain, nonatomic) NRPBMutableDeviceCollection *protobuf; // @synthesize protobuf=_protobuf;
// - (void).cxx_destruct;
- (NSUInteger)countByEnumeratingWithState:(CDStruct_70511ce9 )arg1 objects:(id )arg2 count:(NSUInteger)arg3;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithProtobuf:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_createIndex;
- (void)child:(id)arg1 didApplyDiff:(id)arg2;
- (id)applyDiff:(id)arg1 upOnly:(BOOL)arg2 notifyParent:(BOOL)arg3 unconditional:(BOOL)arg4;
- (void)invalidate;
- (NSUInteger)count;
- (id)allPairingIDs;
- (id)deviceForPairingID:(id)arg1;
- (void)removeDeviceForPairingID:(id)arg1;
- (void)setDevice:(id)arg1 forPairingID:(id)arg2;
- (id)init;
@property(readonly, nonatomic, getter=paired) BOOL isPaired;
- (id)_diffsToChangeActiveDeviceToDeviceID:(id)arg1;
@property(retain, nonatomic) NSUUID *activeDeviceID;
@property(readonly, nonatomic) NRMutableDevice *activeDevice;

@end

