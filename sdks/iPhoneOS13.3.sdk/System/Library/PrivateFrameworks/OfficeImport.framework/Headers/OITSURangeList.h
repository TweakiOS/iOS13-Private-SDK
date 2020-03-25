//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface OITSURangeList : NSObject
{
    struct vector<_NSRange, std::__1::allocator<_NSRange>> mRangeList;
}

- (id).cxx_construct;
// - (void).cxx_destruct;
- (id)stringValue;
- (void)consolidate;
- (_NSRange)rangeAtIndex:(NSUInteger)arg1;
- (void)reverse;
- (void)replaceWithRange:(_NSRange)arg1 atIndex:(NSUInteger)arg2;
- (void)removeRangeAtIndex:(NSUInteger)arg1;
- (void)insertRange:(_NSRange)arg1 atIndex:(NSUInteger)arg2;
- (void)addRange:(_NSRange)arg1;
@property(readonly, nonatomic) NSUInteger count;
- (id)initWithString:(id)arg1;
- (id)initWithRangeList:(id)arg1;
- (id)initWithRange:(_NSRange)arg1;

@end
