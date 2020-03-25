//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIColor;

@interface SeparatorLayer : UIView
{
    UIColor *_tintColor;
    NSUInteger _axis;
}

+ (double)separatorHeight;
@property(nonatomic) NSUInteger axis; // @synthesize axis=_axis;
@property(retain, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;
// - (void).cxx_destruct;
- (CGSize)intrinsicContentSize;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (id)initWithFrame:(CGRect)arg1;

@end
