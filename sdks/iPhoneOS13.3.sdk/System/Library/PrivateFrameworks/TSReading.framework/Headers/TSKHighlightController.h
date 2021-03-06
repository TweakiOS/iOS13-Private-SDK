//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TSReading/CALayerDelegate-Protocol.h>

@class CALayer, TSUImage;

@interface TSKHighlightController : NSObject <CALayerDelegate>
{
    CALayer *_imageLayer;
    TSUImage *_image;
    CGRect _overallRect;
    CGAffineTransform _canvasTransform;
    CGAffineTransform _layerTransform;
    CALayer *_containingLayer;
    double _viewScale;
    CGPath _path;
}

@property(retain, nonatomic) TSUImage *image; // @synthesize image=_image;
@property(nonatomic) CGPath path; // @synthesize path=_path;
@property(nonatomic) double viewScale; // @synthesize viewScale=_viewScale;
@property(readonly, nonatomic) CALayer *layer; // @synthesize layer=_containingLayer;
- (void)setCanvasTransform:(CGAffineTransform)arg1 layerTransform:(CGAffineTransform)arg2;
@property(nonatomic) CGAffineTransform transform;
- (CGRect)buildLayersForPath:(CGPath )arg1 withImage:(id)arg2;
- (void)createLayerWithZOrder:(double)arg1 contentsScaleForLayers:(double)arg2;
- (void)hide;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (BOOL)drawRoundedRect;
- (void)reset;
- (void)disconnect;
- (void)dealloc;

@end

