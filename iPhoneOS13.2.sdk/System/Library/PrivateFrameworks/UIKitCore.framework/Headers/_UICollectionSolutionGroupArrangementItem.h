//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCollectionLayoutItem, _UICollectionLayoutItemSolver;

__attribute__((visibility("hidden")))
@interface _UICollectionSolutionGroupArrangementItem : NSObject
{
    _UICollectionLayoutItemSolver *_solution;
    struct CGRect _layoutFrame;
}

@property(readonly, nonatomic) _UICollectionLayoutItemSolver *solution; // @synthesize solution=_solution;
@property(nonatomic) struct CGRect layoutFrame; // @synthesize layoutFrame=_layoutFrame;
@property(readonly, nonatomic) NSCollectionLayoutItem *item;
- (id)initWithSolution:(id)arg1;

@end
