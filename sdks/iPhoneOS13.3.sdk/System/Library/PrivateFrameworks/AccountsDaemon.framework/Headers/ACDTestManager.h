//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSXPCListenerEndpoint;

@interface ACDTestManager : NSObject
{
}

+ (id)testServer;
@property(readonly, nonatomic) NSXPCListenerEndpoint *remoteOAuthSignerEndpoint;
@property(readonly, nonatomic) NSXPCListenerEndpoint *remoteAccountStoreEndpoint;
- (void)stopTestServer;
- (void)startTestServer;

@end

