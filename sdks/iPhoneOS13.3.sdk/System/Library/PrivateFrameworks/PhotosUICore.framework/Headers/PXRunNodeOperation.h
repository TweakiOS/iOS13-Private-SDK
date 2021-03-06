//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class NSLock, PXRunNode;

@interface PXRunNodeOperation : NSOperation
{
    NSUInteger _state;
    PXRunNode *_runNode;
    NSLock *__stateLock;
}

+ (id)keyPathsForValuesAffectingIsFinished;
+ (id)keyPathsForValuesAffectingIsExecuting;
+ (id)keyPathsForValuesAffectingIsReady;
@property(readonly, nonatomic) NSLock *_stateLock; // @synthesize _stateLock=__stateLock;
@property(readonly, nonatomic) PXRunNode *runNode; // @synthesize runNode=_runNode;
// - (void).cxx_destruct;
- (BOOL)completeIfAble;
- (BOOL)cancelIfAble;
- (BOOL)_transitionToState:(NSUInteger)arg1;
@property(readonly) NSUInteger state; // @synthesize state=_state;
- (BOOL)isAsynchronous;
- (BOOL)isFinished;
- (BOOL)isExecuting;
- (BOOL)isReady;
- (void)start;
- (id)initWithRunNode:(id)arg1;
- (id)init;

@end

