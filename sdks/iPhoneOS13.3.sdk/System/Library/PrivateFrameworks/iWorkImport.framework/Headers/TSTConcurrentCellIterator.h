//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSPointerArray, TSTCellRegion, TSTTableInfo;

__attribute__((visibility("hidden")))
@interface TSTConcurrentCellIterator : NSObject
{
    NSUInteger _cellsPerSubRegion;
    TSTTableInfo *_tableInfo;
    TSTCellRegion *_region;
    TSTCellRegion *_forcingRegion;
    NSPointerArray *_arrayOfChunkRocks;
    NSUInteger _flags;
    NSUInteger _searchFlags;
    struct TSUViewCellRect _clampingViewRect;
}

@property(nonatomic) struct TSUViewCellRect clampingViewRect; // @synthesize clampingViewRect=_clampingViewRect;
@property(nonatomic) NSUInteger searchFlags; // @synthesize searchFlags=_searchFlags;
@property(nonatomic) NSUInteger flags; // @synthesize flags=_flags;
@property(retain, nonatomic) NSPointerArray *arrayOfChunkRocks; // @synthesize arrayOfChunkRocks=_arrayOfChunkRocks;
@property(retain, nonatomic) TSTCellRegion *forcingRegion; // @synthesize forcingRegion=_forcingRegion;
@property(retain, nonatomic) TSTCellRegion *region; // @synthesize region=_region;
@property(retain, nonatomic) TSTTableInfo *tableInfo; // @synthesize tableInfo=_tableInfo;
@property(nonatomic) NSUInteger cellsPerSubRegion; // @synthesize cellsPerSubRegion=_cellsPerSubRegion;
// - (void).cxx_destruct;
- (void)enumerateConcurrentlyUsingChunkBeginBlock:(id /* CDUnknownBlockType */)arg1 concurrentBlock:(id /* CDUnknownBlockType */)arg2 finalBlock:(id /* CDUnknownBlockType */)arg3;
- (id)initWithTableInfo:(id)arg1 region:(id)arg2 forcingRegion:(id)arg3 clampingViewRect:(struct TSUViewCellRect)arg4 flags:(NSUInteger)arg5 searchFlags:(NSUInteger)arg6;
- (id)initWithTableInfo:(id)arg1 region:(id)arg2 forcingRegion:(id)arg3 flags:(NSUInteger)arg4 searchFlags:(NSUInteger)arg5;
- (id)initWithTableInfo:(id)arg1 region:(id)arg2 clampingViewRect:(struct TSUViewCellRect)arg3 flags:(NSUInteger)arg4 searchFlags:(NSUInteger)arg5;
- (id)initWithTableInfo:(id)arg1 region:(id)arg2 flags:(NSUInteger)arg3 searchFlags:(NSUInteger)arg4;
- (id)initWithTableInfo:(id)arg1 flags:(NSUInteger)arg2 searchFlags:(NSUInteger)arg3;

@end
