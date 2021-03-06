//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthUI/HKHealthQueryChartCacheDataSource.h>

@interface HKDailySleepSeriesDataSource : HKHealthQueryChartCacheDataSource
{
    id /* CDUnknownBlockType */ _userInfoCreationBlock;
}

@property(copy, nonatomic) id /* CDUnknownBlockType */ userInfoCreationBlock; // @synthesize userInfoCreationBlock=_userInfoCreationBlock;
// - (void).cxx_destruct;
- (id)_chartPointFromQueryResult:(id)arg1;
- (id)_dailyChartPointsFromQueryResults:(id)arg1;
- (id)_monthlyChartPointsFromQueryResults:(id)arg1 intervalComponents:(id)arg2 startDate:(id)arg3;
- (void)_handleSamples:(id)arg1 blockStart:(id)arg2 blockEnd:(id)arg3 intervalComponents:(id)arg4 completion:(id /* CDUnknownBlockType */)arg5;
- (id)queriesForStartDate:(id)arg1 endDate:(id)arg2 statisticsInterval:(id)arg3 completionHandler:(id /* CDUnknownBlockType */)arg4;

@end

