//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "UIView.h"

#import <UIKitCore/_UIButtonBarAppearanceDelegate-Protocol.h>

@class UIImage, _UIBarButtonItemAppearanceStorage;

__attribute__((visibility("hidden")))
@interface _UIBarContentView : UIView <_UIButtonBarAppearanceDelegate>
{
    BOOL _barWantsLetterpress;
    BOOL _barIsBlack;
    BOOL _centerTextButtons;
    Class _appearanceGuideClass;
    _UIBarButtonItemAppearanceStorage *_appearanceStorage;
    UIImage *_backIndicatorMaskImage;
}

@property(retain, nonatomic) UIImage *backIndicatorMaskImage; // @synthesize backIndicatorMaskImage=_backIndicatorMaskImage;
@property(readonly, nonatomic) _UIBarButtonItemAppearanceStorage *appearanceStorage; // @synthesize appearanceStorage=_appearanceStorage;
@property(nonatomic) BOOL centerTextButtons; // @synthesize centerTextButtons=_centerTextButtons;
@property(retain, nonatomic, setter=_setAppearanceGuideClass:) Class _appearanceGuideClass; // @synthesize _appearanceGuideClass;
@property(nonatomic) BOOL barIsBlack; // @synthesize barIsBlack=_barIsBlack;
@property(nonatomic) BOOL barWantsLetterpress; // @synthesize barWantsLetterpress=_barWantsLetterpress;
// - (void).cxx_destruct;
- (NSUInteger)_edgesPropagatingSafeAreaInsetsToDescendants;
@property(retain, nonatomic) UIImage *backIndicatorImage;
- (id)_titleTextAttributesForState:(NSUInteger)arg1;
- (void)_setTitleTextAttributes:(id)arg1 forState:(NSUInteger)arg2;
- (void)_UIAppearance_setTitleTextAttributes:(id)arg1 forState:(NSUInteger)arg2;
- (void)_setBackButtonBackgroundVerticalPositionAdjustment:(double)arg1 forBarMetrics:(long long)arg2;
- (void)_UIAppearance_setBackButtonBackgroundVerticalPositionAdjustment:(double)arg1 forBarMetrics:(long long)arg2;
- (void)_setBackButtonTitlePositionAdjustment:(UIOffset)arg1 forBarMetrics:(long long)arg2;
- (void)_UIAppearance_setBackButtonTitlePositionAdjustment:(UIOffset)arg1 forBarMetrics:(long long)arg2;
- (void)_setBackButtonBackgroundImage:(id)arg1 forState:(NSUInteger)arg2 barMetrics:(long long)arg3;
- (void)_UIAppearance_setBackButtonBackgroundImage:(id)arg1 forState:(NSUInteger)arg2 barMetrics:(long long)arg3;
- (void)_setTitlePositionAdjustment:(UIOffset)arg1 forBarMetrics:(long long)arg2;
- (void)_UIAppearance_setTitlePositionAdjustment:(UIOffset)arg1 forBarMetrics:(long long)arg2;
- (void)_setBackgroundVerticalPositionAdjustment:(double)arg1 forBarMetrics:(long long)arg2;
- (void)_UIAppearance_setBackgroundVerticalPositionAdjustment:(double)arg1 forBarMetrics:(long long)arg2;
- (void)_setTintColor:(id)arg1;
- (void)_UIAppearance_setTintColor:(id)arg1;
- (void)_setBackgroundImage:(id)arg1 forState:(NSUInteger)arg2 style:(long long)arg3 barMetrics:(long long)arg4;
- (void)_UIAppearance_setBackgroundImage:(id)arg1 forState:(NSUInteger)arg2 style:(long long)arg3 barMetrics:(long long)arg4;
- (void)_setBackgroundImage:(id)arg1 forState:(NSUInteger)arg2 barMetrics:(long long)arg3;
- (void)_UIAppearance_setBackgroundImage:(id)arg1 forState:(NSUInteger)arg2 barMetrics:(long long)arg3;
- (void)_appearanceChanged;
@property(readonly, nonatomic) double backButtonMaximumWidth;
@property(readonly, nonatomic) double backButtonMargin;
- (double)absorptionForItem:(id)arg1;
@property(readonly, nonatomic) double defaultTextPadding;
@property(readonly, nonatomic) double defaultEdgeSpacing;
- (NSUInteger)edgesPaddingBarButtonItem:(id)arg1;
@property(readonly, nonatomic) BOOL isRTL;
@property(readonly, nonatomic) BOOL compactMetrics;
@property(readonly, nonatomic) long long barType;
- (id)initWithFrame:(CGRect)arg1;

@end

