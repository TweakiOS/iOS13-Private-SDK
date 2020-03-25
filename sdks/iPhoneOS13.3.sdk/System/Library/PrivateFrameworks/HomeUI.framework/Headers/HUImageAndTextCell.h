//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import <HomeUI/HUCellProtocol-Protocol.h>
#import <HomeUI/HUCellSeparatorAppearanceDefining-Protocol.h>

@class HFItem, NSArray, UIImageView, UILayoutGuide, UITextView;

@interface HUImageAndTextCell : UITableViewCell <HUCellSeparatorAppearanceDefining, HUCellProtocol>
{
    HFItem *_item;
    UITextView *_messageTextView;
    UIImageView *_infoImageView;
    NSArray *_contentConstraints;
    UILayoutGuide *_infoImageViewTrailingMarginLayoutGuide;
    CGSize _imageViewRecommendedSize;
}

@property(readonly, nonatomic) UILayoutGuide *infoImageViewTrailingMarginLayoutGuide; // @synthesize infoImageViewTrailingMarginLayoutGuide=_infoImageViewTrailingMarginLayoutGuide;
@property(retain, nonatomic) NSArray *contentConstraints; // @synthesize contentConstraints=_contentConstraints;
@property(readonly, nonatomic) UIImageView *infoImageView; // @synthesize infoImageView=_infoImageView;
@property(nonatomic) CGSize imageViewRecommendedSize; // @synthesize imageViewRecommendedSize=_imageViewRecommendedSize;
@property(readonly, nonatomic) UITextView *messageTextView; // @synthesize messageTextView=_messageTextView;
@property(retain, nonatomic) HFItem *item; // @synthesize item=_item;
// - (void).cxx_destruct;
- (void)_resetContentConstraints;
@property(readonly, nonatomic) BOOL prefersSeparatorsHidden;
- (CGSize)systemLayoutSizeFittingSize:(CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;
- (void)updateUIWithAnimation:(BOOL)arg1;
- (void)prepareForReuse;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
