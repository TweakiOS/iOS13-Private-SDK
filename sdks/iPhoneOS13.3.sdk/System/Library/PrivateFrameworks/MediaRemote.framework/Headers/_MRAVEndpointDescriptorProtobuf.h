//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSMutableArray, NSString, _MRAVOutputDeviceDescriptorProtobuf;

@interface _MRAVEndpointDescriptorProtobuf : PBCodable <NSCopying>
{
    int _connectionType;
    _MRAVOutputDeviceDescriptorProtobuf *_designatedGroupLeader;
    NSString *_instanceIdentifier;
    NSString *_name;
    NSMutableArray *_outputDevices;
    NSMutableArray *_personalOutputDevices;
    NSString *_uniqueIdentifier;
    BOOL _canModifyGroupMembership;
    BOOL _isLocalEndpoint;
    BOOL _isProxyGroupPlayer;
    struct {
        unsigned int connectionType:1;
        unsigned int canModifyGroupMembership:1;
        unsigned int isLocalEndpoint:1;
        unsigned int isProxyGroupPlayer:1;
    } _has;
}

+ (Class)personalOutputDevicesType;
+ (Class)outputDevicesType;
@property(retain, nonatomic) NSMutableArray *personalOutputDevices; // @synthesize personalOutputDevices=_personalOutputDevices;
@property(nonatomic) BOOL canModifyGroupMembership; // @synthesize canModifyGroupMembership=_canModifyGroupMembership;
@property(nonatomic) BOOL isProxyGroupPlayer; // @synthesize isProxyGroupPlayer=_isProxyGroupPlayer;
@property(retain, nonatomic) NSString *instanceIdentifier; // @synthesize instanceIdentifier=_instanceIdentifier;
@property(nonatomic) BOOL isLocalEndpoint; // @synthesize isLocalEndpoint=_isLocalEndpoint;
@property(retain, nonatomic) _MRAVOutputDeviceDescriptorProtobuf *designatedGroupLeader; // @synthesize designatedGroupLeader=_designatedGroupLeader;
@property(retain, nonatomic) NSMutableArray *outputDevices; // @synthesize outputDevices=_outputDevices;
@property(retain, nonatomic) NSString *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
// - (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)personalOutputDevicesAtIndex:(NSUInteger)arg1;
- (NSUInteger)personalOutputDevicesCount;
- (void)addPersonalOutputDevices:(id)arg1;
- (void)clearPersonalOutputDevices;
@property(nonatomic) BOOL hasCanModifyGroupMembership;
- (int)StringAsConnectionType:(id)arg1;
- (id)connectionTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasConnectionType;
@property(nonatomic) int connectionType; // @synthesize connectionType=_connectionType;
@property(nonatomic) BOOL hasIsProxyGroupPlayer;
@property(readonly, nonatomic) BOOL hasInstanceIdentifier;
@property(nonatomic) BOOL hasIsLocalEndpoint;
@property(readonly, nonatomic) BOOL hasDesignatedGroupLeader;
- (id)outputDevicesAtIndex:(NSUInteger)arg1;
- (NSUInteger)outputDevicesCount;
- (void)addOutputDevices:(id)arg1;
- (void)clearOutputDevices;
@property(readonly, nonatomic) BOOL hasUniqueIdentifier;
@property(readonly, nonatomic) BOOL hasName;

@end
