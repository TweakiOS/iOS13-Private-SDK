//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CSSpIdImplicitTraining : NSObject
{
}

+ (id)sharedInstance;
- (void)processSingleUserImplicitTrainingUtterance:(id)arg1 audioDeviceType:(id)arg2 audioRecordType:(id)arg3 withVoiceTriggerCtxt:(id)arg4 withOtherCtxt:(id)arg5 withCompletion:(id /* CDUnknownBlockType */)arg6;
- (void)recordingStoppedForReason:(long long)arg1;
- (void)processImplicitTrainingUtteranceWithVoiceTriggerEventInfo:(id)arg1;
- (void)processAudioChunk:(id)arg1;
- (void)processImplicitTrainingUtterance:(id)arg1 forVoiceProfileId:(id)arg2 withRecordDeviceInfo:(id)arg3 withRecordCtxt:(id)arg4 withVoiceTriggerCtxt:(id)arg5 withOtherCtxt:(id)arg6 withCompletion:(id /* CDUnknownBlockType */)arg7;
- (void)setRecordingContext:(id)arg1;

@end

