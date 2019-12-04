//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TextRecognition/CRImage.h>

@interface CRImage_PixelBuffer : CRImage
{
}

+ (void)drawVerticalLineAtXOffset:(double)arg1 image:(id)arg2;
- (struct __CVBuffer *)_pixelBufferFromUrl:(id)arg1;
- (void)dealloc;
- (struct vImage_Buffer)createFloatBuffer;
- (struct __CVBuffer *)pixelBufferWithScale:(double)arg1 paddedToSize:(struct CGSize)arg2 adjustedToSize:(struct CGSize *)arg3 mask:(struct CGImage *)arg4;
- (struct __CVBuffer *)pixelBufferWithScale:(double)arg1 paddedToSize:(struct CGSize)arg2 adjustedToSize:(struct CGSize *)arg3;
- (struct __CVBuffer *)pixelBufferWithScale:(double)arg1 paddedToSize:(struct CGSize)arg2;
- (id)imageByOverlayingRects:(struct CGRect *)arg1 count:(long long)arg2;
- (id)imageByOverlayingImage:(id)arg1 opacity:(float)arg2;
- (id)imageByInvertingIntensity;
- (void)writeToFile:(id)arg1;
- (id)imageByApplyingBinaryMask:(id)arg1;
- (id)imageByDilating;
- (id)imageByRotating180;
- (id)imageByPaddingX:(unsigned long long)arg1 paddingY:(unsigned long long)arg2;
- (id)imageByPaddingToRatioAndScalingToWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 alignCenter:(_Bool)arg3;
- (id)imageByPaddingToRatioAndScalingToWidth:(unsigned long long)arg1 height:(unsigned long long)arg2;
- (id)imageByScalingToWidth:(unsigned long long)arg1 height:(unsigned long long)arg2;
- (struct CGImage *)cgImage;
- (struct vImage_Buffer)vImage;
- (id)imageByCorrectingFromOrientation:(unsigned int)arg1;
- (id)imageByRotating90CW;
- (id)imageByCroppingRectangle:(struct CGRect)arg1;
- (id)imageByConvertingToColorSpace:(int)arg1;
- (struct __CVBuffer *)pixelBufferWithScale:(double)arg1 paddedToSize:(struct CGSize)arg2 adjustedToSize:(struct CGSize *)arg3 mask:(struct CGImage *)arg4 format:(unsigned int)arg5;
- (struct __CVBuffer *)pixelBufferWithFormat:(unsigned int)arg1;
- (id)initWithContentsOfURL:(id)arg1 toColorSpace:(int)arg2;
- (id)initWithCVPixelBuffer:(struct __CVBuffer *)arg1;
- (struct __CVBuffer *)pixelBuffer;
- (unsigned long long)width;
- (unsigned long long)height;

@end
