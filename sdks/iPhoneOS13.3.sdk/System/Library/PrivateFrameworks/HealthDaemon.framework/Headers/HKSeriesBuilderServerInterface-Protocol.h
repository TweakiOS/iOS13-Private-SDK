//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSDictionary;

@protocol HKSeriesBuilderServerInterface <NSObject>
- (void)remote_recoverWithCompletion:(void (^)(BOOL, NSError *))arg1;
- (void)remote_freezeWithCompletion:(void (^)(BOOL, NSError *))arg1;
- (void)remote_discardWithCompletion:(void (^)(BOOL, NSError *))arg1;
- (void)remote_addMetadata:(NSDictionary *)arg1 completion:(void (^)(BOOL, NSError *))arg2;
@end

