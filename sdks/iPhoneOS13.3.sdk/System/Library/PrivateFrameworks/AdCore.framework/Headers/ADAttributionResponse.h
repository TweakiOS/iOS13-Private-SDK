//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSMutableArray;

@interface ADAttributionResponse : PBCodable <NSCopying>
{
    NSMutableArray *_versionedAttributionDetails;
}

+ (Class)versionedAttributionDetailsType;
+ (id)options;
@property(retain, nonatomic) NSMutableArray *versionedAttributionDetails; // @synthesize versionedAttributionDetails=_versionedAttributionDetails;
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
- (id)versionedAttributionDetailsAtIndex:(NSUInteger)arg1;
- (NSUInteger)versionedAttributionDetailsCount;
- (void)addVersionedAttributionDetails:(id)arg1;
- (void)clearVersionedAttributionDetails;

@end

