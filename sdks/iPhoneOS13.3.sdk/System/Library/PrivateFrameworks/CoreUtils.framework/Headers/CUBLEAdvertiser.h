//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreUtils/CBPeripheralManagerDelegate-Protocol.h>

@class CBPeripheralManager, CURetrier, NSData, NSDictionary, NSString;
@protocol OS_dispatch_queue;

@interface CUBLEAdvertiser : NSObject <CBPeripheralManagerDelegate>
{
    BOOL _activateCalled;
    NSDictionary *_advertiseParametersCurrent;
    BOOL _changesPending;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    CBPeripheralManager *_peripheralManager;
    CURetrier *_retrier;
    BOOL _startAdvertisingCalled;
    struct LogCategory _ucat;
    unsigned int _advertiseFlags;
    NSData *_appleManufacturerData;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    id /* CDUnknownBlockType */ _invalidationHandler;
    NSData *_lgBTAddress;
    NSData *_lgDeviceID;
    NSString *_label;
}

@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(copy, nonatomic) NSData *lgDeviceID; // @synthesize lgDeviceID=_lgDeviceID;
@property(copy, nonatomic) NSData *lgBTAddress; // @synthesize lgBTAddress=_lgBTAddress;
@property(copy, nonatomic) id /* CDUnknownBlockType */ invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(nonatomic) unsigned int advertiseFlags; // @synthesize advertiseFlags=_advertiseFlags;
@property(copy, nonatomic) NSData *appleManufacturerData; // @synthesize appleManufacturerData=_appleManufacturerData;
// - (void).cxx_destruct;
- (void)peripheralManagerDidStartAdvertising:(id)arg1 error:(id)arg2;
- (void)peripheralManagerDidUpdateState:(id)arg1;
- (id)_advertiseParametersSummary:(id)arg1;
- (void)_advertiseParametersAddOSR;
- (void)_advertiseParametersAddLGWake:(id)arg1;
- (id)_advertiseParameters;
- (void)_ensureStopped;
- (void)_ensureStarted;
- (void)_invalidated;
- (void)_invalidate;
- (void)invalidate;
- (void)activate;
- (void)dealloc;
- (id)init;

@end
