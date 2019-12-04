//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/GEOServerFormattedString-Protocol.h>


@class GEOConditionalFormattedString, NSArray, NSMutableArray, NSString, PBDataReader, PBUnknownFields;

@interface GEOFormattedString : PBCodable <GEOServerFormattedString, NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOConditionalFormattedString *_alternativeString;
    NSMutableArray *_formatArguments;
    NSMutableArray *_formatStrings;
    NSMutableArray *_formatStyles;
    NSMutableArray *_separators;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_alternativeString:1;
        unsigned int read_formatArguments:1;
        unsigned int read_formatStrings:1;
        unsigned int read_formatStyles:1;
        unsigned int read_separators:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_alternativeString:1;
        unsigned int wrote_formatArguments:1;
        unsigned int wrote_formatStrings:1;
        unsigned int wrote_formatStyles:1;
        unsigned int wrote_separators:1;
    } _flags;
}

+ (_Bool)isValid:(id)arg1;
+ (Class)formatStyleType;
+ (Class)separatorType;
+ (Class)formatArgumentType;
+ (Class)formatStringType;
- (void)clearUnknownFields:(_Bool)arg1;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
@property(readonly) NSUInteger hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (id)dictionaryRepresentation;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) GEOConditionalFormattedString *alternativeString;
@property(readonly, nonatomic) _Bool hasAlternativeString;
- (void)_readAlternativeString;
- (id)formatStyleAtIndex:(unsigned long long)arg1;
- (unsigned long long)formatStylesCount;
- (void)_addNoFlagsFormatStyle:(id)arg1;
- (void)addFormatStyle:(id)arg1;
- (void)clearFormatStyles;
@property(retain, nonatomic) NSMutableArray *formatStyles;
- (void)_readFormatStyles;
- (id)separatorAtIndex:(unsigned long long)arg1;
- (unsigned long long)separatorsCount;
- (void)_addNoFlagsSeparator:(id)arg1;
- (void)addSeparator:(id)arg1;
- (void)clearSeparators;
@property(retain, nonatomic) NSMutableArray *separators;
- (void)_readSeparators;
- (id)formatArgumentAtIndex:(unsigned long long)arg1;
- (unsigned long long)formatArgumentsCount;
- (void)_addNoFlagsFormatArgument:(id)arg1;
- (void)addFormatArgument:(id)arg1;
- (void)clearFormatArguments;
@property(retain, nonatomic) NSMutableArray *formatArguments;
- (void)_readFormatArguments;
- (id)formatStringAtIndex:(unsigned long long)arg1;
- (unsigned long long)formatStringsCount;
- (void)_addNoFlagsFormatString:(id)arg1;
- (void)addFormatString:(id)arg1;
- (void)clearFormatStrings;
@property(retain, nonatomic) NSMutableArray *formatStrings;
- (void)_readFormatStrings;
- (id)initWithData:(id)arg1;
- (id)init;
- (id)initWithString:(id)arg1;
@property(readonly, nonatomic) NSArray *formatTokens;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
