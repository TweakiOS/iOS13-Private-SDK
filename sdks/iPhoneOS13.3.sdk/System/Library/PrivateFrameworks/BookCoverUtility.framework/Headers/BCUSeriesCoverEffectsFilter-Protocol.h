//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSArray, NSString;
@protocol BCUOperation;

@protocol BCUSeriesCoverEffectsFilter <NSObject>
@property(readonly, nonatomic) NSString *identifier;
- (id <BCUOperation>)newOperationWithImages:(NSArray *)arg1 filters:(NSArray *)arg2 size:(CGSize)arg3 contentsScale:(double)arg4 completion:(void (^)(id <BCUOperation>, id <BCUPurgeableImage>, UIEdgeInsets, CGPath ))arg5;
@end
