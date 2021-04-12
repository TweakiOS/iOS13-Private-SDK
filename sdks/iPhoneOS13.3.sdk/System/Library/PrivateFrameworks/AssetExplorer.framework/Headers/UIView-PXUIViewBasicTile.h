//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <AssetExplorer/PXReusableObject-Protocol.h>
#import <AssetExplorer/PXUIViewBasicTile-Protocol.h>

@interface UIView (PXUIViewBasicTile) <PXUIViewBasicTile, PXReusableObject>
- (void)prepareForReuse;
- (void)becomeReusable;
- (void)didApplyGeometry:(struct PXTileGeometry)arg1 withUserData:(id)arg2;
@property(readonly, nonatomic) UIView *view;
- (void)setAssociatedAssetUUID:(id)arg1;
- (id)associatedAssetUUID;
@end

