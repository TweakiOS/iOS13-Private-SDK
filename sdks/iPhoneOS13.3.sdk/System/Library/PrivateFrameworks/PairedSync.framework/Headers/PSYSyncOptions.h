//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSUUID, PSYTestInput;

@interface PSYSyncOptions : NSObject <NSSecureCoding>
{
    BOOL _dryRun;
    BOOL _terminateDuringDryRun;
    PSYTestInput *_testInput;
    NSUUID *_pairingIdentifier;
    NSUUID *_sessionIdentifier;
    NSUInteger _syncSessionType;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) NSUInteger syncSessionType; // @synthesize syncSessionType=_syncSessionType;
@property(retain, nonatomic) NSUUID *sessionIdentifier; // @synthesize sessionIdentifier=_sessionIdentifier;
@property(retain, nonatomic) NSUUID *pairingIdentifier; // @synthesize pairingIdentifier=_pairingIdentifier;
@property(retain, nonatomic) PSYTestInput *testInput; // @synthesize testInput=_testInput;
@property(nonatomic) BOOL terminateDuringDryRun; // @synthesize terminateDuringDryRun=_terminateDuringDryRun;
@property(nonatomic) BOOL dryRun; // @synthesize dryRun=_dryRun;
// - (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

