//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSDate, NSDictionary, NSNumber, NSString, NSURL;

@interface WLKServerConfigurationResponse : NSObject <NSSecureCoding, NSCopying>
{
    NSDictionary *_responseDictionary;
    NSDate *_expirationDate;
    NSUInteger _environmentHash;
    NSDictionary *_endpointsDictionary;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) NSDictionary *endpointsDictionary; // @synthesize endpointsDictionary=_endpointsDictionary;
@property(readonly, nonatomic) NSUInteger environmentHash; // @synthesize environmentHash=_environmentHash;
@property(readonly, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(readonly, nonatomic) NSDictionary *responseDictionary; // @synthesize responseDictionary=_responseDictionary;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (id)utsc;
- (BOOL)isValidIgnoringExpiration;
- (BOOL)isValid;
- (id)dictionaryRepresentation;
@property(readonly, copy, nonatomic) NSNumber *vppaSessionDurationInMillis;
@property(readonly, nonatomic, getter=isActiveUser) BOOL activeUser;
@property(readonly, nonatomic) NSDictionary *features;
@property(readonly, copy, nonatomic) NSString *utsk;
@property(readonly, nonatomic) NSURL *playActivityURL;
@property(readonly, nonatomic) long long vppaStatus;
@property(readonly, nonatomic) NSString *vppaStatusString;
@property(readonly, nonatomic) NSDictionary *requiredRequestKeyValuePairsDictionary;
- (id)initWithServerResponseDictionary:(id)arg1 expirationDate:(id)arg2 environmentHash:(NSUInteger)arg3;
- (id)initWithDictionary:(id)arg1;

@end

