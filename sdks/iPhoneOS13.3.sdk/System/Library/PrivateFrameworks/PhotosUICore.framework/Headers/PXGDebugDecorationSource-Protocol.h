//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXGLayoutContentSource-Protocol.h>

@class NSDictionary, PXGLayout;
@protocol PXDisplayAsset;

@protocol PXGDebugDecorationSource <PXGLayoutContentSource>
- (NSDictionary *)debugDecorationAtSpriteIndex:(unsigned int)arg1 asset:(id <PXDisplayAsset>)arg2 inLayout:(PXGLayout *)arg3;
- (BOOL)wantsDebugDecorationInLayout:(PXGLayout *)arg1;
@end

