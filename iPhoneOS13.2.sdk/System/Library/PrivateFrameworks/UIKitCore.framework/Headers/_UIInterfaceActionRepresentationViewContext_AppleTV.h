//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UIMotionEffectGroup, UIView;

__attribute__((visibility("hidden")))
@interface _UIInterfaceActionRepresentationViewContext_AppleTV : NSObject
{
    UIMotionEffectGroup *_installedHighlightedActionMotionEffectsGroup;
    BOOL _highlighted;
    BOOL _pressed;
    UIView *_highlightTransformTargetView;
}

@property(nonatomic) BOOL pressed; // @synthesize pressed=_pressed;
@property(nonatomic) BOOL highlighted; // @synthesize highlighted=_highlighted;
@property(nonatomic) __weak UIView *highlightTransformTargetView; // @synthesize highlightTransformTargetView=_highlightTransformTargetView;
// - (void).cxx_destruct;
- (id)_newMotionEffectsGroupForHighlightedAction;
- (void)_removeMotionEffects;
- (void)_insertMotionEffects;
// - (struct CATransform3D)_enlargedTransformForSize:(CGSize)arg1 pressed:(BOOL)arg2;
- (void)_applyHighlightTransform;
- (id)initWithHighlightTransformTargetView:(id)arg1;

@end
