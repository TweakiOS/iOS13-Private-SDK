//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import <StoreKitUI/SKUIViewElementView-Protocol.h>

@class UIColor, UIView;

__attribute__((visibility("hidden")))
@interface SKUIPageDividerCollectionViewCell : UICollectionViewCell <SKUIViewElementView>
{
    UIEdgeInsets _contentInset;
    UIView *_topDividerLine;
    UIView *_bottomDividerLine;
    double _dividerHeight;
    long long _dividerType;
    UIView *_insetView;
    UIColor *_insetColor;
    double _leftEdgeInset;
    double _rightEdgeInset;
    long long _verticalAlignment;
}

+ (CGSize)sizeThatFitsWidth:(double)arg1 viewElement:(id)arg2 context:(id)arg3;
+ (void)requestLayoutForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;
+ (CGSize)preferredSizeForViewElement:(id)arg1 context:(id)arg2;
+ (BOOL)prefetchResourcesForViewElement:(id)arg1 reason:(long long)arg2 context:(id)arg3;
@property(nonatomic) long long verticalAlignment; // @synthesize verticalAlignment=_verticalAlignment;
@property(nonatomic) double rightEdgeInset; // @synthesize rightEdgeInset=_rightEdgeInset;
@property(nonatomic) double leftEdgeInset; // @synthesize leftEdgeInset=_leftEdgeInset;
@property(nonatomic) long long dividerType; // @synthesize dividerType=_dividerType;
@property(nonatomic) double dividerHeight; // @synthesize dividerHeight=_dividerHeight;
// - (void).cxx_destruct;
- (void)layoutSubviews;
- (void)applyLayoutAttributes:(id)arg1;
- (void)setInsetColor:(id)arg1;
- (void)setColoringWithStyle:(id)arg1;
- (void)setColoringWithColorScheme:(id)arg1;
- (id)viewForElementIdentifier:(id)arg1;
- (BOOL)updateWithItemState:(id)arg1 context:(id)arg2 animated:(BOOL)arg3;
- (BOOL)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;
- (void)setContentInset:(UIEdgeInsets)arg1;
- (void)reloadWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;
- (id)initWithFrame:(CGRect)arg1;

@end

