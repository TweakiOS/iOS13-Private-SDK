//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface TSWPListLabelGeometry : NSObject
{
    double mScale;
    double mBaselineOffset;
    BOOL mScaleWithText;
}

+ (id)listLabelGeometry;
@property(nonatomic) BOOL scaleWithText; // @synthesize scaleWithText=mScaleWithText;
@property(nonatomic) double baselineOffset; // @synthesize baselineOffset=mBaselineOffset;
@property(nonatomic) double scale; // @synthesize scale=mScale;
- (id)description;
// - (id)copyWithZone:(_NSZone )arg1;
- (BOOL)isEqual:(id)arg1;
- (id)initWithScale:(double)arg1 scaleWithText:(BOOL)arg2 baselineOffset:(double)arg3;

@end

