//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSPredicate.h>

@interface NSPredicate (EmailFoundationPredicateAdditions)
+ (id)ef_matchNothingPredicate;
+ (id)ef_matchEverythingPredicate;
@property(readonly, nonatomic) BOOL ef_matchesNothing;
@property(readonly, nonatomic) BOOL ef_matchesEverything;
- (id)predicateNodeFromPropertyMapper:(id)arg1;
@end
