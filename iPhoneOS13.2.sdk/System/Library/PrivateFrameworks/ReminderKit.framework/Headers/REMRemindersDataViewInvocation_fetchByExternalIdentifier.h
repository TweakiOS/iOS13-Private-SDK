//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ReminderKit/REMStoreInvocation.h>



@class NSArray, REMObjectID;

@interface REMRemindersDataViewInvocation_fetchByExternalIdentifier : REMStoreInvocation <NSSecureCoding>
{
    NSArray *_externalIdentifiers;
    REMObjectID *_listObjectID;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) REMObjectID *listObjectID; // @synthesize listObjectID=_listObjectID;
@property(readonly, nonatomic) NSArray *externalIdentifiers; // @synthesize externalIdentifiers=_externalIdentifiers;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithExternalIdentifiers:(id)arg1 listObjectID:(id)arg2;

@end
