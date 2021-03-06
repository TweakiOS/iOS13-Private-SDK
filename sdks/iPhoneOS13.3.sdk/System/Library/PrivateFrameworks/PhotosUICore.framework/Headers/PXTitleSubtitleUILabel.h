//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <PhotosUICore/PXChangeObserver-Protocol.h>

@class CALayer, NSArray, NSString, PXTitleSubtitleCALayerPromise, PXTitleSubtitleLabelSpec;

@interface PXTitleSubtitleUILabel : UIView <PXChangeObserver>
{
    BOOL _needsUpdateLayerPromise;
    BOOL _rendersTextAsynchronously;
    BOOL _shouldRasterizeTextLayer;
    BOOL _diagnosticsEnabled;
    NSString *_titleText;
    NSString *_subtitleText;
    PXTitleSubtitleLabelSpec *_spec;
    long long _typesettingMode;
    PXTitleSubtitleCALayerPromise *__layerPromise;
    CALayer *__contentLayer;
}

@property(nonatomic) BOOL diagnosticsEnabled; // @synthesize diagnosticsEnabled=_diagnosticsEnabled;
@property(retain, nonatomic, setter=_setContentLayer:) CALayer *_contentLayer; // @synthesize _contentLayer=__contentLayer;
@property(retain, nonatomic, setter=_setLayerPromise:) PXTitleSubtitleCALayerPromise *_layerPromise; // @synthesize _layerPromise=__layerPromise;
@property(nonatomic) BOOL shouldRasterizeTextLayer; // @synthesize shouldRasterizeTextLayer=_shouldRasterizeTextLayer;
@property(nonatomic) BOOL rendersTextAsynchronously; // @synthesize rendersTextAsynchronously=_rendersTextAsynchronously;
@property(nonatomic) long long typesettingMode; // @synthesize typesettingMode=_typesettingMode;
@property(retain, nonatomic) PXTitleSubtitleLabelSpec *spec; // @synthesize spec=_spec;
@property(copy, nonatomic) NSString *subtitleText; // @synthesize subtitleText=_subtitleText;
@property(copy, nonatomic) NSString *titleText; // @synthesize titleText=_titleText;
// - (void).cxx_destruct;
- (void)observable:(id)arg1 didChange:(NSUInteger)arg2 context:(void )arg3;
- (void)_updateContentLayer;
- (void)_updateLayerPromiseIfNeeded;
- (void)_invalidateLayerPromise;
- (void)layoutSubviews;
- (CGRect)contentBounds;
@property(readonly, nonatomic) NSArray *diagnosticsRenderedLines;
@property(readonly, nonatomic) double lastBaseline;
- (void)_handleChangeFromBounds:(CGRect)arg1;
- (void)setFrame:(CGRect)arg1;
- (void)setBounds:(CGRect)arg1;
- (void)_PXTitleSubtitleUILabelCommonInitialization;
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end

