//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSArray, NSData, NSDictionary, NSString, _PAREntity_Topic;

@protocol _PAREntity <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(copy, nonatomic) NSArray *topics;
@property(nonatomic) int category;
@property(copy, nonatomic) NSString *name;
@property(nonatomic) float probabilityScore;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (_PAREntity_Topic *)topicsAtIndex:(NSUInteger)arg1;
- (NSUInteger)topicsCount;
- (void)addTopics:(_PAREntity_Topic *)arg1;
- (void)clearTopics;
@end

