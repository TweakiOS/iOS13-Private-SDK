//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class SXColumnLayout, SXLayoutBlueprint, SXLayoutDescription;
@protocol SXLayouterDelegate;

@protocol SXLayouter <NSObject>
@property(nonatomic) __weak id <SXLayouterDelegate> delegate;
- (void)layoutBlueprint:(SXLayoutBlueprint *)arg1 columnLayout:(SXColumnLayout *)arg2 description:(SXLayoutDescription *)arg3 shouldContinue:(BOOL )arg4;
@end

