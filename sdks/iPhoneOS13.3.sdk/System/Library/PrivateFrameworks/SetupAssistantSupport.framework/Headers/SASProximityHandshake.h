//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@interface SASProximityHandshake : NSObject <NSSecureCoding>
{
    BOOL _hasPasscodeSet;
    int _simplePasscodeType;
    int _unlockType;
    long long _platformType;
}

+ (BOOL)supportsSecureCoding;
@property int unlockType; // @synthesize unlockType=_unlockType;
@property int simplePasscodeType; // @synthesize simplePasscodeType=_simplePasscodeType;
@property BOOL hasPasscodeSet; // @synthesize hasPasscodeSet=_hasPasscodeSet;
@property long long platformType; // @synthesize platformType=_platformType;
- (void)loadInformation;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

