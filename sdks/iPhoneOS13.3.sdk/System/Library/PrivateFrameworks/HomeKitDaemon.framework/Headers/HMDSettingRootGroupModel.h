//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDSettingGroupModel.h>

#import <HomeKitDaemon/HMDConflictResolutionModel-Protocol.h>

@interface HMDSettingRootGroupModel : HMDSettingGroupModel <HMDConflictResolutionModel>
{
}

+ (id)hmbProperties;
- (id)copyWithNewParentModelID:(id)arg1;
- (id)nameForKeyPath;
- (id)initWithModelID:(id)arg1 parentModelID:(id)arg2;

@end

