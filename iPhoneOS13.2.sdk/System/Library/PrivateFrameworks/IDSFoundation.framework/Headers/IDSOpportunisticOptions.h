//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



@class NSArray, NSDate, NSDictionary;

@interface IDSOpportunisticOptions : NSObject <NSSecureCoding>
{
    NSArray *_blacklistedDestinations;
    NSDate *_expiryDate;
    _Bool _destinationsMustBeInContacts;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) _Bool destinationsMustBeInContacts; // @synthesize destinationsMustBeInContacts=_destinationsMustBeInContacts;
@property(retain, nonatomic) NSDate *expiryDate; // @synthesize expiryDate=_expiryDate;
@property(retain, nonatomic) NSArray *blacklistedDestinations; // @synthesize blacklistedDestinations=_blacklistedDestinations;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
- (id)initWithDictionary:(id)arg1;
- (id)initWithBlacklistedDestinations:(id)arg1 expiryDate:(id)arg2 destinationsMustBeInContacts:(_Bool)arg3;
- (id)init;

@end
