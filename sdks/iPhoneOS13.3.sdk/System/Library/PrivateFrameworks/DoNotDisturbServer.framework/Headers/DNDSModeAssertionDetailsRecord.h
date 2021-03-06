//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DoNotDisturbServer/DNDSModeAssertionStoreRecordDictionaryEncoding-Protocol.h>

@class DNDSModeAssertionLifetimeRecord, NSNumber, NSString;

@interface DNDSModeAssertionDetailsRecord : NSObject <DNDSModeAssertionStoreRecordDictionaryEncoding>
{
    NSString *_identifier;
    NSString *_modeIdentifier;
    NSNumber *_userVisibleEndDate;
    DNDSModeAssertionLifetimeRecord *_lifetime;
}

+ (id)recordForAssertionDetails:(id)arg1;
+ (id)recordForDictionary:(id)arg1 keys:(const CDStruct_0a6492a9 )arg2;
@property(retain, nonatomic) DNDSModeAssertionLifetimeRecord *lifetime; // @synthesize lifetime=_lifetime;
@property(retain, nonatomic) NSNumber *userVisibleEndDate; // @synthesize userVisibleEndDate=_userVisibleEndDate;
@property(retain, nonatomic) NSString *modeIdentifier; // @synthesize modeIdentifier=_modeIdentifier;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
// - (void).cxx_destruct;
- (id)object;
- (id)dictionaryWithKeys:(const CDStruct_0a6492a9 )arg1 options:(NSUInteger)arg2;

@end

