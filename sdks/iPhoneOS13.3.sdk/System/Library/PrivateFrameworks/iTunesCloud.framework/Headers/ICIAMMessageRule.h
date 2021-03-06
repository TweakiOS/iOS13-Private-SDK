//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class ICIAMTriggerCondition, NSMutableArray, NSString;

@interface ICIAMMessageRule : PBCodable <NSCopying>
{
    NSString *_identifier;
    int _ruleOperator;
    NSMutableArray *_subrules;
    ICIAMTriggerCondition *_triggerCondition;
    NSString *_triggerEventName;
    int _type;
    struct {
        unsigned int ruleOperator:1;
        unsigned int type:1;
    } _has;
}

+ (Class)subrulesType;
@property(retain, nonatomic) NSString *triggerEventName; // @synthesize triggerEventName=_triggerEventName;
@property(retain, nonatomic) ICIAMTriggerCondition *triggerCondition; // @synthesize triggerCondition=_triggerCondition;
@property(retain, nonatomic) NSMutableArray *subrules; // @synthesize subrules=_subrules;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
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
@property(readonly, nonatomic) BOOL hasTriggerEventName;
@property(readonly, nonatomic) BOOL hasTriggerCondition;
- (id)subrulesAtIndex:(NSUInteger)arg1;
- (NSUInteger)subrulesCount;
- (void)addSubrules:(id)arg1;
- (void)clearSubrules;
- (int)StringAsRuleOperator:(id)arg1;
- (id)ruleOperatorAsString:(int)arg1;
@property(nonatomic) BOOL hasRuleOperator;
@property(nonatomic) int ruleOperator; // @synthesize ruleOperator=_ruleOperator;
- (int)StringAsType:(id)arg1;
- (id)typeAsString:(int)arg1;
@property(nonatomic) BOOL hasType;
@property(nonatomic) int type; // @synthesize type=_type;
@property(readonly, nonatomic) BOOL hasIdentifier;

@end

