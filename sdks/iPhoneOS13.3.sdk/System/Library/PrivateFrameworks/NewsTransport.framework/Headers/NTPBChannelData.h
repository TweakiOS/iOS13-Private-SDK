//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@interface NTPBChannelData : PBCodable <NSCopying>
{
    BOOL _isBundleChannel;
    CDStruct_8fa617c1 _has;
}

@property(nonatomic) BOOL isBundleChannel; // @synthesize isBundleChannel=_isBundleChannel;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasIsBundleChannel;

@end

