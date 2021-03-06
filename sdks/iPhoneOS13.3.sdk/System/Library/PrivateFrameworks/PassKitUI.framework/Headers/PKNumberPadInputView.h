//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIInputView.h>

@class UIColor, UIStackView;

@interface PKNumberPadInputView : UIInputView
{
    UIStackView *_verticalStackView;
    BOOL _showsDecimalPointButton;
    UIColor *_numberPadColor;
}

+ (CGSize)defaultSize;
@property(copy, nonatomic) UIColor *numberPadColor; // @synthesize numberPadColor=_numberPadColor;
@property(nonatomic) BOOL showsDecimalPointButton; // @synthesize showsDecimalPointButton=_showsDecimalPointButton;
// - (void).cxx_destruct;
- (void)_reloadSubviews;
- (void)_performInsertion:(id)arg1;
- (void)_performDelete;
- (void)_numericKeyPressed:(id)arg1;
- (void)layoutSubviews;
- (id)initWithDefaultFrame;
- (id)initWithFrame:(CGRect)arg1;

@end

