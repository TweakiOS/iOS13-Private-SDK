//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>



@class HDAWDHealthKitCloudSyncEvent, NSString;

@interface HDAWDHealthKitCloudSyncEndEvent : PBCodable <NSCopying>
{
    unsigned long long _countSinceLastSuccess;
    unsigned long long _duration;
    unsigned long long _errorCode;
    unsigned long long _timeSinceLastSuccess;
    unsigned long long _timestamp;
    unsigned long long _underlyingErrorCode;
    NSString *_errorDomain;
    HDAWDHealthKitCloudSyncEvent *_event;
    int _result;
    NSString *_underlyingErrorDomain;
    struct {
        unsigned int countSinceLastSuccess:1;
        unsigned int duration:1;
        unsigned int errorCode:1;
        unsigned int timeSinceLastSuccess:1;
        unsigned int timestamp:1;
        unsigned int underlyingErrorCode:1;
        unsigned int result:1;
    } _has;
}

@property(nonatomic) unsigned long long underlyingErrorCode; // @synthesize underlyingErrorCode=_underlyingErrorCode;
@property(retain, nonatomic) NSString *underlyingErrorDomain; // @synthesize underlyingErrorDomain=_underlyingErrorDomain;
@property(nonatomic) unsigned long long errorCode; // @synthesize errorCode=_errorCode;
@property(retain, nonatomic) NSString *errorDomain; // @synthesize errorDomain=_errorDomain;
@property(nonatomic) unsigned long long timeSinceLastSuccess; // @synthesize timeSinceLastSuccess=_timeSinceLastSuccess;
@property(nonatomic) unsigned long long countSinceLastSuccess; // @synthesize countSinceLastSuccess=_countSinceLastSuccess;
@property(nonatomic) unsigned long long duration; // @synthesize duration=_duration;
@property(retain, nonatomic) HDAWDHealthKitCloudSyncEvent *event; // @synthesize event=_event;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasUnderlyingErrorCode;
@property(readonly, nonatomic) _Bool hasUnderlyingErrorDomain;
@property(nonatomic) _Bool hasErrorCode;
@property(readonly, nonatomic) _Bool hasErrorDomain;
@property(nonatomic) _Bool hasTimeSinceLastSuccess;
@property(nonatomic) _Bool hasCountSinceLastSuccess;
- (int)StringAsResult:(id)arg1;
- (id)resultAsString:(int)arg1;
@property(nonatomic) _Bool hasResult;
@property(nonatomic) int result; // @synthesize result=_result;
@property(nonatomic) _Bool hasDuration;
@property(readonly, nonatomic) _Bool hasEvent;
@property(nonatomic) _Bool hasTimestamp;

@end
