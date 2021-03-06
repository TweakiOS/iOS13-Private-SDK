//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <PencilKit/PKControllerDelegate-Protocol.h>
#import <PencilKit/PKDrawingGestureRecognizerDelegate-Protocol.h>
#import <PencilKit/PKDrawingGestureTarget-Protocol.h>

@class CADisplayLink, NSArray, NSMutableArray, NSMutableSet, NSObject, PKController, PKDrawing, PKDrawingPowerSavingController, PKInk, PKMetalRendererController, PKMetalView, PKRulerController, PKSelectionController, PKToolPicker, UIColor, UIGestureRecognizer, UIImage;
@protocol OS_dispatch_queue, PKDrawingGestureRecognizerProtocol, PKTiledCanvasViewDelegate;

@interface PKTiledCanvasView : UIView <PKDrawingGestureRecognizerDelegate, PKControllerDelegate, PKDrawingGestureTarget>
{
    NSUInteger _numSkippedDoubleBufferedFrames;
    struct {
        unsigned int delegateSupportsDrawingDidChange:1;
        unsigned int delegateSupportsWillBeginNewStroke:1;
        unsigned int delegateSupportsBeganStroke:1;
        unsigned int delegateSupportsCancelledStroke:1;
        unsigned int delegateSupportsEndedStroke:1;
        unsigned int delegateSupportsWillBeginDrawing:1;
        unsigned int delegateSupportsDidBeginDrawing:1;
        unsigned int delegateSupportsDrawingMoved:1;
        unsigned int delegateSupportsDidEndDrawing:1;
        unsigned int delegateSupportsDidFinishRenderingStrokeOnRenderQueue:1;
        unsigned int delegateSupportsShouldBeginDrawingWithTouch:1;
        unsigned int delegateSupportsDidEraseStrokes:1;
        unsigned int delegateSupportsRegisterUndoCommand:1;
    } _canvasViewFlags;
    BOOL _isDrawing;
    BOOL _isErasingObjects;
    BOOL _isSelecting;
    BOOL _insertSpaceEnabled;
    BOOL _predictionDisabled;
    BOOL _allowLiveInteraction;
    BOOL _liveStrokeMode;
    BOOL _shouldPause;
    BOOL _usePrivateResourceHandler;
    BOOL __didCancelSelection;
    BOOL _hasValidOnscreenVisibleStrokes;
    BOOL _editMenuVisible;
    PKController *_drawingController;
    id <PKTiledCanvasViewDelegate> _delegate;
    UIImage *_paperTexture;
    PKDrawing *_drawing;
    PKInk *_ink;
    UIGestureRecognizer<PKDrawingGestureRecognizerProtocol> *_drawingGestureRecognizer;
    UIColor *_liveRenderingOverrideColor;
    PKSelectionController *_selectionController;
    PKRulerController *_rulerController;
    double _metalLayerContentsScaleOverride;
    PKDrawing *_currentDrawingBeingCopiedToCanvas;
    double __fixedDrawingScale;
    PKMetalView *_metalView;
    CADisplayLink *_displayLink;
    long long _maxNumPredictionPoints;
    double _drawingStartTimestamp;
    PKDrawingPowerSavingController *_powerSavingController;
    id /* CDUnknownBlockType */ _purgeResourcesBlock;
    NSMutableArray *_strokesToErase;
    NSMutableSet *_strokeIDsToErase;
    id /* CDUnknownBlockType */ _generateOnscreenVisibleStrokesBlock;
    NSObject<OS_dispatch_queue> *_onscreenVisibleStrokesQueue;
    NSArray *_onscreenVisibleStrokes;
    long long _currentGenerationCount;
    NSArray *_strokesAnimatingToDestination;
    double _liveAnimationStartTime;
    NSMutableArray *_fadeOutStrokeAnimations;
    NSMutableSet *_strokeUUIDsAboutToBeRemoved;
    PKToolPicker *_toolPickerToRestoreBackgroundMaterialUpdatingState;
    CGSize __fixedPixelSize;
    CGPoint __oldEraseLocation;
    CGPoint __drawingBeganLocation;
    CGRect _viewScissor;
    CGAffineTransform _strokeTransform;
    CGAffineTransform _paperTransform;
}

+ (void)setupDefaults;
+ (void)initialize;
@property(nonatomic) __weak PKToolPicker *toolPickerToRestoreBackgroundMaterialUpdatingState; // @synthesize toolPickerToRestoreBackgroundMaterialUpdatingState=_toolPickerToRestoreBackgroundMaterialUpdatingState;
@property(nonatomic) BOOL editMenuVisible; // @synthesize editMenuVisible=_editMenuVisible;
@property(retain, nonatomic) NSMutableSet *strokeUUIDsAboutToBeRemoved; // @synthesize strokeUUIDsAboutToBeRemoved=_strokeUUIDsAboutToBeRemoved;
@property(retain, nonatomic) NSMutableArray *fadeOutStrokeAnimations; // @synthesize fadeOutStrokeAnimations=_fadeOutStrokeAnimations;
@property(nonatomic) double liveAnimationStartTime; // @synthesize liveAnimationStartTime=_liveAnimationStartTime;
@property(copy, nonatomic) NSArray *strokesAnimatingToDestination; // @synthesize strokesAnimatingToDestination=_strokesAnimatingToDestination;
@property(nonatomic) long long currentGenerationCount; // @synthesize currentGenerationCount=_currentGenerationCount;
@property(retain, nonatomic) NSArray *onscreenVisibleStrokes; // @synthesize onscreenVisibleStrokes=_onscreenVisibleStrokes;
@property(nonatomic) BOOL hasValidOnscreenVisibleStrokes; // @synthesize hasValidOnscreenVisibleStrokes=_hasValidOnscreenVisibleStrokes;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *onscreenVisibleStrokesQueue; // @synthesize onscreenVisibleStrokesQueue=_onscreenVisibleStrokesQueue;
@property(copy, nonatomic) id /* CDUnknownBlockType */ generateOnscreenVisibleStrokesBlock; // @synthesize generateOnscreenVisibleStrokesBlock=_generateOnscreenVisibleStrokesBlock;
@property(nonatomic) CGPoint _drawingBeganLocation; // @synthesize _drawingBeganLocation=__drawingBeganLocation;
@property(retain, nonatomic) NSMutableSet *strokeIDsToErase; // @synthesize strokeIDsToErase=_strokeIDsToErase;
@property(retain, nonatomic) NSMutableArray *strokesToErase; // @synthesize strokesToErase=_strokesToErase;
@property(nonatomic) BOOL _didCancelSelection; // @synthesize _didCancelSelection=__didCancelSelection;
@property(nonatomic) CGPoint _oldEraseLocation; // @synthesize _oldEraseLocation=__oldEraseLocation;
@property(copy, nonatomic) id /* CDUnknownBlockType */ purgeResourcesBlock; // @synthesize purgeResourcesBlock=_purgeResourcesBlock;
@property(retain, nonatomic) PKDrawingPowerSavingController *powerSavingController; // @synthesize powerSavingController=_powerSavingController;
@property double drawingStartTimestamp; // @synthesize drawingStartTimestamp=_drawingStartTimestamp;
@property(nonatomic) long long maxNumPredictionPoints; // @synthesize maxNumPredictionPoints=_maxNumPredictionPoints;
@property(nonatomic) BOOL usePrivateResourceHandler; // @synthesize usePrivateResourceHandler=_usePrivateResourceHandler;
@property(nonatomic) BOOL shouldPause; // @synthesize shouldPause=_shouldPause;
@property(retain, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property(retain, nonatomic) PKMetalView *metalView; // @synthesize metalView=_metalView;
@property(nonatomic) double _fixedDrawingScale; // @synthesize _fixedDrawingScale=__fixedDrawingScale;
@property(nonatomic) CGSize _fixedPixelSize; // @synthesize _fixedPixelSize=__fixedPixelSize;
@property(nonatomic) __weak PKDrawing *currentDrawingBeingCopiedToCanvas; // @synthesize currentDrawingBeingCopiedToCanvas=_currentDrawingBeingCopiedToCanvas;
@property(nonatomic) BOOL liveStrokeMode; // @synthesize liveStrokeMode=_liveStrokeMode;
@property BOOL allowLiveInteraction; // @synthesize allowLiveInteraction=_allowLiveInteraction;
@property(nonatomic) CGRect viewScissor; // @synthesize viewScissor=_viewScissor;
@property(nonatomic) CGAffineTransform paperTransform; // @synthesize paperTransform=_paperTransform;
@property(nonatomic) CGAffineTransform strokeTransform; // @synthesize strokeTransform=_strokeTransform;
@property(nonatomic) double metalLayerContentsScaleOverride; // @synthesize metalLayerContentsScaleOverride=_metalLayerContentsScaleOverride;
@property(nonatomic) BOOL predictionDisabled; // @synthesize predictionDisabled=_predictionDisabled;
@property(nonatomic) BOOL insertSpaceEnabled; // @synthesize insertSpaceEnabled=_insertSpaceEnabled;
@property(nonatomic) BOOL isSelecting; // @synthesize isSelecting=_isSelecting;
@property(nonatomic) BOOL isErasingObjects; // @synthesize isErasingObjects=_isErasingObjects;
@property(nonatomic) __weak PKRulerController *rulerController; // @synthesize rulerController=_rulerController;
@property(nonatomic) __weak PKSelectionController *selectionController; // @synthesize selectionController=_selectionController;
@property(retain, nonatomic) UIColor *liveRenderingOverrideColor; // @synthesize liveRenderingOverrideColor=_liveRenderingOverrideColor;
@property(nonatomic) BOOL isDrawing; // @synthesize isDrawing=_isDrawing;
@property(retain, nonatomic) UIGestureRecognizer<PKDrawingGestureRecognizerProtocol> *drawingGestureRecognizer; // @synthesize drawingGestureRecognizer=_drawingGestureRecognizer;
@property(retain, nonatomic) PKInk *ink; // @synthesize ink=_ink;
@property(retain, nonatomic) PKDrawing *drawing; // @synthesize drawing=_drawing;
@property(retain, nonatomic) UIImage *paperTexture; // @synthesize paperTexture=_paperTexture;
@property(nonatomic) __weak id <PKTiledCanvasViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) PKController *_drawingController; // @synthesize _drawingController;
// - (void).cxx_destruct;
- (CGSize)_rendererControllerPixelSize;
- (CGSize)_metalViewDrawableSize;
- (void)fadeOutAndHideStrokes:(id)arg1 duration:(double)arg2;
- (void)testHideOldestStroke;
- (void)checkAnimationsDidEndAtTime:(double)arg1;
- (void)testLiveStrokeToDestinationFrame:(CGRect)arg1 destinationTexture:(CGImage )arg2;
- (id)_strokeUUIDsForStrokes:(id)arg1;
- (void)_addSpaceBelowDrawingForStroke:(id)arg1 touch:(id)arg2;
- (BOOL)_isLassoAddingSpace:(id)arg1;
- (void)selectionCancelled;
- (void)lassoEnded:(id)arg1;
- (BOOL)lassoShouldClearSelectionOrToggleMenu:(id)arg1;
- (void)selectionBegan:(id)arg1;
- (CGPoint)clampInputPointForSelection:(CGPoint)arg1;
- (void)toggleEditMenuAtLocation:(CGPoint)arg1;
- (void)dismissEditMenuIfNecessary;
- (void)cancelGenerateVisibleStrokesBlockIfNecessary;
- (void)clearOnscreenVisibleStrokeCacheAndCancelBlockIfNecessary;
- (void)findOnscreenVisibleStrokesForFrame:(CGRect)arg1 inDrawing:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)generateStrokesOnCanvasForVisibleFrame:(CGRect)arg1 inDrawing:(id)arg2;
- (void)generateOnscreenVisibleStrokesForCanvas;
- (void)eraserCancelled;
- (void)eraserEnded:(id)arg1;
- (void)eraserMoved:(id)arg1;
- (BOOL)eraserBegan:(id)arg1;
- (void)_didFinishErasingStrokes:(BOOL)arg1;
- (void)eraseStrokesForPoint:(CGPoint)arg1 prevPoint:(CGPoint)arg2;
- (CGPoint)applyTransformToTouchLocation:(CGPoint)arg1;
- (void)drawingCancelled;
- (void)drawingEnded:(id)arg1;
- (void)drawingEstimatedPropertiesUpdated:(id)arg1;
- (void)drawingMoved:(id)arg1 withEvent:(id)arg2;
- (CDStruct_f17e9403)drawingInputPoint:(CGPoint)arg1 forTouch:(id)arg2 predicted:(BOOL)arg3;
- (void)drawingBegan:(id)arg1;
- (id)currentStroke;
- (BOOL)isRulerSupportedForCurrentInk;
- (void)cancelPurgeResourcesBlock;
- (void)_gestureRecognizerFailed:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (void)drawingChanged:(id)arg1;
- (void)_setDrawing:(id)arg1 tiles:(id)arg2 tileTransform:(CGAffineTransform)arg3 setupComplete:(id /* CDUnknownBlockType */)arg4 completionBlock:(id /* CDUnknownBlockType */)arg5;
- (void)delayCompletionBlockUntilPresentation:(id /* CDUnknownBlockType */)arg1;
- (void)setOpaque:(BOOL)arg1;
- (void)layoutSubviews;
- (void)_drawingDisplay:(double)arg1;
@property(readonly, nonatomic) BOOL hasVisibleStrokes;
- (void)setHidden:(BOOL)arg1;
- (void)schedulePurgeResourcesBlock;
- (void)handleDrawingShouldPause:(BOOL)arg1;
- (BOOL)_isLiveAnimating;
- (void)setNeedsDrawingDisplay;
@property(readonly, nonatomic) PKMetalRendererController *_rendererController;
- (void)setupDisplayLink;
- (void)resizeBackingBuffersForPixelSize:(CGSize)arg1 drawingScale:(double)arg2;
- (void)_setFixedPointSize:(CGSize)arg1 drawingScale:(double)arg2;
- (void)setupMetalViewForWideGamut:(BOOL)arg1 withPixelSize:(CGSize)arg2;
- (void)setupViewWithPixelSize:(CGSize)arg1 drawingSize:(CGSize)arg2;
- (void)adjustedPixelSize:(CGSize )arg1 drawingSize:(CGSize )arg2;
- (double)layerContentsScale;
- (void)setResourceCacheSize:(NSUInteger)arg1;
- (void)setCanvasBackgroundColor:(id)arg1;
@property(readonly, nonatomic) CGRect renderedStrokesBounds;
- (void)setupGestures;
- (void)setupDrawing;
- (void)dealloc;
- (id)initWithFrame:(CGRect)arg1 usePrivateResourceHandler:(BOOL)arg2;
- (id)initWithFrame:(CGRect)arg1;

@end

