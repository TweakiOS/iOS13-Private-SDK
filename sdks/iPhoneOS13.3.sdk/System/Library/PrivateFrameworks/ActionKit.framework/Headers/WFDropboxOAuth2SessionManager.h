//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ActionKit/WFOAuth2SessionManager.h>

#import <ActionKit/WFOAuth2ProviderSessionManager-Protocol.h>
#import <ActionKit/WFOAuth2RevocableSessionManager-Protocol.h>

@interface WFDropboxOAuth2SessionManager : WFOAuth2SessionManager <WFOAuth2ProviderSessionManager, WFOAuth2RevocableSessionManager>
{
}

- (void)revokeCredential:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (id)initWithSessionConfiguration:(id)arg1 clientID:(id)arg2 clientSecret:(id)arg3;
- (id)initWithClientID:(id)arg1 clientSecret:(id)arg2;
- (void)authenticateWithLegacyAccessToken:(id)arg1 accessTokenSecret:(id)arg2 completionHandler:(id /* CDUnknownBlockType */)arg3;
- (id)appAuthorizationSessionWithCompletionHandler:(id /* CDUnknownBlockType */)arg1;
- (id)authorizationSessionWithCompletionHandler:(id /* CDUnknownBlockType */)arg1;

@end

