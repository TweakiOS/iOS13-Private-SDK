//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class ASVBadgeDescription, UIImageView, UIVisualEffectView;

@interface ASVBadgeView : UIView
{
    UIVisualEffectView *_blurView;
    UIImageView *_badgeImageView;
    UIView *_shadowView;
    BOOL _highlighted;
    ASVBadgeDescription *_badgeDescription;
    CGSize _thumbnailSize;
}

+ (void)applyBlurWithBackground:(id)arg1 offset:(CGPoint)arg2;
+ (id)badgeForThumbnail:(id)arg1;
+ (id)highlightedBlurViewEffects;
+ (id)normalBlurViewEffects;
+ (id)badgeView;
@property(nonatomic, getter=isHighlighted) BOOL highlighted; // @synthesize highlighted=_highlighted;
@property(readonly, nonatomic) ASVBadgeDescription *badgeDescription; // @synthesize badgeDescription=_badgeDescription;
@property(nonatomic) CGSize thumbnailSize; // @synthesize thumbnailSize=_thumbnailSize;
// - (void).cxx_destruct;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (CGSize)intrinsicContentSize;
- (void)_updateShadow;
- (void)setUpView;

@end
