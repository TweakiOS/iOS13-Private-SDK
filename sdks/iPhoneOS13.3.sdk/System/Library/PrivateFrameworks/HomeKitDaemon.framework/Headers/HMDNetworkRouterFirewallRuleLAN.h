//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDNetworkRouterFirewallRule.h>

@interface HMDNetworkRouterFirewallRuleLAN : HMDNetworkRouterFirewallRule
{
    BOOL _allowInterAccessoryConnections;
    unsigned char _direction;
    BOOL _requiredForHAPFunctionality;
    NSUInteger _purpose;
}

+ (id)createWithJSONDictionary:(NSDictionary )arg1 name:(id)arg2 critical:(BOOL)arg3 purpose:(NSUInteger)arg4 allowInterAccessoryConnections:(BOOL)arg5 direction:(unsigned char)arg6 requiredForHAPFunctionality:(BOOL)arg7 ruleDictionary:(NSDictionary )arg8 error:(id )arg9;
+ (id)createWithJSONDictionary:(NSDictionary )arg1 error:(id )arg2;
+ (BOOL)__decodeTransportProtocolFromJSONDictionary:(NSDictionary )arg1 key:(id)arg2 transportProtocol:(unsigned char )arg3 error:(id )arg4;
+ (BOOL)__decodeDirection:(NSDictionary )arg1 direction:(unsigned char )arg2 error:(id )arg3;
+ (BOOL)__decodeType:(NSDictionary )arg1 type:(unsigned char )arg2 error:(id )arg3;
+ (BOOL)__decodeFlags:(NSDictionary )arg1 critical:(BOOL )arg2 allowInterAccessoryConnections:(BOOL )arg3 requiredForHAPFunctionality:(BOOL )arg4 error:(id )arg5;
+ (BOOL)__decodePurpose:(NSDictionary )arg1 purpose:(NSUInteger )arg2 error:(id )arg3;
@property(readonly, nonatomic, getter=isRequiredForHAPFunctionality) BOOL requiredForHAPFunctionality; // @synthesize requiredForHAPFunctionality=_requiredForHAPFunctionality;
@property(readonly, nonatomic) unsigned char direction; // @synthesize direction=_direction;
@property(readonly, nonatomic, getter=areConnectionsWithOtherAccessoriesAllowed) BOOL allowInterAccessoryConnections; // @synthesize allowInterAccessoryConnections=_allowInterAccessoryConnections;
@property(readonly, nonatomic) NSUInteger purpose; // @synthesize purpose=_purpose;
- (NSDictionary )prettyJSONDictionary;
- (id)attributeDescriptions;
- (id)initWithJSONDictionary:(NSDictionary )arg1 name:(id)arg2 critical:(BOOL)arg3 purpose:(NSUInteger)arg4 allowInterAccessoryConnections:(BOOL)arg5 direction:(unsigned char)arg6 requiredForHAPFunctionality:(BOOL)arg7;

@end
