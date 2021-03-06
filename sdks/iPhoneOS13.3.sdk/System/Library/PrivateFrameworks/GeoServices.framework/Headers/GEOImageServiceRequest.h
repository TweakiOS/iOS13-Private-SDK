//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>


@class NSMutableArray;

@interface GEOImageServiceRequest : PBRequest <NSCopying>
{
    NSMutableArray *_imageIds;
    unsigned int _height;
    unsigned int _width;
    CDStruct_a1cdbaa7 _flags;
}

+ (BOOL)isValid:(id)arg1;
+ (Class)imageIdType;
// - (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (Class)responseClass;
- (unsigned int)requestTypeCode;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)readAll:(BOOL)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasHeight;
@property(nonatomic) unsigned int height;
@property(nonatomic) BOOL hasWidth;
@property(nonatomic) unsigned int width;
- (id)imageIdAtIndex:(NSUInteger)arg1;
- (NSUInteger)imageIdsCount;
- (void)addImageId:(id)arg1;
- (void)clearImageIds;
@property(retain, nonatomic) NSMutableArray *imageIds;

@end

