//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SPOwner/SPFMIPRegisterInfo-Protocol.h>
#import <SPOwner/SPSettingsConfigurating-Protocol.h>

@class FMXPCServiceDescription, FMXPCSession, NSDate, NSNumber, NSOperationQueue, NSSet, NSString, NSUUID, NSUserDefaults;
@protocol OS_dispatch_queue, SPBeaconManagerXPCProtocol;

@interface SPSettingsConfiguration : NSObject <SPFMIPRegisterInfo, SPSettingsConfigurating>
{
    NSUserDefaults *_sharedDefaults;
    FMXPCServiceDescription *_serviceDescription;
    FMXPCSession *_session;
    id <SPBeaconManagerXPCProtocol> _proxy;
    id <SPBeaconManagerXPCProtocol> _userAgentProxy;
    id _serviceSettingsChangedNotificationToken;
    NSOperationQueue *_notificationQueue;
    NSString *_serviceState;
    NSSet *_serviceDisabledReasons;
    NSObject<OS_dispatch_queue> *_queue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(copy, nonatomic) NSSet *serviceDisabledReasons; // @synthesize serviceDisabledReasons=_serviceDisabledReasons;
@property(copy, nonatomic) NSString *serviceState; // @synthesize serviceState=_serviceState;
@property(retain, nonatomic) NSOperationQueue *notificationQueue; // @synthesize notificationQueue=_notificationQueue;
@property(nonatomic) __weak id serviceSettingsChangedNotificationToken; // @synthesize serviceSettingsChangedNotificationToken=_serviceSettingsChangedNotificationToken;
@property(retain, nonatomic) id <SPBeaconManagerXPCProtocol> userAgentProxy; // @synthesize userAgentProxy=_userAgentProxy;
@property(retain, nonatomic) id <SPBeaconManagerXPCProtocol> proxy; // @synthesize proxy=_proxy;
@property(retain, nonatomic) FMXPCSession *session; // @synthesize session=_session;
@property(retain, nonatomic) FMXPCServiceDescription *serviceDescription; // @synthesize serviceDescription=_serviceDescription;
@property(retain, nonatomic) NSUserDefaults *sharedDefaults; // @synthesize sharedDefaults=_sharedDefaults;
// - (void).cxx_destruct;
- (void)setServiceState:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)beginRefreshingServiceStateWithBlock:(id /* CDUnknownBlockType */)arg1;
- (void)_invalidate;
- (void)dealloc;
- (id)init;
- (id)serviceSettingsConfiguration;
@property(readonly, copy, nonatomic) NSDate *lastKeyRollDate;
@property(readonly, copy, nonatomic) NSNumber *beaconZoneCreationErrorCode;
@property(readonly, copy, nonatomic) NSDate *beaconZoneCreationDate;
@property(readonly, copy, nonatomic) NSUUID *baUUID;

@end

