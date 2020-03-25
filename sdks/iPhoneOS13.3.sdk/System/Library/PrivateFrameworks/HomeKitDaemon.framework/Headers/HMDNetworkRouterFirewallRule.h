//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class NSDictionary, NSString;

@interface HMDNetworkRouterFirewallRule : HMFObject <HMFLogging>
{
    BOOL _critical;
    NSString *_name;
    NSDictionary _jsonDictionary;
}

+ (id)__transportProtocolToString:(unsigned char)arg1;
+ (id)logCategory;
@property(readonly, nonatomic) NSDictionary *jsonDictionary; // @synthesize jsonDictionary=_jsonDictionary;
@property(readonly, nonatomic, getter=isCritical) BOOL critical; // @synthesize critical=_critical;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
// - (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *prettyJSONDictionary;
- (id)attributeDescriptions;
- (id)initWithJSONDictionary:(NSDictionary )arg1 critical:(BOOL)arg2;
- (id)initWithJSONDictionary:(NSDictionary )arg1 name:(id)arg2 critical:(BOOL)arg3;

@end
