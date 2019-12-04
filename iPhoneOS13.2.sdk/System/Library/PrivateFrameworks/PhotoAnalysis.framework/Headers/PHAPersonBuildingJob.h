//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotoAnalysis/PHAVisionServiceFaceProcessingWorkerAdditionalJob.h>

#import <PhotoAnalysis/PHAPersonBuildingJobOperationDelegate-Protocol.h>

@class NSOperationQueue, NSString, PHAPersonBuildingJobOperation;

@interface PHAPersonBuildingJob : PHAVisionServiceFaceProcessingWorkerAdditionalJob <PHAPersonBuildingJobOperationDelegate>
{
    NSOperationQueue *_operationQueue;
    PHAPersonBuildingJobOperation *_personBuildingOperation;
}

- (void)operationDidProgress:(id)arg1;
- (float)completionScore;
- (_Bool)stopJob:(id *)arg1;
- (_Bool)startJob:(id *)arg1;
- (id)initWithFaceProcessingWorker:(id)arg1 jobScenario:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
