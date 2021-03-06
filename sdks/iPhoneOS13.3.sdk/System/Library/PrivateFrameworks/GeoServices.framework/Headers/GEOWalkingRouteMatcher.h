//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GeoServices/GEORouteMatcher.h>

__attribute__((visibility("hidden")))
@interface GEOWalkingRouteMatcher : GEORouteMatcher
{
    NSUInteger _newStepProgressions;
}

- (BOOL)_supportsSnapping;
- (void)_finishRouteMatch:(id)arg1 previousRouteMatch:(id)arg2 forLocation:(id)arg3;
- (id)_candidateForSegment:(id)arg1 location:(id)arg2 previousRouteMatch:(id)arg3;
- (double)_modifiedHorizontalAccuracy:(double)arg1 routeIndex:(unsigned int)arg2;
- (double)_maxMatchDistance:(double)arg1 routeIndex:(unsigned int)arg2 previousMatchGood:(BOOL)arg3;
- (id)initWithRoute:(id)arg1;

@end

