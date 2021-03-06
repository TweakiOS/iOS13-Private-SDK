//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class ENAccountIdentity, NSArray, NSData;

@interface _ENGroupInfo : NSObject <NSSecureCoding>
{
    ENAccountIdentity *_accountIdentity;
    NSArray *_participants;
    NSData *_sharedApplicationData;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) NSData *sharedApplicationData; // @synthesize sharedApplicationData=_sharedApplicationData;
@property(retain, nonatomic) NSArray *participants; // @synthesize participants=_participants;
@property(retain) ENAccountIdentity *accountIdentity; // @synthesize accountIdentity=_accountIdentity;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithAccountIdentity:(id)arg1 paricipants:(id)arg2 sharedApplicationData:(id)arg3;

@end

