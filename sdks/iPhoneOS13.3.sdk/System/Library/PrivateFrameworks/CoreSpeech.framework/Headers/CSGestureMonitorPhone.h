//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreSpeech/CSGestureMonitor.h>

#import <CoreSpeech/CMWakeGestureDelegate-Protocol.h>

@class CMWakeGestureManager;

@interface CSGestureMonitorPhone : CSGestureMonitor <CMWakeGestureDelegate>
{
    CMWakeGestureManager *_gestureManager;
}

// - (void).cxx_destruct;
- (void)_didReceiveSleepGesture;
- (void)_didReceiveWakeGesture;
- (void)wakeGestureManager:(id)arg1 didUpdateWakeGesture:(long long)arg2;
- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)arg1;
- (id)init;

@end
