//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@protocol TSAppMonitorType;

@protocol TSAppMonitorType
- (id <TSAppMonitorType>)onWindowWillBecomeForegroundWithBlock:(void (^)(void))arg1;
- (id <TSAppMonitorType>)onWindowDidBecomeBackgroundWithBlock:(void (^)(void))arg1;
@property(nonatomic) BOOL isActive;
@end

