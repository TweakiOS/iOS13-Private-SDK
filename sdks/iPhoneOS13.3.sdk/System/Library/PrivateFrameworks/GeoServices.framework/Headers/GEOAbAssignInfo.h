//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSString, PBUnknownFields;

@interface GEOAbAssignInfo : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    NSString *_abAssignId;
    NSUInteger _createdAtTimestamp;
    NSUInteger _relativeTimestamp;
    struct {
        unsigned int has_createdAtTimestamp:1;
        unsigned int has_relativeTimestamp:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
// - (void).cxx_destruct;
@property(nonatomic) BOOL hasCreatedAtTimestamp;
@property(nonatomic) NSUInteger createdAtTimestamp;
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
@property(nonatomic) BOOL hasRelativeTimestamp;
@property(nonatomic) NSUInteger relativeTimestamp;
@property(retain, nonatomic) NSString *abAssignId;
@property(readonly, nonatomic) BOOL hasAbAssignId;
- (void)refreshRelativeTimeStampWithEventTime:(double)arg1;
- (void)refreshRelativeTimeStamp;
- (id)initWithAbAssignId:(id)arg1 createdAtDate:(id)arg2;

@end

