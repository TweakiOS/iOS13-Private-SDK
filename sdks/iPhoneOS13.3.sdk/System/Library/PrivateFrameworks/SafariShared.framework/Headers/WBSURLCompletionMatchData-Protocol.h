//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSString;
@protocol WBSURLCompletionMatchData;

@protocol WBSURLCompletionMatchData <NSObject>
@property(readonly, nonatomic) BOOL lastVisitWasFailure;
@property(readonly, nonatomic) double lastVisitedTimeInterval;
@property(readonly, nonatomic) BOOL containsBookmark;
@property(readonly, nonatomic) NSString *originalURLString;
- (float)topSitesScoreForPageTitleAtIndex:(NSUInteger)arg1 atTime:(double)arg2;
- (float)topSitesScoreForURLStringAtIndex:(NSUInteger)arg1 atTime:(double)arg2;
- (BOOL)matchesAutocompleteTrigger:(NSString *)arg1;
- (NSString *)pageTitleForUserVisibleURLStringAtIndex:(NSUInteger)arg1;
- (NSString *)userVisibleURLStringAtIndex:(NSUInteger)arg1;
- (void)enumerateUserVisibleURLsUsingBlock:(void (^)(NSString *, NSUInteger, BOOL ))arg1;
- (NSString *)userVisibleURLStringForPageTitleAtIndex:(NSUInteger)arg1;
- (NSString *)pageTitleAtIndex:(NSUInteger)arg1;
- (void)enumeratePageTitlesUsingBlock:(void (^)(NSString *, NSUInteger, BOOL ))arg1;
- (id <WBSURLCompletionMatchData>)matchDataByMergingWithMatchData:(id <WBSURLCompletionMatchData>)arg1;

@optional
@property(readonly, nonatomic) long long visitCount;
@end

