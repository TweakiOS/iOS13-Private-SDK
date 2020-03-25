//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CSReceiverPreferences, NSSet;

@interface CSRecieverState : NSObject
{
    int _notifyToken;
    CSReceiverPreferences *_receiverPreferences;
    NSSet *_enabledBundleIdentifiers;
    NSSet *_disabledBundleIdentifiers;
}

+ (id)sharedInstance;
@property(readonly, nonatomic) int notifyToken; // @synthesize notifyToken=_notifyToken;
@property(readonly, nonatomic) NSSet *disabledBundleIdentifiers; // @synthesize disabledBundleIdentifiers=_disabledBundleIdentifiers;
@property(readonly, nonatomic) NSSet *enabledBundleIdentifiers; // @synthesize enabledBundleIdentifiers=_enabledBundleIdentifiers;
@property(readonly, nonatomic) CSReceiverPreferences *receiverPreferences; // @synthesize receiverPreferences=_receiverPreferences;
// - (void).cxx_destruct;
- (BOOL)checkBundleIdentifier:(id)arg1;
- (void)_updateFromPreferences;
- (id)init;

@end
