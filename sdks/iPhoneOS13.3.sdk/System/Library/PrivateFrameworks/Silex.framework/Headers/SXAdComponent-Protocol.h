//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Silex/SXComponent-Protocol.h>
#import <Silex/SXComponentAdvertisingMetadataProviding-Protocol.h>

@class UIColor;

@protocol SXAdComponent <SXComponent, SXComponentAdvertisingMetadataProviding>
@property(readonly, nonatomic) NSUInteger placementType;
@property(readonly, nonatomic) UIColor *debugColor;
@property(readonly, nonatomic) NSUInteger adType;
@end

