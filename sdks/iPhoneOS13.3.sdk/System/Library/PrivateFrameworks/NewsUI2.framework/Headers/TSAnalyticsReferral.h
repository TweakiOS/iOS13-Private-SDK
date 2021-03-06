//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString, NTPBWidgetEngagement;

@interface TSAnalyticsReferral : NSObject
{
    MISSING_TYPE *userActivityType;
    MISSING_TYPE *creativeID;
    MISSING_TYPE *campaignID;
    MISSING_TYPE *campaignType;
    MISSING_TYPE *referringApplication;
    MISSING_TYPE *referringURL;
    MISSING_TYPE *widgetModeGroupID;
    MISSING_TYPE *widgetEngagement;
    MISSING_TYPE *appOpenedByUserActivity;
    MISSING_TYPE *appSessionStartMethod;
    MISSING_TYPE *appSessionStartNotificationType;
}

// - (void).cxx_destruct;
- (id)init;
- (id)initWithUserActivityType:(id)arg1 creativeID:(id)arg2 campaignID:(id)arg3 campaignType:(id)arg4 referringApplication:(id)arg5 referringURL:(id)arg6 widgetModeGroupID:(id)arg7 widgetEngagement:(id)arg8 appOpenedByUserActivity:(BOOL)arg9 appSessionStartMethod:(long long)arg10 appSessionStartNotificationType:(long long)arg11;
@property(nonatomic, readonly) long long appSessionStartNotificationType; // @synthesize appSessionStartNotificationType;
@property(nonatomic, readonly) long long appSessionStartMethod; // @synthesize appSessionStartMethod;
@property(nonatomic, readonly) BOOL appOpenedByUserActivity; // @synthesize appOpenedByUserActivity;
@property(nonatomic, readonly) NTPBWidgetEngagement *widgetEngagement; // @synthesize widgetEngagement;
@property(nonatomic, readonly) NSString *widgetModeGroupID;
@property(nonatomic, readonly) NSString *referringURL;
@property(nonatomic, readonly) NSString *referringApplication;
@property(nonatomic, readonly) NSString *campaignType;
@property(nonatomic, readonly) NSString *campaignID;
@property(nonatomic, readonly) NSString *creativeID;
@property(nonatomic, readonly) NSString *userActivityType;

@end

