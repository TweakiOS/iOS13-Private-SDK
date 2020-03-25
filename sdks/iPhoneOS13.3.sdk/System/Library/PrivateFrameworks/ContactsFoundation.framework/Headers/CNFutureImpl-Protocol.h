//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class CNDescriptionBuilder, NSDate, NSError;

@protocol CNFutureImpl <NSObject>
- (void)updateDescriptionWithBuilder:(CNDescriptionBuilder *)arg1;
- (void)addFailureBlock:(void (^)(NSError *))arg1;
- (void)addSuccessBlock:(void (^)(id))arg1;
- (BOOL)isCancelled;
- (BOOL)isFinished;
- (id)resultBeforeDate:(NSDate *)arg1 error:(id )arg2;

@optional
- (void)_flushCompletionBlocks;
- (BOOL)cancel;
- (BOOL)finishWithResult:(id)arg1 error:(NSError *)arg2;
@end
