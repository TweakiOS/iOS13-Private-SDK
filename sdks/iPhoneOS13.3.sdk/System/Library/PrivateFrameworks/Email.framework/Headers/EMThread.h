//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Email/EMCollection.h>

#import <Email/EFLoggable-Protocol.h>
#import <Email/EMMessageListItem-Protocol.h>
#import <Email/EMThreadBuilder-Protocol.h>

@class ECMessageFlags, ECSubject, EFQuery, EMMailboxScope, EMMessage, EMMessageListChangeObserverHelper, EMMessageRepository, EMObjectID, NSArray, NSDate, NSIndexSet, NSString;
@protocol EMCollectionItemID, EMMailboxTypeResolver;

@interface EMThread : EMCollection <EMThreadBuilder, EFLoggable, NSCopying, NSSecureCoding, EMMessageListItem>
{
    NSUInteger _isEditable;
    EMMailboxScope *_mailboxScope;
    id <EMMailboxTypeResolver> _mailboxTypeResolver;
    NSArray *_mailboxes;
    NSArray *_mailboxObjectIDs;
//     struct os_unfair_lock_s _mailboxScopeLock;
//     struct os_unfair_lock_s _mailboxTypeResolverLock;
//     struct os_unfair_lock_s _mailboxesLock;
    BOOL _hasUnflagged;
    BOOL _isVIP;
    BOOL _isBocked;
    BOOL _hasAttachments;
    BOOL _isToMe;
    BOOL _isCCMe;
    NSDate *_date;
    ECSubject *_subject;
    NSString *_summary;
    NSArray *_senderList;
    NSArray *_toList;
    NSArray *_ccList;
    ECMessageFlags *_flags;
    NSIndexSet *_flagColors;
    long long _conversationNotificationLevel;
    NSUInteger _count;
    id <EMCollectionItemID> _displayMessageItemID;
    EFQuery *_originatingQuery;
    EMMessageListChangeObserverHelper *_changeObserverHelper;
}

+ (BOOL)supportsSecureCoding;
+ (id)log;
@property(retain, nonatomic) EMMessageListChangeObserverHelper *changeObserverHelper; // @synthesize changeObserverHelper=_changeObserverHelper;
@property(readonly, nonatomic) EFQuery *originatingQuery; // @synthesize originatingQuery=_originatingQuery;
@property(readonly) BOOL isCCMe;
@property(readonly) BOOL isToMe;
@property(readonly) id <EMCollectionItemID> displayMessageItemID;
@property(readonly) NSUInteger count;
@property(readonly) long long conversationNotificationLevel;
@property(readonly) BOOL hasAttachments;
@property(readonly) BOOL isBlocked;
@property(readonly) BOOL isVIP;
@property(readonly, copy) NSIndexSet *flagColors;
@property(readonly) BOOL hasUnflagged;
@property(readonly) ECMessageFlags *flags;
@property(readonly, copy) NSArray *ccList;
@property(readonly, copy) NSArray *toList;
@property(readonly, copy) NSArray *senderList;
@property(readonly, copy) NSString *summary;
@property(readonly) ECSubject *subject;
@property(readonly) NSDate *date;
// - (void).cxx_destruct;
- (void)notifyChangeObserverAboutChangesByItemIDs:(id)arg1;
@property(readonly) BOOL isEditable;
@property(readonly) BOOL shouldArchiveByDefault;
@property(readonly) BOOL supportsArchiving;
@property(readonly) BOOL deleteMovesToTrash;
@property(readonly) EMMessage *displayMessage;
@property(readonly) EMObjectID *displayMessageObjectID;
@property long long _internalID;
@property(readonly, copy) NSArray *mailboxes;
@property(readonly, copy) NSArray *mailboxObjectIDs;
@property(readonly) long long conversationID;
@property(readonly, nonatomic) id <EMCollectionItemID> itemID;
- (BOOL)objectIDBelongsToCollection:(id)arg1;
- (id)itemIDForObjectID:(id)arg1;
- (id)objectIDForItemID:(id)arg1;
- (id)query;
@property(readonly, nonatomic) EMMailboxScope *mailboxScope;
@property(retain) id <EMMailboxTypeResolver> mailboxTypeResolver;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)ef_publicDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *debugDescription;
- (void)_commonInitWithOriginatingQuery:(id)arg1 builder:(id /* CDUnknownBlockType */)arg2;
- (id)initWithObjectID:(id)arg1 originatingQuery:(id)arg2 builder:(id /* CDUnknownBlockType */)arg3;
@property(readonly, nonatomic) EMMessageRepository *repository;

@end

