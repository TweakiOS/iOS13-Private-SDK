//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBStarkBannerSource.h>

#import <SpringBoard/SBStarkNotificationBannerItemDelegate-Protocol.h>

@protocol SBStarkNotificationBannerSourceDelegate;

@interface SBStarkNotificationBannerSource : SBStarkBannerSource <SBStarkNotificationBannerItemDelegate>
{
    id <SBStarkNotificationBannerSourceDelegate> _delegate;
}

@property(nonatomic) __weak id <SBStarkNotificationBannerSourceDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)bannerViewDidDismiss:(id)arg1 forReason:(int)arg2;
- (void)bannerViewWillAppear:(id)arg1;
- (void)executeAction:(id)arg1 forNotificationRequest:(id)arg2;
- (void)withdrawNotificationRequest:(id)arg1;
- (void)modifyNotificationRequest:(id)arg1;
- (void)postNotificationRequest:(id)arg1;

@end

