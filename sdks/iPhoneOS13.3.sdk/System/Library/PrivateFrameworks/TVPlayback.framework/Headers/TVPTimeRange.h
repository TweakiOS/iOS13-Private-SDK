//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface TVPTimeRange : NSObject
{
    double _startTime;
    double _duration;
}

+ (CDStruct_5c5366e1)forwardmostCMTimeRangeInCMTimeRanges:(id)arg1;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
- (id)description;
- (id)intersectTimeRange:(id)arg1;
- (BOOL)containsTime:(double)arg1;
@property(readonly, nonatomic) double endTime;
- (id)initWithStartTime:(double)arg1 duration:(double)arg2;
- (id)initWithCMTimeRange:(CDStruct_5c5366e1)arg1;
- (id)initWithStartTime:(double)arg1 endTime:(double)arg2;

@end
