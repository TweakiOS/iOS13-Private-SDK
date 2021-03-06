//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class GEOPDVenueLabel, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDVenueLevel : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    GEOPDVenueLabel *_label;
    NSUInteger _levelId;
    int _ordinal;
    struct {
        unsigned int has_levelId:1;
        unsigned int has_ordinal:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
// - (void).cxx_destruct;
- (void)clearUnknownFields:(BOOL)arg1;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)readAll:(BOOL)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(retain, nonatomic) GEOPDVenueLabel *label;
@property(readonly, nonatomic) BOOL hasLabel;
@property(nonatomic) BOOL hasOrdinal;
@property(nonatomic) int ordinal;
@property(nonatomic) BOOL hasLevelId;
@property(nonatomic) NSUInteger levelId;

@end

