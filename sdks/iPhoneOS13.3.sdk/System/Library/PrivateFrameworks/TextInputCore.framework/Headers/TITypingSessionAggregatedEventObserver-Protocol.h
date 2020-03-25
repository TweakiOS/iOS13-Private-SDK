//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSUUID, TIKeyboardCandidate, TITypingSession, TITypingSessionAligned;

@protocol TITypingSessionAggregatedEventObserver <NSObject>
- (void)sessionDidEnd:(TITypingSession *)arg1 aligned:(TITypingSessionAligned *)arg2;

@optional
- (void)candidateRevised:(TIKeyboardCandidate *)arg1 newCandidate:(TIKeyboardCandidate *)arg2 sessionID:(NSUUID *)arg3 timeStamp:(double)arg4 revisionAction:(NSUInteger)arg5;
- (void)candidateEntered:(TIKeyboardCandidate *)arg1 sessionID:(NSUUID *)arg2 timeStamp:(double)arg3 action:(NSUInteger)arg4;
@end
