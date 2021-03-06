//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContentKit/DCURLGenerator.h>

@class DCMapsLink, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface DCMapsURLGenerator : DCURLGenerator
{
    NSMutableDictionary *_queryDictionary;
    DCMapsLink *_mapsLink;
}

+ (id)URLWithMapsLink:(id)arg1;
@property(readonly, nonatomic) DCMapsLink *mapsLink; // @synthesize mapsLink=_mapsLink;
// - (void).cxx_destruct;
- (void)setString:(id)arg1 forQueryKey:(id)arg2;
- (id)mapType;
- (id)directionsMode;
- (void)populateQueryDictionary;
@property(readonly, nonatomic) NSMutableDictionary *queryDictionary; // @synthesize queryDictionary=_queryDictionary;
- (id)URL;
- (id)query;
- (id)path;
- (id)host;
- (id)scheme;
- (id)initWithMapsLink:(id)arg1;

@end

