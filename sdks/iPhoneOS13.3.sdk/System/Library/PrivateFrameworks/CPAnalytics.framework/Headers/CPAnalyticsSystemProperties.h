//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface CPAnalyticsSystemProperties : NSObject
{
    NSMutableDictionary *_systemProperties;
    NSMutableDictionary *_dynamicProperties;
}

@property(retain, nonatomic) NSMutableDictionary *dynamicProperties; // @synthesize dynamicProperties=_dynamicProperties;
@property(retain, nonatomic) NSMutableDictionary *systemProperties; // @synthesize systemProperties=_systemProperties;
// - (void).cxx_destruct;
- (NSObject )propertyForKey:(id)arg1 forEventName:(id)arg2 withPayload:(id)arg3;
- (void)addDynamicProperty:(id)arg1 withProvider:(id)arg2;
- (void)addProperty:(id)arg1 withValue:(NSObject )arg2;
- (id)init;

@end

