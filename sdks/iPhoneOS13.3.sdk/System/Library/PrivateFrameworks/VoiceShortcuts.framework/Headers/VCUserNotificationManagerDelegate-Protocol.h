//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSString, VCUserNotificationManager;

@protocol VCUserNotificationManagerDelegate <NSObject>
- (void)notificationManager:(VCUserNotificationManager *)arg1 didDismissTriggerWithIdentifier:(NSString *)arg2;
- (void)notificationManager:(VCUserNotificationManager *)arg1 receivedConfirmationToRunTriggerWithIdentifier:(NSString *)arg2;
@end
