//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <PhotosUICore/PXDiagnosticsEnvironment-Protocol.h>
#import <PhotosUICore/PXGAccessibilityRendererDelegate-Protocol.h>
#import <PhotosUICore/PXGDiagnosticsProvider-Protocol.h>
#import <PhotosUICore/PXGEngineDelegate-Protocol.h>
#import <PhotosUICore/PXScrollViewControllerObserver-Protocol.h>


@class MTKView, NSDictionary, NSString, PXGAnchor, PXGDebugHUDLayer, PXGEngine, PXGLayout, PXGRectDiagnosticsLayer, PXScrollViewController, PXScrollViewSpeedometer, UIColor;
@protocol PXGViewAccessibilityDelegate, PXGViewDiagnosticsSource;

@interface PXGView : UIView <PXDiagnosticsEnvironment, PXScrollViewControllerObserver, PXGEngineDelegate, PXGAccessibilityRendererDelegate, UIGestureRecognizerDelegate, PXGDiagnosticsProvider>
{
    PXGDebugHUDLayer *_debugHUDLayer;
    PXGRectDiagnosticsLayer *_rectDiagnosticsLayer;
    UIColor *_backgroundColor;
    _Bool canSelectAccessibilityGroupElements;
    _Bool canSelectAccessibilityGroupElementsChildren;
    _Bool _isScrolling;
    _Bool _isAnimatingScroll;
    _Bool _showDebugHUD;
    _Bool _showPerspectiveDebug;
    _Bool _ignoreBoundsChanges;
    PXGLayout *accessibilityRootLayout;
    id <PXGViewAccessibilityDelegate> _accessibilityDelegate;
    PXScrollViewController *_scrollViewController;
    PXScrollViewSpeedometer *_scrollingSpeedometer;
    MTKView *_metalView;
    PXGAnchor *_scrollingAnimationAnchor;
    NSDictionary *_ppt_currentTestOptions;
    id /* block */ _nextDidLayoutHandler;
    id <PXGViewDiagnosticsSource> _diagnosticsSource;
    PXGEngine *_engine;
    struct UIEdgeInsets _hitTestPadding;
}

+ (_Bool)forceAccessibilityEnabled;
+ (void)setForceAccessibilityEnabled:(_Bool)arg1;
+ (_Bool)isAvailable;
+ (long long)screenPixelCount;
@property(readonly, nonatomic) PXGEngine *engine; // @synthesize engine=_engine;
@property(nonatomic) _Bool ignoreBoundsChanges; // @synthesize ignoreBoundsChanges=_ignoreBoundsChanges;
@property(retain, nonatomic) id <PXGViewDiagnosticsSource> diagnosticsSource; // @synthesize diagnosticsSource=_diagnosticsSource;
@property(nonatomic) _Bool showPerspectiveDebug; // @synthesize showPerspectiveDebug=_showPerspectiveDebug;
@property(nonatomic) _Bool showDebugHUD; // @synthesize showDebugHUD=_showDebugHUD;
@property(copy, nonatomic) id /* block */ nextDidLayoutHandler; // @synthesize nextDidLayoutHandler=_nextDidLayoutHandler;
@property(copy, nonatomic, setter=ppt_setCurrentTestOptions:) NSDictionary *ppt_currentTestOptions; // @synthesize ppt_currentTestOptions=_ppt_currentTestOptions;
@property(retain, nonatomic) PXGAnchor *scrollingAnimationAnchor; // @synthesize scrollingAnimationAnchor=_scrollingAnimationAnchor;
@property(nonatomic) _Bool isAnimatingScroll; // @synthesize isAnimatingScroll=_isAnimatingScroll;
@property(nonatomic) _Bool isScrolling; // @synthesize isScrolling=_isScrolling;
@property(readonly, nonatomic) struct UIEdgeInsets hitTestPadding; // @synthesize hitTestPadding=_hitTestPadding;
@property(readonly, nonatomic) MTKView *metalView; // @synthesize metalView=_metalView;
@property(readonly, nonatomic) PXScrollViewSpeedometer *scrollingSpeedometer; // @synthesize scrollingSpeedometer=_scrollingSpeedometer;
@property(readonly, nonatomic) PXScrollViewController *scrollViewController; // @synthesize scrollViewController=_scrollViewController;
@property(nonatomic) __weak id <PXGViewAccessibilityDelegate> accessibilityDelegate; // @synthesize accessibilityDelegate=_accessibilityDelegate;
- (id)viewForSpriteIndex:(unsigned int)arg1;
@property(readonly, nonatomic) NSDictionary *ppt_extraResults;
- (void)ppt_cleanUpAfterTest:(id)arg1 isScrollTest:(_Bool)arg2;
- (void)ppt_prepareForTest:(id)arg1 withOptions:(id)arg2 isScrollTest:(_Bool)arg3;
- (void)test_installRenderSnapshotHandler:(id /* block */)arg1;
@property(readonly, nonatomic) _Bool canSelectAccessibilityGroupElementsChildren; // @synthesize canSelectAccessibilityGroupElementsChildren;
@property(readonly, nonatomic) _Bool canSelectAccessibilityGroupElements; // @synthesize canSelectAccessibilityGroupElements;
@property(readonly, nonatomic) PXGLayout *accessibilityRootLayout; // @synthesize accessibilityRootLayout;
- (id)accessibilityViewForSpriteIndex:(unsigned int)arg1;
- (id)accessibilityHitTestResultAtPoint:(struct CGPoint)arg1;
- (void)axScrollToAsset:(id)arg1;
- (id)assetClosestToAsset:(id)arg1 inDirection:(unsigned long long)arg2;
- (void)selectAssets:(id)arg1;
- (_Bool)itemDidShowDefaultUIAtLocation:(struct CGPoint)arg1;
- (_Bool)itemDidShowAlternateUIAtLocation:(struct CGPoint)arg1;
- (_Bool)itemWasRightClickedWithHitTestResult:(id)arg1 location:(struct CGPoint)arg2;
- (_Bool)itemWasDoubleClickedWithHitTestResult:(id)arg1;
@property(readonly, copy, nonatomic) NSString *diagnosticDescription;
- (void)_ensureEndAnimatedScroll;
- (void)scrollViewControllerDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewControllerWillBeginScrollingAnimation:(id)arg1 towardsContentEdges:(unsigned long long)arg2;
- (void)scrollViewControllerDidEndScrolling:(id)arg1;
- (void)scrollViewControllerWillBeginScrolling:(id)arg1;
- (void)scrollViewControllerDidScroll:(id)arg1;
- (void)scrollViewControllerDidLayoutSubviews:(id)arg1;
@property(nonatomic) _Bool slowAnimationsEnabled;
- (void)engine:(id)arg1 updateDebugHUDWithStats:(CDStruct_58b866b9 *)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)handlePan:(id)arg1;
- (struct CGImage *)textureSnapshotForSpriteReference:(id)arg1;
- (id)regionOfInterestForHitTestResult:(id)arg1;
- (id)regionOfInterestForSpriteReference:(id)arg1;
- (id)hitTestResultsInDirection:(unsigned long long)arg1 fromSpriteReference:(id)arg2;
- (id)hitTestResultsInRect:(struct CGRect)arg1 passingTest:(id /* block */)arg2;
- (id)hitTestResultsAtPoint:(struct CGPoint)arg1 padding:(struct UIEdgeInsets)arg2 passingTest:(id /* block */)arg3;
- (id)hitTestResultsAtPoint:(struct CGPoint)arg1;
- (id)hitTestResultAtPoint:(struct CGPoint)arg1 padding:(struct UIEdgeInsets)arg2 passingTest:(id /* block */)arg3;
- (id)hitTestResultAtPoint:(struct CGPoint)arg1;
- (void)disablePreheating;
- (void)installLayoutCompletionHandler:(id /* block */)arg1;
- (void)_installNextDidLayoutHandler:(id /* block */)arg1;
- (void)_updateUserInterfaceDirection;
- (void)_updateLayoutScreenScale;
- (void)_updateIsVisible;
- (void)_updateLayoutViewEnvironment;
- (void)installAnimationRenderingCompletionHandler:(id /* block */)arg1;
- (void)registerAllTextureProvidersWithMediaProvider:(id)arg1 pixelBufferSourcesProvider:(id)arg2 namedImagesBundle:(id)arg3;
- (void)registerAllTextureProvidersWithMediaProvider:(id)arg1;
- (void)registerTextureProvider:(id)arg1 forMediaKind:(int)arg2;
@property(retain, nonatomic) PXGLayout *rootLayout;
- (void)setHidden:(_Bool)arg1;
- (void)didMoveToWindow;
- (struct UIColor *)backgroundColor;
- (void)setBackgroundColor:(struct UIColor *)arg1;
- (void)_updateMetalView;
- (void)safeAreaInsetsDidChange;
- (void)_dynamicUserInterfaceTraitDidChange;
- (void)traitCollectionDidChange:(id)arg1;
- (void)_willChangeBoundsSizeFrom:(struct CGRect)arg1 toBounds:(struct CGRect)arg2;
- (void)setFrame:(struct CGRect)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)_updateAccessibilityStatus;
- (void)_applicationAccessibilityStatusChanged:(id)arg1;
- (void)_forceAccessibilityEnabledChanged:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)initWithFrame:(struct CGRect)arg1;
@property(readonly, nonatomic) _Bool hasExtendedColorDisplay;
- (id)curatedLibraryHitTestResultsInRect:(struct CGRect)arg1 withControl:(long long)arg2;
- (void)enumerateCuratedLibraryHitTestResultsInRect:(struct CGRect)arg1 usingBlock:(id /* block */)arg2;
- (void)enumerateCuratedLibraryHitTestResultsInDirection:(unsigned long long)arg1 fromSpriteReference:(id)arg2 usingBlock:(id /* block */)arg3;
- (id)firstCuratedLibraryHitTestResultsAtPoint:(struct CGPoint)arg1 withControl:(long long)arg2;
- (void)enumerateCuratedLibraryHitTestResultsAtPoint:(struct CGPoint)arg1 withControls:(id)arg2 usingBlock:(id /* block */)arg3;
- (void)enumerateCuratedLibraryHitTestResultsAtPoint:(struct CGPoint)arg1 usingBlock:(id /* block */)arg2;
- (id)px_diagnosticsItemProvidersForPoint:(struct CGPoint)arg1 inCoordinateSpace:(id)arg2;
- (_Bool)isObjectReference:(id)arg1 visuallyBeforeObjectReference:(id)arg2;
- (struct CGImage *)_fallbackImageForAssetReference:(id)arg1 mediaProvider:(id)arg2;
- (id)regionOfInterestForAssetReference:(id)arg1 image:(struct CGImage **)arg2 fallbackMediaProvider:(id)arg3;
- (id)regionOfInterestForObjectReference:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

