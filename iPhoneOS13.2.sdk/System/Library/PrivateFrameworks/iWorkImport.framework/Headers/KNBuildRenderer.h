//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/KNAnimationRenderer.h>


@class CALayer, KNAnimatedBuild, KNAnimationInfo, KNBuildChunk, NSArray, NSMapTable, NSMutableArray, NSMutableSet, NSString, TSDDrawableInfo, TSDFPSCounter, TSDRep, TSDTextureDescription, TSDTextureSet;

__attribute__((visibility("hidden")))
@interface KNBuildRenderer : KNAnimationRenderer <CAAnimationDelegate>
{
    long long _numberOfAnimationsStarted;
    NSMapTable *_animatedLayers;
    CALayer *_parentLayer;
    id _buildEndCallbackTarget;
    SEL _buildEndCallbackSelector;
    NSMutableArray *_animatedBuildsToStartAtEnd;
    TSDTextureSet *_endOfBuildTextureSet;
    TSDTextureSet *_textureSet;
    TSDTextureSet *_finalAttributesTextureSet;
    KNAnimationInfo *_animationInfo;
    KNAnimatedBuild *_animatedBuild;
    KNBuildChunk *_buildStage;
    TSDDrawableInfo *_info;
    _Bool _isPreview;
    _Bool _interrupted;
    _Bool _isAnimationForPlayback;
    _Bool _areAnimationsReadyToStart;
    _Bool _usingFinalTexture;
    _Bool _isTextureCachedAtEndOfBuild;
    _Bool _shouldUseMagicMoveTextures;
    _Bool _isNonCachedTextureValid;
    _Bool _animationWillBeginPerformed;
    TSDFPSCounter *_FPSCounter;
    TSDTextureDescription *_textureDescription;
    NSMutableSet *_texturesToTeardown;
}

@property(retain, nonatomic) TSDTextureDescription *textureDescription; // @synthesize textureDescription=_textureDescription;
@property(retain, nonatomic) CALayer *parentLayer; // @synthesize parentLayer=_parentLayer;
@property(readonly, nonatomic) TSDDrawableInfo *info; // @synthesize info=_info;
@property(readonly, nonatomic) KNBuildChunk *buildStage; // @synthesize buildStage=_buildStage;
@property(readonly, nonatomic) NSArray *animatedBuildsToStartAtEnd; // @synthesize animatedBuildsToStartAtEnd=_animatedBuildsToStartAtEnd;
@property(readonly, nonatomic) KNAnimatedBuild *animatedBuild; // @synthesize animatedBuild=_animatedBuild;
- (void)p_resetAnimations;
- (void)p_removeAnimations;
- (void)resetPreviousStageToUnhighlightOnTextureSet:(id)arg1;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)updateAnimationTestingLog;
- (id)p_keyForAnimation;
- (id)setupFinalTextureGivenCurrentTextureSet:(id)arg1 isRenderingToContext:(_Bool)arg2;
- (_Bool)p_isDriftAnimation;
- (void)fadeOutPreviousStageOn:(id)arg1 atLayerTime:(double)arg2;
- (void)removeBuildToStartAtEnd:(id)arg1;
- (void)addBuildToStartAtEnd:(id)arg1;
- (void)resumeAnimationsIfPausedAtTime:(double)arg1;
- (void)pauseAnimationsAtTime:(double)arg1;
- (void)stopAnimations;
@property(readonly, nonatomic) long long textureStageIndex;
@property(readonly, nonatomic) unsigned long long textureDeliveryStyle;
- (void)registerForBuildEndCallback:(SEL)arg1 target:(id)arg2;
- (void)forceRemoveAnimations;
- (void)removeAnimationsAndFinish:(_Bool)arg1;
- (void)updateAnimationsForLayerTime:(double)arg1;
- (_Bool)addAnimationsAtLayerTime:(double)arg1;
- (void)resetHighlightsBeforeAnimationOnTextureSet:(id)arg1;
- (void)animationDidEnd;
- (id)animationWillBegin;
- (id)p_initializeTextureSetForEndOfBuild:(_Bool)arg1 endOfSlide:(_Bool)arg2 description:(id)arg3 isRenderingToContext:(_Bool)arg4;
- (id)initializeTextureSetForEndOfBuild:(_Bool)arg1 endOfSlide:(_Bool)arg2 description:(id)arg3 isRenderingToContext:(_Bool)arg4;
- (void)setGeometryAndActionAttributesOnTextureSet:(id)arg1 isAtEndOfBuild:(_Bool)arg2 isAtEndOfSlide:(_Bool)arg3 isRenderingToContext:(_Bool)arg4;
- (void)animate;
- (void)setLayerVisibility:(id)arg1 isAtEndOfBuild:(_Bool)arg2;
- (_Bool)p_isTextDrawable;
- (void)p_updateTextureDescription:(id)arg1 forStage:(long long)arg2 isAtEndOfBuild:(_Bool)arg3;
- (id)p_textureSetForStage:(long long)arg1 description:(id)arg2 isAtEndOfBuild:(_Bool)arg3 shouldForceRebuild:(_Bool)arg4 shouldRender:(_Bool)arg5;
- (void)setEndOfBuildTextureSet:(id)arg1;
- (id)textureDescriptionForStage:(long long)arg1 isAtEndOfBuild:(_Bool)arg2;
- (id)textureSetForStage:(long long)arg1 description:(id)arg2 isAtEndOfBuild:(_Bool)arg3 shouldForceRebuild:(_Bool)arg4 shouldRender:(_Bool)arg5;
- (id)textureSetWithoutRenderedContents;
@property(readonly, nonatomic) TSDTextureSet *textureSet;
- (void)waitUntilAsyncRenderingIsCompleteShouldCancel:(_Bool)arg1;
- (void)renderTextures;
- (void)generateTextures;
- (_Bool)shouldPreGenerateTextures;
- (id)p_filterForTextDelivery:(long long)arg1;
- (_Bool)p_isMovieInfo;
@property(readonly, nonatomic) TSDRep *rep;
- (void)setupPluginContext;
- (id)loadPluginIfNeeded;
@property(readonly, copy) NSString *description;
- (void)teardown;
- (void)dealloc;
- (id)initWithAnimatedBuild:(id)arg1 info:(id)arg2 buildStage:(id)arg3 animatedSlideView:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

