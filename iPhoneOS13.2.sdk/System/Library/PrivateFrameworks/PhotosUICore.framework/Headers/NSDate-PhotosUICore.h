//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/Foundation.h>

@interface NSDate (PhotosUICore)
+ (void)px_unionStartDate:(id *)arg1 endDate:(id *)arg2 withDateInterval:(id)arg3;
+ (void)px_unionStartDate:(id *)arg1 endDate:(id *)arg2 withDate:(id)arg3;
- (_Bool)px_isBetweenDate:(id)arg1 andDate:(id)arg2;
- (_Bool)px_isWithinTimeInterval:(double)arg1 sinceDate:(id)arg2;
- (long long)px_yearsSinceDate:(id)arg1;
- (_Bool)px_isSameDayAsDate:(id)arg1;
@end
