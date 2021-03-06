//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


__attribute__((visibility("hidden")))
@interface ISTransitionApplier : NSObject <CAAnimationDelegate>
{
}

+ (id)defaultApplier;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)_setValue:(id)arg1 forKeyPath:(id)arg2 ofLayer:(id)arg3 withTransitionOptions:(id)arg4 completion:(id /* CDUnknownBlockType */)arg5;
- (void)_applyScale:(double)arg1 toLayer:(id)arg2 withTransitionOptions:(id)arg3 completion:(id /* CDUnknownBlockType */)arg4;
- (void)_applyAlpha:(double)arg1 blurRadius:(double)arg2 toLayer:(id)arg3 withTransitionOptions:(id)arg4 completion:(id /* CDUnknownBlockType */)arg5;
- (void)applyScale:(double)arg1 withTransitionOptions:(id)arg2 toPhotoLayer:(id)arg3 videoLayer:(id)arg4 containerLayer:(id)arg5 completion:(id /* CDUnknownBlockType */)arg6;
- (void)applyOutputInfo:(id)arg1 withTransitionOptions:(id)arg2 toPhotoLayer:(id)arg3 videoLayer:(id)arg4 containerLayer:(id)arg5 completion:(id /* CDUnknownBlockType */)arg6;

@end

