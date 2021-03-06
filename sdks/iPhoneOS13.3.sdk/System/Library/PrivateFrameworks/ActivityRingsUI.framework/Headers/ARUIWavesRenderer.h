//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ActivityRingsUI/ARUICelebrationsRendering-Protocol.h>

@class ARUIWavesComputeState, ARUIWavesRenderState;
@protocol ARUIBlurRendering, ARUICompositeRendering, ARUIRingsRendering, MTLDevice, MTLLibrary;

__attribute__((visibility("hidden")))
@interface ARUIWavesRenderer : NSObject <ARUICelebrationsRendering>
{
    id <MTLDevice> _device;
    id <MTLLibrary> _library;
    BOOL _prewarmed;
    ARUIWavesComputeState *_wavesComputeState;
    ARUIWavesRenderState *_wavesRenderState;
    id <ARUICompositeRendering> _compositeRenderer;
    id <ARUIBlurRendering> _blurRenderer;
    id <ARUIRingsRendering> _ringsRenderer;
}

@property(nonatomic) __weak id <ARUIRingsRendering> ringsRenderer; // @synthesize ringsRenderer=_ringsRenderer;
@property(nonatomic) __weak id <ARUIBlurRendering> blurRenderer; // @synthesize blurRenderer=_blurRenderer;
@property(nonatomic) __weak id <ARUICompositeRendering> compositeRenderer; // @synthesize compositeRenderer=_compositeRenderer;
// - (void).cxx_destruct;
- (void)_renderWithCommandEncoder:(id)arg1 ring:(id)arg2 wavesCelebration:(id)arg3;
- 
- (void)_computeWithCommandEncoder:(id)arg1 ring:(id)arg2 wavesCelebration:(id)arg3;
- (float)_revealPercentFromWavesMap:(id)arg1;
- 
- (void)prewarm;
- (id)initWithDevice:(id)arg1 library:(id)arg2;

@end

