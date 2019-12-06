//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/_UIFocusSoundPlayer-Protocol.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _UIDefaultFocusSoundPlayer : NSObject <_UIFocusSoundPlayer>
{
    NSMutableDictionary *_urlPools;
    NSMutableDictionary *_focusSoundPools;
    NSObject<OS_dispatch_queue> *_soundQueue;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *soundQueue; // @synthesize soundQueue=_soundQueue;
@property(retain, nonatomic) NSMutableDictionary *focusSoundPools; // @synthesize focusSoundPools=_focusSoundPools;
@property(retain, nonatomic) NSMutableDictionary *urlPools; // @synthesize urlPools=_urlPools;
// - (void).cxx_destruct;
- (void)_playSystemSound:(unsigned int)arg1 withVolume:(double)arg2 pan:(double)arg3;
- (void)playSoundWithFocusSound:(long long)arg1 volume:(double)arg2 pan:(double)arg3;
- (void)playSoundWithURL:(id)arg1 volume:(double)arg2 pan:(double)arg3;
- (void)dealloc;
- (id)_init;

@end
