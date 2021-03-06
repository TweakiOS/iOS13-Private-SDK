//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class MFMessageInfo;

@protocol MFBaseMessage <NSObject>
@property(readonly, nonatomic) unsigned int libraryID;
@property(readonly, nonatomic, getter=isLibraryMessage) BOOL libraryMessage;
@property(readonly, nonatomic, getter=isKnownToHaveAttachments) BOOL knownToHaveAttachments;
@property(readonly, nonatomic) BOOL senderVIP;
@property(readonly, nonatomic) BOOL deleted;
@property(readonly, nonatomic) BOOL read;
@property(readonly, nonatomic) BOOL flagged;
@property(readonly, nonatomic) long long messageIDHash;
@property(readonly, nonatomic) unsigned int mailboxID;
@property(readonly, nonatomic) long long conversationHash;
@property(readonly, nonatomic) unsigned int dateSentInterval;
@property(readonly, nonatomic) unsigned int dateReceivedInterval;
@property(readonly, nonatomic) unsigned int uid;
- (MFMessageInfo *)copyMessageInfo;
@end

