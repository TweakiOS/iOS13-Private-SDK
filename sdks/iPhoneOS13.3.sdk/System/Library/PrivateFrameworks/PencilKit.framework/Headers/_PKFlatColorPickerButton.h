//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PencilKit/_PKInkColorButton.h>

@class CAShapeLayer, _PKHueSpectrumView;

@interface _PKFlatColorPickerButton : _PKInkColorButton
{
    _PKHueSpectrumView *_hueSpectrumView;
    CAShapeLayer *_selectedColorLayer;
    CAShapeLayer *_strokeShapeLayer;
    CGRect _lastRenderedBounds;
}

@property(nonatomic) CGRect lastRenderedBounds; // @synthesize lastRenderedBounds=_lastRenderedBounds;
@property(retain, nonatomic) CAShapeLayer *strokeShapeLayer; // @synthesize strokeShapeLayer=_strokeShapeLayer;
@property(retain, nonatomic) CAShapeLayer *selectedColorLayer; // @synthesize selectedColorLayer=_selectedColorLayer;
@property(retain, nonatomic) _PKHueSpectrumView *hueSpectrumView; // @synthesize hueSpectrumView=_hueSpectrumView;
// - (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithColor:(id)arg1 isCompact:(BOOL)arg2;

@end

