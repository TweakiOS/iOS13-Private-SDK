//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HMFoundation/HMFWiFiManagerDataSourceDelegate-Protocol.h>

@class HMFMACAddress, HMFUnfairLock, NSObject, NSString;
@protocol HMFWiFiManagerDataSource, OS_dispatch_queue;

@interface HMFWiFiManager : HMFObject <HMFWiFiManagerDataSourceDelegate>
{
    HMFUnfairLock *_lock;
    _Bool _shouldAssertWoW;
    NSString *_currentNetworkSSID;
    HMFMACAddress *_MACAddress;
    NSObject<OS_dispatch_queue> *_workQueue;
    id <HMFWiFiManagerDataSource> _dataSource;
}

+ (id)sharedManager;
@property(nonatomic) _Bool shouldAssertWoW; // @synthesize shouldAssertWoW=_shouldAssertWoW;
@property(readonly, nonatomic) id <HMFWiFiManagerDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly, copy) HMFMACAddress *MACAddress; // @synthesize MACAddress=_MACAddress;
- (void)currentNetworkDidChangeForDataSource:(id)arg1;
- (void)dataSource:(id)arg1 didChangeLinkAvailability:(_Bool)arg2;
- (void)dataSource:(id)arg1 didChangeWoWState:(_Bool)arg2;
- (void)releaseWoWAssertion;
- (void)takeWoWAssertion;
@property(copy, nonatomic) NSString *currentNetworkSSID; // @synthesize currentNetworkSSID=_currentNetworkSSID;
- (id)initWithWorkQueue:(id)arg1 dataSource:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
