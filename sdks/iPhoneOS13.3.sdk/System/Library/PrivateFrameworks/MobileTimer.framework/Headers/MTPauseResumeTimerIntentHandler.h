//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MobileTimer/MTUpdateTimerIntentHandler.h>

#import <MobileTimer/INPauseTimerIntentHandling-Protocol.h>
#import <MobileTimer/INResumeTimerIntentHandling-Protocol.h>

@interface MTPauseResumeTimerIntentHandler : MTUpdateTimerIntentHandler <INPauseTimerIntentHandling, INResumeTimerIntentHandling>
{
}

- (id)_responseToResumeTimerIntent:(id)arg1 withResumedTimers:(id)arg2 error:(id)arg3 dryRun:(BOOL)arg4;
- (id)_responseToPauseTimerIntent:(id)arg1 withPausedTimers:(id)arg2 error:(id)arg3 dryRun:(BOOL)arg4;
- (void)_handleResumeTimer:(id)arg1 dryRun:(BOOL)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)handleResumeTimer:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)confirmResumeTimer:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)resolveResumeMultipleForResumeTimer:(id)arg1 withCompletion:(id /* CDUnknownBlockType */)arg2;
- (void)resolveTargetTimerForResumeTimer:(id)arg1 withCompletion:(id /* CDUnknownBlockType */)arg2;
- (void)_handlePauseTimer:(id)arg1 dryRun:(BOOL)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)handlePauseTimer:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)confirmPauseTimer:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)resolvePauseMultipleForPauseTimer:(id)arg1 withCompletion:(id /* CDUnknownBlockType */)arg2;
- (void)resolveTargetTimerForPauseTimer:(id)arg1 withCompletion:(id /* CDUnknownBlockType */)arg2;

@end
