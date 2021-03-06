//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSArray, NSString;
@protocol SiriCoreSQLiteValue;

@interface SiriCoreSQLiteQueryCriterion : NSObject <NSCopying>
{
    NSString *_columnName;
    long long _comparisonOperator;
    long long _logicalOperator;
    id <SiriCoreSQLiteValue> _value;
    NSArray *_values;
    NSArray *_subcriteria;
}

+ (id)likeQueryCriterionWithColumnName:(id)arg1 value:(id)arg2 negation:(BOOL)arg3;
+ (id)isNullQueryCriterionWithColumnName:(id)arg1 negation:(BOOL)arg2;
+ (id)isQueryCriterionWithColumnName:(id)arg1 value:(id)arg2 negation:(BOOL)arg3;
+ (id)inQueryCriterionWithColumnName:(id)arg1 values:(id)arg2 negation:(BOOL)arg3;
+ (id)betweenQueryCriterionWithColumnName:(id)arg1 fromValue:(id)arg2 toValue:(id)arg3 negation:(BOOL)arg4;
+ (id)orQueryCriterionWithSubcriteriaProvider:(id /* CDUnknownBlockType */)arg1;
+ (id)orQueryCriterionWithSubcriteria:(id)arg1;
+ (id)andQueryCriterionWithSubcriteriaProvider:(id /* CDUnknownBlockType */)arg1;
+ (id)andQueryCriterionWithSubcriteria:(id)arg1;
+ (id)notEqualToQueryCriterionWithColumnName:(id)arg1 value:(id)arg2;
+ (id)lessThanOrEqualToQueryCriterionWithColumnName:(id)arg1 value:(id)arg2;
+ (id)lessThanQueryCriterionWithColumnName:(id)arg1 value:(id)arg2;
+ (id)greaterThanOrEqualToQueryCriterionWithColumnName:(id)arg1 value:(id)arg2;
+ (id)greaterThanQueryCriterionWithColumnName:(id)arg1 value:(id)arg2;
+ (id)equalToQueryCriterionWithColumnName:(id)arg1 value:(id)arg2;
@property(readonly, copy, nonatomic) NSArray *subcriteria; // @synthesize subcriteria=_subcriteria;
@property(readonly, copy, nonatomic) NSArray *values; // @synthesize values=_values;
@property(readonly, copy, nonatomic) id <SiriCoreSQLiteValue> value; // @synthesize value=_value;
@property(readonly, nonatomic) long long logicalOperator; // @synthesize logicalOperator=_logicalOperator;
@property(readonly, nonatomic) long long comparisonOperator; // @synthesize comparisonOperator=_comparisonOperator;
@property(readonly, copy, nonatomic) NSString *columnName; // @synthesize columnName=_columnName;
// - (void).cxx_destruct;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithColumnName:(id)arg1 comparisonOperator:(long long)arg2 logicalOperator:(long long)arg3 value:(id)arg4 values:(id)arg5 subcriteriaProvider:(id /* CDUnknownBlockType */)arg6;
- (id)initWithColumnName:(id)arg1 comparisonOperator:(long long)arg2 logicalOperator:(long long)arg3 value:(id)arg4 values:(id)arg5 subcriteria:(id)arg6;

@end

