//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesCloud/ICRequestOperation.h>

@class ICPushNotificationsResponse, ICStoreRequestContext, NSString;

@interface ICPushNotificationsDisableTypesRequest : ICRequestOperation
{
    ICStoreRequestContext *_requestContext;
    NSString *_notificationType;
    ICPushNotificationsResponse *_response;
}

// - (void).cxx_destruct;
- (void)execute;
- (void)performRequestWithResponseHandler:(id /* CDUnknownBlockType */)arg1;
- (id)initWithRequestContext:(id)arg1 notificationType:(id)arg2;

@end

