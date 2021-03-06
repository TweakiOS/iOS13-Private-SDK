//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSString;

@interface CALNNotificationSound : NSObject <NSCopying, NSSecureCoding>
{
    long long _alertType;
    NSString *_alertTopic;
}

+ (BOOL)supportsSecureCoding;
+ (id)soundWithAlertType:(long long)arg1 alertTopic:(id)arg2;
@property(readonly, copy, nonatomic) NSString *alertTopic; // @synthesize alertTopic=_alertTopic;
@property(readonly, nonatomic) long long alertType; // @synthesize alertType=_alertType;
// - (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)mutableCopyWithZone:(_NSZone )arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)description;
- (BOOL)isEqualToSound:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (id)init;
- (id)_initWithAlertType:(long long)arg1 alertTopic:(id)arg2;

@end

