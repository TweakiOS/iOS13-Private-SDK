//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIImageView.h>

@class NTKNumeralsAnalogFaceConfiguration, UIColor;

@interface NTKNumeralsHourView : UIImageView
{
    long long _hour;
    NSUInteger _style;
    NTKNumeralsAnalogFaceConfiguration *_faceConfiguration;
    UIColor *_appliedColor;
    BOOL _isLoaded;
}

@property(readonly) BOOL isLoaded; // @synthesize isLoaded=_isLoaded;
// - (void).cxx_destruct;
- (id)_imageNameForStyle:(NSUInteger)arg1 hour:(long long)arg2;
- (void)_applyTintColor:(id)arg1;
- (id)_hourColorForDevice:(id)arg1 faceColor:(NSUInteger)arg2 colorSchemeUnits:(NSUInteger)arg3;
- (void)applyTransitionFraction:(double)arg1 fromFaceColor:(NSUInteger)arg2 toFaceColor:(NSUInteger)arg3 faceConfiguration:(id)arg4;
- (void)applyFaceColorFromFaceConfiguration:(id)arg1;
- (void)layoutSubviews;
- (void)load;
- (id)initUnloadedHourViewForHour:(long long)arg1 style:(NSUInteger)arg2 faceConfiguration:(id)arg3;
- (id)initForHour:(long long)arg1 style:(NSUInteger)arg2 faceConfiguration:(id)arg3;

@end

