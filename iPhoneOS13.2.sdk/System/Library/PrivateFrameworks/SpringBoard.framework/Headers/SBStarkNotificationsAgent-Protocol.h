//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class SBStarkNotificationSceneComponent, UIScreen;
@protocol SBStarkNotificationsAgentDelegate, SBStarkNotificationsConfiguring;

@protocol SBStarkNotificationsAgent 
@property(readonly, nonatomic) id <SBStarkNotificationsConfiguring> activeConfiguration;
@property(nonatomic) __weak id <SBStarkNotificationsAgentDelegate> delegate;
- (void)noteComponentDidDeactivate:(SBStarkNotificationSceneComponent *)arg1;
- (void)noteComponentDidActivate:(SBStarkNotificationSceneComponent *)arg1;
- (id <SBStarkNotificationsConfiguring>)activeConfigurationForScreen:(UIScreen *)arg1;
@end
