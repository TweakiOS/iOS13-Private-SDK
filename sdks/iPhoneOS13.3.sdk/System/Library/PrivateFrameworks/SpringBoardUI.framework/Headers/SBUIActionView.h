//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class MTVisualStylingProvider, NSArray, SBUIAction, SBUIActionViewLabel, UIImageView;

@interface SBUIActionView : UIView
{
    BOOL _interfaceOrientationIsPortrait;
    UIImageView *_imageView;
    UIView *_textContainer;
    SBUIActionViewLabel *_titleLabel;
    SBUIActionViewLabel *_subtitleLabel;
    UIView *_highlightView;
    NSArray *_imageViewLayoutConstraints;
    MTVisualStylingProvider *_visualStylingProviderStroke;
    MTVisualStylingProvider *_visualStylingProviderFill;
    BOOL _highlighted;
    SBUIAction *_action;
    long long _imagePosition;
}

@property(nonatomic, getter=isHighlighted) BOOL highlighted; // @synthesize highlighted=_highlighted;
@property(nonatomic) long long imagePosition; // @synthesize imagePosition=_imagePosition;
@property(readonly, nonatomic) SBUIAction *action; // @synthesize action=_action;
// - (void).cxx_destruct;
- (void)_updateVisualStylingIfNecessary;
- (void)_invalidateVisualStyling;
- (void)_updateImageViewLayoutConstraints;
- (void)_setupSubviews;
- (void)setHighlighted:(BOOL)arg1 withFeedbackRetargetBehavior:(id)arg2;
@property(readonly, nonatomic) double trailingContentMargin;
@property(readonly, nonatomic) double leadingContentMargin;
- (void)willMoveToSuperview:(id)arg1;
- (void)layoutSubviews;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithAction:(id)arg1;

@end

