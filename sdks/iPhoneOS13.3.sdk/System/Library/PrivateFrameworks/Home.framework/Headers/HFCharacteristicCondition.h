//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFCondition.h>

@class HMCharacteristic;

@interface HFCharacteristicCondition : HFCondition
{
    HMCharacteristic *_characteristic;
    NSUInteger _operatorType;
    id _value;
}

+ (id)_valuePredicateInCompoundPredicate:(id)arg1;
+ (id)_characteristicPredicateInCompoundPredicate:(id)arg1;
@property(readonly, nonatomic) id value; // @synthesize value=_value;
@property(readonly, nonatomic) NSUInteger operatorType; // @synthesize operatorType=_operatorType;
@property(readonly, nonatomic) HMCharacteristic *characteristic; // @synthesize characteristic=_characteristic;
// - (void).cxx_destruct;
- (id)initWithCharacteristic:(id)arg1 operatorType:(NSUInteger)arg2 value:(id)arg3;
- (id)initWithPredicate:(id)arg1;

@end
