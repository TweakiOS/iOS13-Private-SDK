//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BSTimer, NSMutableArray, SBPressSequenceValidator, SBPressTuple;
@protocol SBPressSequenceRecognizerDelegate;

@interface SBPressSequenceRecognizer : NSObject
{
    double _lastPressDownEvent;
    double _lastPressUpEvent;
    BSTimer *_watchdogTimer;
    SBPressTuple *_currentPressTuple;
    NSMutableArray *_currentSequence;
    id <SBPressSequenceRecognizerDelegate> _delegate;
    SBPressSequenceValidator *_validator;
    unsigned long long _numberOfPresses;
}

@property(readonly, nonatomic) unsigned long long numberOfPresses; // @synthesize numberOfPresses=_numberOfPresses;
@property(readonly, nonatomic) SBPressSequenceValidator *validator; // @synthesize validator=_validator;
@property(nonatomic) __weak id <SBPressSequenceRecognizerDelegate> delegate; // @synthesize delegate=_delegate;
- (double)_watchdogTimeIntervalFromDelay:(double)arg1;
- (void)_resetAfterDelay:(double)arg1;
- (void)_resetWatchdogIfNecessary;
- (void)_resetAndNotify;
- (void)_reset;
- (void)_complete;
- (void)_handlePressUpWithTimestamp:(double)arg1;
- (void)_handlePressDownWithTimestamp:(double)arg1;
- (void)resetWithNewValidator:(id)arg1 numberOfPresses:(unsigned long long)arg2;
- (void)registerPressUpWithTimestamp:(double)arg1;
- (void)registerPressDownWithTimestamp:(double)arg1;
- (id)initWithValidator:(id)arg1 numberOfPresses:(unsigned long long)arg2;
- (id)init;

@end
