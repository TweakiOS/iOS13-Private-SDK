//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface HMDSiriAccessoryInfo : NSObject
{
    BOOL _supportsDragonSiri;
    id _targetsAccessory;
}

+ (id)infoWithTargetableAccessory:(id)arg1;
@property(nonatomic) BOOL supportsDragonSiri; // @synthesize supportsDragonSiri=_supportsDragonSiri;
@property(nonatomic) __weak id targetsAccessory; // @synthesize targetsAccessory=_targetsAccessory;
// - (void).cxx_destruct;
- (BOOL)isActiveAndSupportsDragonSiri;

@end

