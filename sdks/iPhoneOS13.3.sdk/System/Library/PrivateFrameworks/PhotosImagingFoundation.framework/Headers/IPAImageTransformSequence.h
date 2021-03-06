//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosImagingFoundation/IPAImageTransform-Protocol.h>

@class NSArray;

@interface IPAImageTransformSequence : NSObject <IPAImageTransform>
{
    NSArray *_transforms;
}

// - (void).cxx_destruct;
- (id)description;
- (id)inverseTransform;
- (CGPoint)mapPoint:(CGPoint)arg1;
- (id)intrinsicGeometry;
- (id)inputGeometry;
- (BOOL)canAlignToPixelsExactly;
- (id)initWithTransforms:(id)arg1;

@end

