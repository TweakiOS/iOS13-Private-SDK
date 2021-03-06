//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GEOComposedRoute, GEOComposedRouteStep, GEOLocation, GEORouteMatch, GEORouteMatcher;

@interface MNRouteProximitySensor : NSObject
{
    double _proximityThreshold;
    GEOLocation *_location;
    GEORouteMatch *_routeMatch;
    GEORouteMatcher *_routeMatcher;
    NSUInteger _proximity;
}

@property(readonly, nonatomic) NSUInteger proximity; // @synthesize proximity=_proximity;
// - (void).cxx_destruct;
- (void)_updateRouteMatch;
- (void)_updateProximity;
@property(nonatomic) double proximityThreshold;
@property(readonly, nonatomic) double remainingTimeOnRoute;
@property(readonly, nonatomic) double distanceFromDestination;
@property(readonly, nonatomic) double distanceFromRoute;
@property(readonly, nonatomic) double distanceFromOrigin;
@property(readonly, nonatomic) double courseOnRoute;
@property(readonly, nonatomic) GEOComposedRouteStep *closestStepOnRoute;
@property(readonly, nonatomic) GEOLocation *closestPointOnRoute;
@property(readonly, nonatomic) GEOLocation *location;
@property(readonly, nonatomic) GEOComposedRoute *route;
- (void)updateForLocation:(id)arg1;
- (id)initWithRoute:(id)arg1;
- (id)init;

@end

