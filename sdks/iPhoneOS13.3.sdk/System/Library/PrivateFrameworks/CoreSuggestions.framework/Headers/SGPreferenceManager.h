//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSUserDefaults;
@protocol OS_dispatch_queue;

@interface SGPreferenceManager : NSObject
{
    NSUserDefaults *_suggestionsDefaults;
    NSObject<OS_dispatch_queue> *_settingsUpdateQueue;
    BOOL _isQueueSuspended;
}

+ (id)defaultManager;
// - (void).cxx_destruct;
- (void)_resumeNotificationQueue;
- (void)_suspendNotificationQueue;
- (int)registerBlock:(id /* CDUnknownBlockType */)arg1;
- (id)init;

@end

