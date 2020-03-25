//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSData;

@interface NPKProtoSecureElementGetPairingInfoResponse : PBCodable <NSCopying>
{
    NSData *_challengeResponse;
    NSData *_cryptogram;
    BOOL _authRandomSet;
    BOOL _pending;
    BOOL _success;
    struct {
        unsigned int authRandomSet:1;
        unsigned int pending:1;
        unsigned int success:1;
    } _has;
}

@property(nonatomic) BOOL authRandomSet; // @synthesize authRandomSet=_authRandomSet;
@property(retain, nonatomic) NSData *challengeResponse; // @synthesize challengeResponse=_challengeResponse;
@property(retain, nonatomic) NSData *cryptogram; // @synthesize cryptogram=_cryptogram;
@property(nonatomic) BOOL success; // @synthesize success=_success;
@property(nonatomic) BOOL pending; // @synthesize pending=_pending;
// - (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasAuthRandomSet;
@property(readonly, nonatomic) BOOL hasChallengeResponse;
@property(readonly, nonatomic) BOOL hasCryptogram;
@property(nonatomic) BOOL hasSuccess;
@property(nonatomic) BOOL hasPending;

@end
