//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSTLayoutDynamicResizeInfo.h>

__attribute__((visibility("hidden")))
@interface TSTLayoutDynamicResizeInfoUnify : TSTLayoutDynamicResizeInfo
{
    double mTargetWidth;
    double mTargetHeight;
}

@property(readonly, nonatomic) double targetHeight; // @synthesize targetHeight=mTargetHeight;
@property(readonly, nonatomic) double targetWidth; // @synthesize targetWidth=mTargetWidth;
- (_Bool)applyFixedWidth:(double)arg1;
- (_Bool)applyFixedHeight:(double)arg1;
- (void)captureNewMinimumRowHeights:(id)arg1;
- (double)applyResizeWidthFactor:(double)arg1;
- (double)applyResizeHeightFactor:(double)arg1;
- (_Bool)p_applyUnifyFixedSize:(double)arg1 region:(id)arg2 direction:(long long)arg3 count:(unsigned int)arg4 currentArray:(double *)arg5 minimumArray:(double *)arg6;
- (double)p_applyUnifyResizeFactor:(double)arg1 region:(id)arg2 direction:(long long)arg3 totalOfCaptured:(double)arg4 count:(unsigned int)arg5 capturedArray:(double *)arg6 currentArray:(double *)arg7 minimumArray:(double *)arg8;

@end
