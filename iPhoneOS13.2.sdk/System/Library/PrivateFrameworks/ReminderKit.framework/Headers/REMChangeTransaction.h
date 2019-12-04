//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>




@class NSArray, NSDate, NSString, REMChangeToken, REMObjectID;

@interface REMChangeTransaction : NSObject <NSCopying, NSSecureCoding>
{
    NSDate *_timestamp;
    NSArray *_changes;
    REMObjectID *_accountID;
    NSString *_storeID;
    NSString *_author;
    REMChangeToken *_token;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) REMChangeToken *token; // @synthesize token=_token;
@property(readonly, nonatomic) NSString *author; // @synthesize author=_author;
@property(readonly, nonatomic) NSString *storeID; // @synthesize storeID=_storeID;
@property(readonly, nonatomic) REMObjectID *accountID; // @synthesize accountID=_accountID;
@property(readonly, nonatomic) NSArray *changes; // @synthesize changes=_changes;
@property(readonly, nonatomic) NSDate *timestamp; // @synthesize timestamp=_timestamp;
- (_Bool)isEqual:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
