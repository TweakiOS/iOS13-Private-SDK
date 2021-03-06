//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface TLKLayoutUtilities : NSObject
{
}

+ (BOOL)isSuperLargeAccessibilitySize;
+ (CGSize)maxThumbnailSize;
+ (void)applyRowBoundedSizingToImageView:(id)arg1;
+ (BOOL)isWideScreen;
+ (CGSize)idealImageSizeWithSize:(CGSize)arg1 fittingSize:(CGSize)arg2;
+ (void)setDynamicBaselineAlignmentsForLabel:(id)arg1 top:(double)arg2 bottom:(double)arg3;
+ (double)scaledValueForValue:(double)arg1 withFont:(id)arg2;
+ (double)deviceScaledFlooredValue:(double)arg1;
+ (CGRect)deviceScaledRoundedRect:(CGRect)arg1;
+ (double)deviceScaledRoundedValue:(double)arg1;
+ (double)roundedValue:(double)arg1 inView:(id)arg2;
+ (double)flooredValue:(double)arg1 inView:(id)arg2;
+ (double)ceilingValue:(double)arg1 inView:(id)arg2;
+ (double)bestScaleForView:(id)arg1;
+ (void)requireIntrinsicSizeForView:(id)arg1 withPriority:(float)arg2;
+ (void)requireIntrinsicSizeForView:(id)arg1;

@end

