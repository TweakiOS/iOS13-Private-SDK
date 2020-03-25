//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSMutableDictionary;
@protocol PXGadgetRankStorage;

@interface PXForYouGadgetPriorityManager : NSObject
{
    BOOL _needsSorting;
    NSDate *_baseNewDate;
    long long _sortingAlgorithm;
    NSMutableDictionary *_currentEntries;
    id <PXGadgetRankStorage> _rankStorage;
    long long _nestedRegistration;
}

@property(nonatomic) long long nestedRegistration; // @synthesize nestedRegistration=_nestedRegistration;
@property(nonatomic) BOOL needsSorting; // @synthesize needsSorting=_needsSorting;
@property(readonly, nonatomic) id <PXGadgetRankStorage> rankStorage; // @synthesize rankStorage=_rankStorage;
@property(readonly, nonatomic) NSMutableDictionary *currentEntries; // @synthesize currentEntries=_currentEntries;
@property(nonatomic) long long sortingAlgorithm; // @synthesize sortingAlgorithm=_sortingAlgorithm;
@property(retain, nonatomic) NSDate *baseNewDate; // @synthesize baseNewDate=_baseNewDate;
// - (void).cxx_destruct;
- (id)_sortingKeyForOldEntries;
- (void)_persistSortedEntries:(id)arg1;
- (void)_splitCurrentEntriesIntoNew:(id)arg1 andOld:(id)arg2;
- (void)_sortCurrentEntries;
- (void)_sortCurrentEntriesIfNeeded;
- (long long)rankForGadgetType:(NSUInteger)arg1;
- (void)resetToDefaultPriorities;
- (BOOL)invalidateRanks;
- (void)registerRankable:(id)arg1;
- (void)endRegistration;
- (void)startRegistration;
- (id)initWithStorage:(id)arg1;

@end
