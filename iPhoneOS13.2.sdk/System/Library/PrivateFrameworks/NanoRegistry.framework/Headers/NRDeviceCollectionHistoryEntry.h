//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>




@class NRDeviceCollectionDiff, NRDeviceCollectionHistory, NRMutableDeviceCollection, NRPBDeviceCollectionHistoryEntry, NSDate;

@interface NRDeviceCollectionHistoryEntry : NSObject <NSSecureCoding, NSCopying>
{
    unsigned int _switchIndex;
    unsigned long long _index;
    NSDate *_date;
    NRDeviceCollectionDiff *_diff;
    NRDeviceCollectionHistory *_historyManager;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) __weak NRDeviceCollectionHistory *historyManager; // @synthesize historyManager=_historyManager;
@property(nonatomic) unsigned int switchIndex; // @synthesize switchIndex=_switchIndex;
@property(retain, nonatomic) NRDeviceCollectionDiff *diff; // @synthesize diff=_diff;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
@property(nonatomic) unsigned long long index; // @synthesize index=_index;
- (_Bool)isEqual:(id)arg1;
- (id)description;
@property(readonly, nonatomic) NRMutableDeviceCollection *state;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) NRPBDeviceCollectionHistoryEntry *protobuf;
- (id)initWithProtobuf:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithHistory:(id)arg1 index:(unsigned long long)arg2 date:(id)arg3 diff:(id)arg4 switchIndex:(unsigned int)arg5;

@end
