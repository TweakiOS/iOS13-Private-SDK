//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RelevanceEngine/REFeatureValue.h>

@class NSString;

@interface _REStringFeatureValue : REFeatureValue
{
    NSString *_value;
}

+ (id)featureValueWithString:(id)arg1;
// - (void).cxx_destruct;
// - (id)copyWithZone:(_NSZone )arg1;
- (NSUInteger)_integralFeatureValue;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (id)stringValue;
- (NSUInteger)type;
- (id)initWithValue:(id)arg1;

@end

