//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface _UIStateMachine : NSObject
{
    NSUInteger _stateCount;
    NSUInteger _eventCount;
    struct {
        NSUInteger _field1;
        NSUInteger _field2;
        BOOL _field3;
        NSUInteger _field4;
        id /* CDUnknownBlockType */ _field5;
        id /* CDUnknownBlockType */ _field6;
    } _transitionTable;
    NSMutableDictionary *_stateChangeObservers;
    NSUInteger _state;
}

+ (void)debugAttemptedInvalidStateTransitionFromState:(NSUInteger)arg1 withEvent:(NSUInteger)arg2;
+ (void)debugStateTransitionFromState:(NSUInteger)arg1 withEvent:(NSUInteger)arg2 toState:(NSUInteger)arg3;
@property(nonatomic) NSUInteger state; // @synthesize state=_state;
// - (void).cxx_destruct;
- (void)_iterateTransitionTable:(id /* CDUnknownBlockType */)arg1;
- (id)_transitionDescriptions;
- (void)handleEvent:(NSUInteger)arg1 withContext:(id)arg2;
- (void)setStateChangeObserver:(NSUInteger)arg1 observer:(id /* CDUnknownBlockType */)arg2;
- (void)setStaticTransitionFromState:(NSUInteger)arg1 withEvent:(NSUInteger)arg2 toState:(NSUInteger)arg3;
- (void)setTransitionHandlerForState:(NSUInteger)arg1 withEvent:(NSUInteger)arg2 transitionHandler:(id /* CDUnknownBlockType */)arg3 postTransitionHandler:(id /* CDUnknownBlockType */)arg4;
- (void)setTransitionHandlerForState:(NSUInteger)arg1 withEvent:(NSUInteger)arg2 transitionHandler:(id /* CDUnknownBlockType */)arg3;
- (void)dealloc;
- (NSUInteger)_totalStateCount;
- (id)initWithStates:(NSUInteger)arg1 events:(NSUInteger)arg2 initialState:(NSUInteger)arg3;

@end

