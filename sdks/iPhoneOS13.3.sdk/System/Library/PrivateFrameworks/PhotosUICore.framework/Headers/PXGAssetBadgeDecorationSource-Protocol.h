//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXGLayoutContentSource-Protocol.h>

@class PXGLayout;
@protocol PXDisplayAsset;

@protocol PXGAssetBadgeDecorationSource <PXGLayoutContentSource>
- (struct PXAssetBadgeInfo)assetBadgeInfoForAsset:(id <PXDisplayAsset>)arg1 atSpriteIndex:(unsigned int)arg2 inLayout:(PXGLayout *)arg3;
- (BOOL)wantsAssetBadgeDecorationsInLayout:(PXGLayout *)arg1;
@end
