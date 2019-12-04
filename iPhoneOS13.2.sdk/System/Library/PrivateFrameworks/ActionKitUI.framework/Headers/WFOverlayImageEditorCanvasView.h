//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>



@class NSString, UIImageView, UIRotationGestureRecognizer, WFOverlayImageTransform;

__attribute__((visibility("hidden")))
@interface WFOverlayImageEditorCanvasView : UIView <UIGestureRecognizerDelegate>
{
    _Bool _rotationEnabled;
    WFOverlayImageTransform *_imageTransform;
    UIRotationGestureRecognizer *_rotateRecognizer;
    UIImageView *_backgroundImageView;
    UIImageView *_overlayImageView;
}

@property(readonly, nonatomic) __weak UIImageView *overlayImageView; // @synthesize overlayImageView=_overlayImageView;
@property(readonly, nonatomic) __weak UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(readonly, nonatomic) __weak UIRotationGestureRecognizer *rotateRecognizer; // @synthesize rotateRecognizer=_rotateRecognizer;
@property(readonly, nonatomic) WFOverlayImageTransform *imageTransform; // @synthesize imageTransform=_imageTransform;
@property(nonatomic) _Bool rotationEnabled; // @synthesize rotationEnabled=_rotationEnabled;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)reset;
- (void)setOverlayImageOpacity:(double)arg1;
- (void)handlePinchGesture:(id)arg1;
- (void)handlePanGesture:(id)arg1;
- (void)handleRotateGesture:(id)arg1;
- (void)layoutSubviews;
- (id)initWithBackgroundImage:(id)arg1 overlayImage:(id)arg2 transform:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

