//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@interface PBBProtoTellGizmoToSetCrownOrientation : PBCodable <NSCopying>
{
    BOOL _crownOrientationRight;
    struct {
        unsigned int crownOrientationRight:1;
    } _has;
}

@property(nonatomic) BOOL crownOrientationRight; // @synthesize crownOrientationRight=_crownOrientationRight;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasCrownOrientationRight;

@end

