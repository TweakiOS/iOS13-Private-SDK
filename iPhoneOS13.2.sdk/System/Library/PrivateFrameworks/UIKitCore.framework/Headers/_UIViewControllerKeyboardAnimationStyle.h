//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UIInputViewAnimationStyleDirectional.h>

@class _UIViewControllerKeyboardAnimationStyleInfo, _UIViewControllerTransitionContext;

__attribute__((visibility("hidden")))
@interface _UIViewControllerKeyboardAnimationStyle : UIInputViewAnimationStyleDirectional
{
    _Bool _disableAlongsideView;
    _Bool _allowCustomTransition;
    _UIViewControllerTransitionContext *_context;
    _UIViewControllerKeyboardAnimationStyleInfo *_info;
}

+ (id)animationStyleWithContext:(id)arg1 useCustomTransition:(_Bool)arg2;
@property(nonatomic) _Bool allowCustomTransition; // @synthesize allowCustomTransition=_allowCustomTransition;
@property(readonly, nonatomic) _UIViewControllerKeyboardAnimationStyleInfo *info; // @synthesize info=_info;
@property(nonatomic) _Bool disableAlongsideView; // @synthesize disableAlongsideView=_disableAlongsideView;
@property(retain, nonatomic) _UIViewControllerTransitionContext *context; // @synthesize context=_context;
- (id)controllerForStartPlacement:(id)arg1 endPlacement:(id)arg2;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)canDismissWithScrollView;
- (void)_launchAnimation:(id /* block */)arg1 afterStarted:(id /* block */)arg2 completion:(id /* block */)arg3 forHost:(id)arg4 fromCurrentPosition:(_Bool)arg5;
- (void)launchAnimation:(id /* block */)arg1 afterStarted:(id /* block */)arg2 completion:(id /* block */)arg3 forHost:(id)arg4 fromCurrentPosition:(_Bool)arg5;
- (void)dealloc;
- (id)initWithContext:(id)arg1;
- (_Bool)isAnimationCompleted;

@end
