//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@protocol HMFWiFiManagerDataSource;

@protocol HMFWiFiManagerDataSourceDelegate <NSObject>
- (void)currentNetworkDidChangeForDataSource:(id <HMFWiFiManagerDataSource>)arg1;
- (void)dataSource:(id <HMFWiFiManagerDataSource>)arg1 didChangeLinkAvailability:(BOOL)arg2;
- (void)dataSource:(id <HMFWiFiManagerDataSource>)arg1 didChangeWoWState:(BOOL)arg2;
@end

