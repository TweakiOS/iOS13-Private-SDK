//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HNPredicate;

@interface HNQuery : NSObject
{
    HNPredicate *_predicate;
}

@property(readonly, copy, nonatomic) HNPredicate *predicate; // @synthesize predicate=_predicate;
// - (void).cxx_destruct;
- (id)initWithPredicate:(id)arg1;
- (id)init;

@end
