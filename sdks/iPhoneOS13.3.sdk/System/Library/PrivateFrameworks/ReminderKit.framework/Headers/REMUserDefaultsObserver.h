//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ReminderKit/REMUserDefaultsObserveToken-Protocol.h>

@class NSString, REMUserDefaults;

@interface REMUserDefaultsObserver : NSObject <REMUserDefaultsObserveToken>
{
    BOOL _removed;
    REMUserDefaults *_userDefaults;
    NSString *_userDefaultsKey;
    id /* CDUnknownBlockType */ _block;
}

@property(nonatomic) BOOL removed; // @synthesize removed=_removed;
@property(copy, nonatomic) id /* CDUnknownBlockType */ block; // @synthesize block=_block;
@property(copy, nonatomic) NSString *userDefaultsKey; // @synthesize userDefaultsKey=_userDefaultsKey;
@property(retain, nonatomic) REMUserDefaults *userDefaults; // @synthesize userDefaults=_userDefaults;
// - (void).cxx_destruct;
- (void)dealloc;
- (void)stopObserving;
- (id)initWithUserDefaults:(id)arg1 key:(id)arg2 block:(id /* CDUnknownBlockType */)arg3;

@end
