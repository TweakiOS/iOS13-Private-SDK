//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSuggestionsInternals/SGBloomFilterChunk-Protocol.h>

@class NSMutableSet;

@interface SGBloomFilterChunkInMemorySparse : NSObject <SGBloomFilterChunk>
{
    NSMutableSet *_hashes;
}

// - (void).cxx_destruct;
- (BOOL)exists:(CDUnion_e7c9147b)arg1;
- (void)add:(CDUnion_e7c9147b)arg1;
@property(readonly, nonatomic) unsigned int count;
- (id)init;

@end
