//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PersonalizationPortrait/PPFeedbackAccepting-Protocol.h>

@class NSArray, NSError;

@protocol PPEventClientProtocol <PPFeedbackAccepting>
- (void)interactionSummaryMetricsBatch:(NSArray *)arg1 isLast:(BOOL)arg2 error:(NSError *)arg3 queryId:(NSUInteger)arg4 completion:(void (^)(BOOL))arg5;
- (void)eventHighlightsBatch:(NSArray *)arg1 isLast:(BOOL)arg2 error:(NSError *)arg3 queryId:(NSUInteger)arg4 completion:(void (^)(BOOL))arg5;
- (void)eventNameRecordChangesBatch:(NSArray *)arg1 isLast:(BOOL)arg2 error:(NSError *)arg3 queryId:(NSUInteger)arg4 completion:(void (^)(BOOL))arg5;
- (void)eventNameRecordBatch:(NSArray *)arg1 isLast:(BOOL)arg2 error:(NSError *)arg3 queryId:(NSUInteger)arg4 completion:(void (^)(BOOL))arg5;
@end

