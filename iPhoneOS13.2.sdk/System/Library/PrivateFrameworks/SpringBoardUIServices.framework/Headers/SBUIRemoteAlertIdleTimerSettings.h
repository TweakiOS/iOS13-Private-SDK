//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



@interface SBUIRemoteAlertIdleTimerSettings : NSObject <NSSecureCoding>
{
    _Bool _disablesWarn;
    _Bool _usesLockScreenRules;
    double _autoLockTimeout;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) _Bool usesLockScreenRules; // @synthesize usesLockScreenRules=_usesLockScreenRules;
@property(nonatomic) _Bool disablesWarn; // @synthesize disablesWarn=_disablesWarn;
@property(nonatomic) double autoLockTimeout; // @synthesize autoLockTimeout=_autoLockTimeout;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
