//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class GEOPlaceResult, PBDataReader;

__attribute__((visibility("hidden")))
@interface GEOCluster : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    CDStruct_95bda58d _indexs;
    GEOPlaceResult *_container;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
//     struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_indexs:1;
        unsigned int read_container:1;
        unsigned int wrote_indexs:1;
        unsigned int wrote_container:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
// - (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (void)clearSensitiveFields;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)readAll:(BOOL)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (void)setIndexs:(int )arg1 count:(NSUInteger)arg2;
- (int)indexAtIndex:(NSUInteger)arg1;
- (void)_addNoFlagsIndex:(int)arg1;
- (void)addIndex:(int)arg1;
- (void)clearIndexs;
@property(readonly, nonatomic) int indexs;
@property(readonly, nonatomic) NSUInteger indexsCount;
- (void)_readIndexs;
@property(retain, nonatomic) GEOPlaceResult *container;
@property(readonly, nonatomic) BOOL hasContainer;
- (void)_readContainer;
- (void)dealloc;
- (id)initWithData:(id)arg1;
- (id)init;

@end

