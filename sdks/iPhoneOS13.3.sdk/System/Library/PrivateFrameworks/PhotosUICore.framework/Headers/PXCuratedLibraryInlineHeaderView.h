//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <PhotosUICore/PXAccessibilityView-Protocol.h>
#import <PhotosUICore/PXGReusableView-Protocol.h>

@class NSString, PXCuratedLibraryInlineHeaderViewConfiguration, UILabel, UIVisualEffectView;

@interface PXCuratedLibraryInlineHeaderView : UIView <PXGReusableView, PXAccessibilityView>
{
    PXCuratedLibraryInlineHeaderViewConfiguration *_configuration;
    UIVisualEffectView *_effectView;
    UIView *_tintView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    PXCuratedLibraryInlineHeaderViewConfiguration *_userData;
    CGRect _clippingRect;
}

+ (double)_titleBaselineDistanceForFont:(id)arg1;
+ (double)_heightForStyle:(NSUInteger)arg1;
+ (CGSize)sizeWithConfiguration:(id)arg1;
+ (id)_subtitleFontForStyle:(NSUInteger)arg1;
+ (id)_titleFontForStyle:(NSUInteger)arg1;
@property(copy, nonatomic) PXCuratedLibraryInlineHeaderViewConfiguration *userData; // @synthesize userData=_userData;
@property(nonatomic) CGRect clippingRect; // @synthesize clippingRect=_clippingRect;
// - (void).cxx_destruct;
- (void)_platformSpecificViewSetup;
- (id)_tintViewBackgroundColor;
- (void)_setEffectViewCornerRadius:(double)arg1;
- (void)_setupBackgroundView;
- (void)traitCollectionDidChange:(id)arg1;
@property(readonly, copy, nonatomic) NSString *accessibilityLabel;
@property(readonly, nonatomic) BOOL isContainedInAsset;
@property(readonly, nonatomic) BOOL isAccessible;
- (void)prepareForReuse;
- (void)becomeReusable;
- (void)layoutSubviews;
- (void)_updateButtonWithConfiguration:(id)arg1;
- (void)_configureViews;
- (void)_setupViews;
- (void)setHidden:(BOOL)arg1;
- (void)_updateConfiguration;
- (id)initWithFrame:(CGRect)arg1;

@end

