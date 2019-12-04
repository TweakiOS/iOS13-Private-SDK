//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSDMediaRep.h>

@class TSDFrameRep, TSDMovieInfo;

__attribute__((visibility("hidden")))
@interface TSDMovieRep : TSDMediaRep
{
    TSDFrameRep *_reflectionFrameRep;
    struct CGImage *_alternatePosterImage;
}

+ (double)magicMoveAttributeMatchPercentBetweenOutgoingObject:(id)arg1 incomingObject:(id)arg2 mixingTypeContext:(id)arg3;
@property(nonatomic) struct CGImage *alternatePosterImage; // @synthesize alternatePosterImage=_alternatePosterImage;
- (void)willBeRemoved;
- (struct CGImage *)newFrameMaskForViewScale:(double)arg1 frameRect:(struct CGRect *)arg2;
- (void)drawInContextWithoutEffects:(struct CGContext *)arg1 withContent:(_Bool)arg2 strokeDrawOptions:(unsigned long long)arg3 withOpacity:(_Bool)arg4 forAlphaOnly:(_Bool)arg5 drawChildren:(_Bool)arg6 keepingChildrenPassingTest:(id /* block */)arg7;
- (void)p_drawInContext:(struct CGContext *)arg1 withContent:(_Bool)arg2 withStroke:(_Bool)arg3 withOpacity:(double)arg4 withMask:(_Bool)arg5 forShadowOrHitTest:(_Bool)arg6;
- (void)p_drawPosterImageInContext:(struct CGContext *)arg1 forShadowOrHitTest:(_Bool)arg2;
- (void)i_updateFrameRep;
- (void)p_updateReflectionFrameRep;
- (void)updateFromLayout;
- (void)dealloc;
- (id)movieLayout;
@property(readonly, nonatomic) TSDMovieInfo *movieInfo;
- (id)initWithLayout:(id)arg1 canvas:(id)arg2;

@end
