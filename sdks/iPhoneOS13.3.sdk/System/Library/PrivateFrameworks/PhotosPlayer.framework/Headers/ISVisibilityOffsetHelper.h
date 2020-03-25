//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosPlayer/ISVisibilityOffsetComputer-Protocol.h>

@class UIScrollView;

@interface ISVisibilityOffsetHelper : NSObject <ISVisibilityOffsetComputer>
{
    long long _direction;
    double _maximumDistance;
    double _maximumDistanceLag;
    UIScrollView *__scrollView;
    CGPoint __targetContentOffset;
}

@property(nonatomic, setter=_setTargetContentOffset:) CGPoint _targetContentOffset; // @synthesize _targetContentOffset=__targetContentOffset;
@property(retain, nonatomic, setter=_setScrollView:) UIScrollView *_scrollView; // @synthesize _scrollView=__scrollView;
@property(nonatomic) double maximumDistanceLag; // @synthesize maximumDistanceLag=_maximumDistanceLag;
@property(nonatomic) double maximumDistance; // @synthesize maximumDistance=_maximumDistance;
@property(nonatomic) long long direction; // @synthesize direction=_direction;
// - (void).cxx_destruct;
- (void)getVisibility:(BOOL )arg1 offset:(double )arg2 targetVisibilityOffset:(double )arg3 forView:(NSObject )arg4;
- (CGRect)boundsForView:(NSObject )arg1 inScrollView:(NSObject )arg2;
- (CGRect)visibleRectForScrollView:(NSObject )arg1;
- (struct ISVisibilityRange)_visibilityRangeForRect:(CGRect)arg1;
- (void)_updateDirectionIfNeeded;
- (void)computeVisibilityOffsetsInScrollView:(id)arg1 withTargetContentOffset:(CGPoint)arg2 usingBlock:(id /* CDUnknownBlockType */)arg3;

@end
