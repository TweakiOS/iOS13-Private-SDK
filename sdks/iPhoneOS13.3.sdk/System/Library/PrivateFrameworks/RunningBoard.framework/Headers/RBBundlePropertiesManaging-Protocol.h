//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class RBProcess, RBSProcessIdentifier, RBSProcessIdentity;
@protocol RBBundleProperties;

@protocol RBBundlePropertiesManaging <NSObject>
- (void)removeProcess:(RBProcess *)arg1;
- (id <RBBundleProperties>)propertiesForIdentity:(RBSProcessIdentity *)arg1 identifier:(RBSProcessIdentifier *)arg2;
@end

