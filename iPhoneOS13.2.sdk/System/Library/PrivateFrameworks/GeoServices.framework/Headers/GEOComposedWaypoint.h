//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>



@class GEOLatLng, GEOMapItemStorage, GEOWaypointTyped, PBDataReader;

@interface GEOComposedWaypoint : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    GEOLatLng *_latLng;
    GEOMapItemStorage *_mapItemStorage;
    GEOWaypointTyped *_waypoint;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_latLng:1;
        unsigned int read_mapItemStorage:1;
        unsigned int read_waypoint:1;
        unsigned int wrote_latLng:1;
        unsigned int wrote_mapItemStorage:1;
        unsigned int wrote_waypoint:1;
    } _flags;
}

+ (_Bool)isValid:(id)arg1;
+ (void)composedWaypointForMapServiceResponse:(id)arg1 clientAttributes:(id)arg2 error:(id)arg3 handler:(id /* block */)arg4;
+ (id)composedWaypointForWaypointTyped:(id)arg1 completionHandler:(id /* block */)arg2 networkActivityHandler:(id /* block */)arg3;
+ (id)composedWaypointForTransitID:(unsigned long long)arg1 coordinate:(CDStruct_c3b9c2ee)arg2 isCurrentLocation:(_Bool)arg3 traits:(id)arg4 clientAttributes:(id)arg5 completionHandler:(id /* block */)arg6 networkActivityHandler:(id /* block */)arg7;
+ (id)composedWaypointForIncompleteMapItem:(id)arg1 traits:(id)arg2 clientAttributes:(id)arg3 completionHandler:(id /* block */)arg4 networkActivityHandler:(id /* block */)arg5;
+ (id)composedWaypointForMapItem:(id)arg1 traits:(id)arg2 auditToken:(id)arg3 clientAttributes:(id)arg4 completionHandler:(id /* block */)arg5 networkActivityHandler:(id /* block */)arg6;
+ (id)composedWaypointForMapItem:(id)arg1 traits:(id)arg2 clientAttributes:(id)arg3 completionHandler:(id /* block */)arg4 networkActivityHandler:(id /* block */)arg5;
+ (id)composedWaypointForMapItemToRefine:(id)arg1 traits:(id)arg2 auditToken:(id)arg3 clientAttributes:(id)arg4 completionHandler:(id /* block */)arg5 networkActivityHandler:(id /* block */)arg6;
+ (id)composedWaypointForMapItemToRefine:(id)arg1 traits:(id)arg2 clientAttributes:(id)arg3 completionHandler:(id /* block */)arg4 networkActivityHandler:(id /* block */)arg5;
+ (id)composedWaypointForSearchString:(id)arg1 completionItem:(id)arg2 traits:(id)arg3 clientAttributes:(id)arg4 clientResolvedCompletionHandler:(id /* block */)arg5 completionHandler:(id /* block */)arg6 networkActivityHandler:(id /* block */)arg7;
+ (id)composedWaypointForSearchString:(id)arg1 completionItem:(id)arg2 traits:(id)arg3 clientAttributes:(id)arg4 completionHandler:(id /* block */)arg5 networkActivityHandler:(id /* block */)arg6;
+ (id)composedWaypointForAddressString:(id)arg1 traits:(id)arg2 clientAttributes:(id)arg3 completionHandler:(id /* block */)arg4 networkActivityHandler:(id /* block */)arg5;
+ (id)composedWaypointForCurrentLocation:(id)arg1 traits:(id)arg2 auditToken:(id)arg3 completionHandler:(id /* block */)arg4 networkActivityHandler:(id /* block */)arg5;
+ (id)composedWaypointForCurrentLocation:(id)arg1 traits:(id)arg2 completionHandler:(id /* block */)arg3 networkActivityHandler:(id /* block */)arg4;
+ (id)composedWaypointForLocation:(id)arg1 mapItem:(id)arg2 traits:(id)arg3 auditToken:(id)arg4 completionHandler:(id /* block */)arg5 networkActivityHandler:(id /* block */)arg6;
+ (id)composedWaypointForLocation:(id)arg1 mapItem:(id)arg2 traits:(id)arg3 completionHandler:(id /* block */)arg4 networkActivityHandler:(id /* block */)arg5;
+ (id)composedWaypointForID:(unsigned long long)arg1 resultsProviderID:(int)arg2 contentProvider:(id)arg3 traits:(id)arg4 clientAttributes:(id)arg5 completionHandler:(id /* block */)arg6 networkActivityHandler:(id /* block */)arg7;
+ (id)composedWaypointForIdentifier:(id)arg1 traits:(id)arg2 clientAttributes:(id)arg3 completionHandler:(id /* block */)arg4 networkActivityHandler:(id /* block */)arg5;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(retain, nonatomic) GEOLatLng *latLng;
@property(readonly, nonatomic) _Bool hasLatLng;
- (void)_readLatLng;
@property(retain, nonatomic) GEOMapItemStorage *mapItemStorage;
@property(readonly, nonatomic) _Bool hasMapItemStorage;
- (void)_readMapItemStorage;
@property(retain, nonatomic) GEOWaypointTyped *waypoint;
@property(readonly, nonatomic) _Bool hasWaypoint;
- (void)_readWaypoint;
- (id)initWithData:(id)arg1;
- (id)init;
- (id)_regionCandidatesForContainment;
- (id)_addressCandidatesForComparison;
- (id)_locationCandidatesForComparison;
- (id)_muidCandidatesForComparison;
- (_Bool)isSameAs:(id)arg1 comparisonCriteria:(unsigned long long)arg2;
- (_Bool)isSameAs:(id)arg1;
- (id)bestLatLng;
- (_Bool)isLocationWaypointType;
- (id)timezone;
- (id)geoMapItem;
- (void)setIsCurrentLocation:(_Bool)arg1;
- (_Bool)isCurrentLocation;
- (id)initWithLocation:(id)arg1 isCurrentLocation:(_Bool)arg2;
- (id)initWithMapItem:(id)arg1;
- (double)distanceToWaypoint:(id)arg1;

@end
