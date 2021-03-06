//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@interface PKDiscoveryTrigger : NSObject <NSSecureCoding, NSCopying>
{
    long long _type;
    long long _maxActivationCount;
}

+ (BOOL)supportsSecureCoding;
+ (id)discoveryTriggerWithDictionary:(id)arg1;
@property(nonatomic) long long maxActivationCount; // @synthesize maxActivationCount=_maxActivationCount;
@property(nonatomic) long long type; // @synthesize type=_type;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end

