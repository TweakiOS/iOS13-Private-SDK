//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <RTTUtilities/AXUIClientDelegate-Protocol.h>
#import <RTTUtilities/RTTCallDelegate-Protocol.h>
#import <RTTUtilities/TUCallCapabilitiesDelegate-Protocol.h>

@class AXDispatchTimer, AXUIClient, NSMutableArray, NSMutableDictionary, NSString;
@protocol HCHeardControllerProtocol, OS_dispatch_queue;

@interface RTTController : NSObject <AXUIClientDelegate, RTTCallDelegate, TUCallCapabilitiesDelegate>
{
    AXUIClient *_actionUIClient;
    NSObject<OS_dispatch_queue> *_workerQueue;
    NSMutableDictionary *_localSettingsCache;
    AXDispatchTimer *_preferredRelayCoalescer;
    AXDispatchTimer *_callUpdateCoalescer;
    _Bool _shouldSuppressIncomingNotification;
    NSMutableArray *_rttCalls;
    id <HCHeardControllerProtocol> _delegate;
    id /* block */ _serverInvalidateCallback;
    id /* block */ _actionCompletionBlock;
}

+ (id)sharedController;
@property(nonatomic) _Bool shouldSuppressIncomingNotification; // @synthesize shouldSuppressIncomingNotification=_shouldSuppressIncomingNotification;
@property(copy, nonatomic) id /* block */ actionCompletionBlock; // @synthesize actionCompletionBlock=_actionCompletionBlock;
@property(copy, nonatomic) id /* block */ serverInvalidateCallback; // @synthesize serverInvalidateCallback=_serverInvalidateCallback;
@property(nonatomic) __weak id <HCHeardControllerProtocol> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSMutableArray *rttCalls; // @synthesize rttCalls=_rttCalls;
- (void)ttyCall:(id)arg1 shouldDisplayServiceMessage:(id)arg2;
- (void)ttyCall:(id)arg1 didSendRemoteString:(id)arg2 forUtterance:(id)arg3;
- (void)ttyCall:(id)arg1 didReceiveString:(id)arg2 forUtterance:(id)arg3;
- (id)handleIncomingNotificationSuppressionChange:(id)arg1;
- (id)displayCallPrompt:(id)arg1;
- (id)handleSettingsRequest:(id)arg1;
- (id)handleDictionaryRequest:(id)arg1;
- (id)handleDatabaseRequest:(id)arg1;
- (id)handleMediaAction:(id)arg1;
- (id)userInterfaceClient:(id)arg1 processMessageFromServer:(id)arg2 withIdentifier:(unsigned long long)arg3 error:(id *)arg4;
- (id)actionClient;
- (void)dealloc;
- (void)displayRTTFirstUseAlert;
- (void)dismissRTTFirstUseAlert;
- (id)callForUUID:(id)arg1;
- (id)_callForUUIDWithoutRefresh:(id)arg1;
- (void)handleUpdatedCalls:(id)arg1;
- (void)_refreshCurrentCallListWithExistingCalls:(id)arg1;
- (void)_refreshCurrentCallList;
- (void)callDidConnect:(id)arg1;
- (void)didChangeTelephonyCallingSupport;
- (_Bool)invalidateServerCaches:(id)arg1;
- (void)_handlePreferredRelayNumberUpdate;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
