//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CLKDevice, NSDate, NSDateFormatter, NTKColoringLabel, UIColor, UIFont;

@interface NTKBigNumeralsTimeComponentLabel : UIView
{
    CLKDevice *_device;
    _Bool _useLigatures;
    UIFont *_filledFont;
    UIFont *_outlinedFont;
    NTKColoringLabel *_label;
    NTKColoringLabel *_transitioningLabel;
    NSDateFormatter *_formatter;
    unsigned long long _timeComponent;
    unsigned long long _fontVariant;
    NSDate *_date;
    unsigned long long _typeface;
    unsigned long long _style;
    UIColor *_color;
}

@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
@property(nonatomic) unsigned long long typeface; // @synthesize typeface=_typeface;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
- (id)_fontForStyle:(unsigned long long)arg1;
- (void)_updateLabelText;
- (id)_attributedStringForTypeface:(unsigned long long)arg1;
- (void)_updateLocale;
- (void)cleanupTransition;
- (void)applyTransitionFraction:(double)arg1 fromColor:(id)arg2 toColor:(id)arg3;
- (void)applyTransitionFraction:(double)arg1 fromStyle:(unsigned long long)arg2 toStyle:(unsigned long long)arg3;
- (void)applyTransitionFraction:(double)arg1 fromTypeface:(unsigned long long)arg2 toTypeface:(unsigned long long)arg3;
- (double)_lastLineBaseline;
@property(nonatomic) long long textAlignment;
@property(nonatomic) double fontSize;
@property(readonly, nonatomic) UIFont *font;
- (void)setupFontsForVariant:(unsigned long long)arg1 fontSize:(double)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithDevice:(id)arg1 timeComponent:(unsigned long long)arg2 fontVariant:(unsigned long long)arg3 fontSize:(double)arg4 useLigatures:(_Bool)arg5;

@end
