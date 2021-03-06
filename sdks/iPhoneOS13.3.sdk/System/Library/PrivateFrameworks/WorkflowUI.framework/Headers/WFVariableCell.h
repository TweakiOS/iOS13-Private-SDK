//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class UIImageView, WFVariable;

@interface WFVariableCell : UICollectionViewCell
{
    WFVariable *_variable;
    UIImageView *_imageView;
}

+ (double)widthWithVariable:(id)arg1 height:(double)arg2;
+ (id)titleFont;
@property(readonly, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) WFVariable *variable; // @synthesize variable=_variable;
// - (void).cxx_destruct;
- (NSUInteger)accessibilityTraits;
- (BOOL)isAccessibilityElement;
- (void)setHighlighted:(BOOL)arg1;
- (void)tintColorDidChange;
- (void)updateVariableImage;
- (id)initWithFrame:(CGRect)arg1;

@end

