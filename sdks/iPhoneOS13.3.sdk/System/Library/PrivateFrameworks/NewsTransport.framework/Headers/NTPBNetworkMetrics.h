//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSMutableArray;

@interface NTPBNetworkMetrics : PBCodable <NSCopying>
{
    NSMutableArray *_failures;
    NSMutableArray *_successes;
}

+ (Class)failuresType;
+ (Class)successesType;
@property(retain, nonatomic) NSMutableArray *failures; // @synthesize failures=_failures;
@property(retain, nonatomic) NSMutableArray *successes; // @synthesize successes=_successes;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)failuresAtIndex:(NSUInteger)arg1;
- (NSUInteger)failuresCount;
- (void)addFailures:(id)arg1;
- (void)clearFailures;
- (id)successesAtIndex:(NSUInteger)arg1;
- (NSUInteger)successesCount;
- (void)addSuccesses:(id)arg1;
- (void)clearSuccesses;
- (void)dealloc;

@end

