//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface CKDPConfiguration : PBCodable <NSCopying>
{
    NSUInteger _created;
    NSUInteger _expires;
    NSMutableArray *_fields;
    struct {
        unsigned int created:1;
        unsigned int expires:1;
    } _has;
}

+ (Class)fieldsType;
@property(nonatomic) NSUInteger expires; // @synthesize expires=_expires;
@property(nonatomic) NSUInteger created; // @synthesize created=_created;
@property(retain, nonatomic) NSMutableArray *fields; // @synthesize fields=_fields;
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
@property(nonatomic) BOOL hasExpires;
@property(nonatomic) BOOL hasCreated;
- (id)fieldsAtIndex:(NSUInteger)arg1;
- (NSUInteger)fieldsCount;
- (void)addFields:(id)arg1;
- (void)clearFields;

@end
