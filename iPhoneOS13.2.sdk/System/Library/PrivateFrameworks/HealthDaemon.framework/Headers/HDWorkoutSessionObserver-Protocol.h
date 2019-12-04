//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class HDWorkoutSessionServer, NSDate, NSError, _HKWorkoutEvent;
@protocol HDWorkoutDataAccumulator;

@protocol HDWorkoutSessionObserver 
- (void)workoutSession:(HDWorkoutSessionServer *)arg1 didFailWithError:(NSError *)arg2;
- (void)workoutSession:(HDWorkoutSessionServer *)arg1 didGenerateEvent:(_HKWorkoutEvent *)arg2;
- (void)workoutSession:(HDWorkoutSessionServer *)arg1 didChangeToState:(long long)arg2 fromState:(long long)arg3 date:(NSDate *)arg4;

@optional
- (void)workoutSession:(HDWorkoutSessionServer *)arg1 didUpdateDataAccumulator:(id <HDWorkoutDataAccumulator>)arg2;
@end
