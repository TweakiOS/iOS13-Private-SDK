//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IMCore/IMChat.h>

#import <ChatKit/CKIMSimulatedChatDelegate-Protocol.h>
#import <ChatKit/CKIMSimulatedDaemonListener-Protocol.h>

@class CKIMSimulatedAccount, IMHandle, NSArray, NSString;
@protocol CKIMSimulatedChatDelegate;

@interface CKIMSimulatedChat : IMChat <CKIMSimulatedChatDelegate, CKIMSimulatedDaemonListener>
{
    id <CKIMSimulatedChatDelegate> _delegate;
    CKIMSimulatedAccount *_simulatedAccount;
    NSString *_simulatedGUID;
    NSArray *_incomingHandles;
    IMHandle *_outgoingHandle;
    NSUInteger _currentMessageID;
    NSString *_simulatedChatIdentifier;
}

+ (id)prepopulatedChat;
@property(copy, nonatomic) NSString *simulatedChatIdentifier; // @synthesize simulatedChatIdentifier=_simulatedChatIdentifier;
@property(readonly, nonatomic) NSUInteger currentMessageID; // @synthesize currentMessageID=_currentMessageID;
@property(readonly, nonatomic) IMHandle *outgoingHandle; // @synthesize outgoingHandle=_outgoingHandle;
@property(readonly, nonatomic) NSArray *incomingHandles; // @synthesize incomingHandles=_incomingHandles;
@property(readonly, nonatomic) NSString *simulatedGUID; // @synthesize simulatedGUID=_simulatedGUID;
@property(readonly, nonatomic) CKIMSimulatedAccount *simulatedAccount; // @synthesize simulatedAccount=_simulatedAccount;
@property(nonatomic) __weak id <CKIMSimulatedChatDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (id)_messageWithGUID:(id)arg1;
- (void)simulatedDaemon:(id)arg1 willSendBalloonPayload:(id)arg2 attachments:(id)arg3 messageGUID:(id)arg4 bundleID:(id)arg5;
- (void)chat:(id)arg1 didSendMessage:(id)arg2 finished:(BOOL)arg3;
- (void)markAsAutoSpamReported;
- (id)loadMessagesBeforeDate:(id)arg1 limit:(NSUInteger)arg2 loadImmediately:(BOOL)arg3;
- (unsigned char)chatStyle;
- (id)recipient;
- (id)participants;
- (id)guid;
- (id)account;
- (id)chatIdentifier;
- (BOOL)_handleIncomingItem:(id)arg1;
- (void)sendMessage:(id)arg1;
- (void)_sendMessage:(id)arg1 adjustingSender:(BOOL)arg2 shouldQueue:(BOOL)arg3;
- (id)initWithIncomingIDs:(id)arg1 outgoingID:(id)arg2 messageIDOffset:(NSUInteger)arg3 service:(id)arg4;

@end
