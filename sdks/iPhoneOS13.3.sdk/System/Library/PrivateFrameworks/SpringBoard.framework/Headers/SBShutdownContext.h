//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSString;

@interface SBShutdownContext : NSObject <NSCopying>
{
    NSString *_reason;
    BOOL _fromUserPowerDown;
}

@property(nonatomic) BOOL fromUserPowerDown; // @synthesize fromUserPowerDown=_fromUserPowerDown;
@property(readonly, copy, nonatomic) NSString *reason; // @synthesize reason=_reason;
// - (void).cxx_destruct;
// - (id)copyWithZone:(_NSZone )arg1;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)initWithReason:(id)arg1;

@end

