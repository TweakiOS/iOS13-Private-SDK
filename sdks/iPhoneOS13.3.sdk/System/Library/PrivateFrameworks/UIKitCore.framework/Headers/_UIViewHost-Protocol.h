//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class UIScreen, UIView;

@protocol _UIViewHost <NSObject>
@property(readonly, retain) UIScreen *hostingScreen;
- (BOOL)hasHostedViews;
- (void)addHostedView:(UIView *)arg1 withViewRemovalHandler:(void (^)(void))arg2;
@end

