//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOperation.h>

@interface SOAsynchronousOperation : NSOperation
{
    NSUInteger _state;
}

@property(nonatomic) NSUInteger state; // @synthesize state=_state;
- (void)finish;
- (void)main;
- (void)start;
- (BOOL)isAsynchronous;
- (BOOL)isExecuting;
- (BOOL)isReady;
- (BOOL)isFinished;
- (id)init;

@end

