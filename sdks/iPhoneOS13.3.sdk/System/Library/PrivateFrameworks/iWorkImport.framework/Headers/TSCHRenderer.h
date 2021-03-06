//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/TSCHSupportsTextEditing-Protocol.h>

@class TSCHChartInfo, TSCHChartLayoutItem, TSCHChartModel;
@protocol TSCHSupportsRendering;

__attribute__((visibility("hidden")))
@interface TSCHRenderer : NSObject <TSCHSupportsTextEditing>
{
    TSCHChartLayoutItem *mChartLayoutItem;
    id <TSCHSupportsRendering> mChartRep;
}

@property(readonly, nonatomic) __weak id <TSCHSupportsRendering> chartRep; // @synthesize chartRep=mChartRep;
// - (void).cxx_destruct;
- (CGRect)tLayerRectForContext:(CGContext )arg1;
- (CGRect)chartLayoutSpaceRenderingRect;
- (void)addSelection:(id)arg1 toCGPath:(CGPath )arg2 useWrapWidth:(BOOL)arg3;
- (void)renderIntoContext:(CGContext )arg1 selection:(id)arg2;
- (BOOL)canRenderSelectionPath:(id)arg1;
- (void)p_debugLayoutInContext:(CGContext )arg1;
- (void)p_renderIntoContext:(CGContext )arg1 visible:(CGRect)arg2;
- (void)strokeRectInContext:(CGContext )arg1 rect:(CGRect)arg2 color:(CGColor )arg3;
- (void)renderIntoContext:(CGContext )arg1 visible:(CGRect)arg2;
- (int)chunkPlane;
- (int)textDrawingFlagForSelectionPath:(id)arg1;
- (double)frameHeightChangeForPath:(id)arg1;
- (void)useEditedString:(id)arg1;
- (id)textEditorForSelectionPath:(id)arg1 chartEditor:(id)arg2;
- (CGRect)frameForEditingTextForSelectionPath:(id)arg1;
- (BOOL)canEditTextForSelectionPath:(id)arg1;
@property(readonly, nonatomic) CGColor debugColor;
@property(readonly, nonatomic) BOOL debugLayout;
@property(readonly, nonatomic) BOOL supportsSeparateLabelsRenderPass;
- (BOOL)isCompositeRenderer;
@property(readonly, nonatomic) double viewScale;
@property(readonly, nonatomic) TSCHChartLayoutItem *layoutItem;
@property(readonly, nonatomic) TSCHChartModel *model;
@property(readonly, nonatomic) TSCHChartInfo *chartInfo;
- (id)initWithChartRep:(id)arg1 layoutItem:(id)arg2;
- (void)drawErrorBarsInContext:(CGContext )arg1 chartVertical:(BOOL)arg2 elementRenderClass:(Class)arg3;
- (void)drawTrendLinesInContext:(CGContext )arg1 chartVertical:(BOOL)arg2 elementRenderClass:(Class)arg3;

@end

