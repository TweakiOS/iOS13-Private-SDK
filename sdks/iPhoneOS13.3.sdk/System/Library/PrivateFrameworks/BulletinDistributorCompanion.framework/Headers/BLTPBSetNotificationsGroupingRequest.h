//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>


@class NSString;

@interface BLTPBSetNotificationsGroupingRequest : PBRequest <NSCopying>
{
    int _grouping;
    NSString *_sectionID;
    struct {
        unsigned int grouping:1;
    } _has;
}

@property(retain, nonatomic) NSString *sectionID; // @synthesize sectionID=_sectionID;
// - (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasSectionID;
- (int)StringAsGrouping:(id)arg1;
- (id)groupingAsString:(int)arg1;
@property(nonatomic) BOOL hasGrouping;
@property(nonatomic) int grouping; // @synthesize grouping=_grouping;

@end

