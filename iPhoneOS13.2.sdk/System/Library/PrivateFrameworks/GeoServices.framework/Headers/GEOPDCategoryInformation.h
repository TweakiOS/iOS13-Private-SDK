//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>



@class GEOLocalizedString, GEOStyleAttributes, NSString, PBDataReader, PBUnknownFields;

@interface GEOPDCategoryInformation : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOLocalizedString *_localizedMapsCategoryName;
    NSString *_mapsCategoryId;
    GEOStyleAttributes *_mapsCategoryStyleAttributes;
    NSString *_walletCategoryId;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_localizedMapsCategoryName:1;
        unsigned int read_mapsCategoryId:1;
        unsigned int read_mapsCategoryStyleAttributes:1;
        unsigned int read_walletCategoryId:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_localizedMapsCategoryName:1;
        unsigned int wrote_mapsCategoryId:1;
        unsigned int wrote_mapsCategoryStyleAttributes:1;
        unsigned int wrote_walletCategoryId:1;
    } _flags;
}

+ (_Bool)isValid:(id)arg1;
- (void)clearUnknownFields:(_Bool)arg1;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
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
@property(retain, nonatomic) GEOStyleAttributes *mapsCategoryStyleAttributes;
@property(readonly, nonatomic) _Bool hasMapsCategoryStyleAttributes;
- (void)_readMapsCategoryStyleAttributes;
@property(retain, nonatomic) GEOLocalizedString *localizedMapsCategoryName;
@property(readonly, nonatomic) _Bool hasLocalizedMapsCategoryName;
- (void)_readLocalizedMapsCategoryName;
@property(retain, nonatomic) NSString *mapsCategoryId;
@property(readonly, nonatomic) _Bool hasMapsCategoryId;
- (void)_readMapsCategoryId;
@property(retain, nonatomic) NSString *walletCategoryId;
@property(readonly, nonatomic) _Bool hasWalletCategoryId;
- (void)_readWalletCategoryId;
- (id)initWithData:(id)arg1;
- (id)init;

@end
