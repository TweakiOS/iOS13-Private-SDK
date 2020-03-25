//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSBundle, NSString;

@interface BSPluginBundle : NSObject
{
    NSString *_identifier;
    NSBundle *_bundle;
    NSString *_name;
    NSString *_type;
    NSString *_specifiedClassName;
    NSString *_requiredClassOrProtocolName;
    Class _principalClass;
}

+ (id)bundleWithPath:(id)arg1 availableSpecifications:(id)arg2;
@property(readonly, nonatomic) Class principalClass; // @synthesize principalClass=_principalClass;
@property(readonly, nonatomic) NSBundle *bundle; // @synthesize bundle=_bundle;
@property(copy, nonatomic) NSString *requiredClassOrProtocolName; // @synthesize requiredClassOrProtocolName=_requiredClassOrProtocolName;
@property(copy, nonatomic) NSString *specifiedClassName; // @synthesize specifiedClassName=_specifiedClassName;
@property(readonly, copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
// - (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (id)description;
- (BOOL)loadPlugin:(id /* CDUnknownBlockType */)arg1;
- (BOOL)loadPlugin;
@property(readonly, nonatomic, getter=isLoaded) BOOL loaded; // @dynamic loaded;
@property(readonly, nonatomic, getter=isValid) BOOL valid; // @dynamic valid;
- (id)initWithBundle:(id)arg1;

@end
