//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class UIColor;

@interface MPUBorderConfiguration : NSObject <NSCopying>
{
    double _borderAlpha;
    UIColor *_borderColor;
    double _borderWidth;
    double _fillAlpha;
    UIColor *_fillColor;
    double _dropShadowAlpha;
    UIColor *_dropShadowColor;
    NSUInteger _dropShadowEdges;
    double _dropShadowWidth;
}

@property(nonatomic) double dropShadowWidth; // @synthesize dropShadowWidth=_dropShadowWidth;
@property(nonatomic) NSUInteger dropShadowEdges; // @synthesize dropShadowEdges=_dropShadowEdges;
@property(retain, nonatomic) UIColor *dropShadowColor; // @synthesize dropShadowColor=_dropShadowColor;
@property(nonatomic) double dropShadowAlpha; // @synthesize dropShadowAlpha=_dropShadowAlpha;
@property(retain, nonatomic) UIColor *fillColor; // @synthesize fillColor=_fillColor;
@property(nonatomic) double fillAlpha; // @synthesize fillAlpha=_fillAlpha;
@property(nonatomic) double borderWidth; // @synthesize borderWidth=_borderWidth;
@property(retain, nonatomic) UIColor *borderColor; // @synthesize borderColor=_borderColor;
@property(nonatomic) double borderAlpha; // @synthesize borderAlpha=_borderAlpha;
// - (void).cxx_destruct;
@property(readonly, nonatomic, getter=isFullyTransparent) BOOL fullyTransparent;
// - (id)copyWithZone:(_NSZone )arg1;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (id)init;

@end

