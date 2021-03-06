//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeAI/HMICameraVideoFrameSelectorDelegate-Protocol.h>

@class HMICameraVideoAnalyzer, HMICameraVideoAnalyzerRequestLog, HMICameraVideoAssetReader, HMICameraVideoEncoderSession, HMICameraVideoFragment, HMICameraVideoFrameSelector, HMICameraVideoPosterFrameGenerator, HMICameraVideoResourceAttributes, NSArray, NSDate, NSMutableArray;

@interface HMICameraVideoAnalyzerRequest : HMFObject <HMICameraVideoFrameSelectorDelegate>
{
    NSDate *_analysisSubmissionTime;
    NSDate *_analysisStartTime;
    double _maxAnalysisFPS;
    double _analysisFPS;
    HMICameraVideoFragment *_fragment;
    HMICameraVideoResourceAttributes *_attributes;
    HMICameraVideoEncoderSession *_encoderSession;
    HMICameraVideoPosterFrameGenerator *_posterFrameGenerator;
    HMICameraVideoFrameSelector *_frameSelector;
    HMICameraVideoAssetReader *_assetReader;
    HMICameraVideoAnalyzer *_analyzer;
    long long _events;
    long long _eventTypes;
    NSMutableArray *_videoFrameResults;
    NSMutableArray *_significantEventsInternal;
    HMICameraVideoAnalyzerRequestLog *_log;
    long long _phase;
    long long _flag;
}

+ (id)logCategory;
+ (id)videoAnnotationScoresForFrameResult:(id)arg1;
@property long long flag; // @synthesize flag=_flag;
@property long long phase; // @synthesize phase=_phase;
@property(readonly) HMICameraVideoAnalyzerRequestLog *log; // @synthesize log=_log;
@property(readonly) NSMutableArray *significantEventsInternal; // @synthesize significantEventsInternal=_significantEventsInternal;
@property(retain) NSMutableArray *videoFrameResults; // @synthesize videoFrameResults=_videoFrameResults;
@property(readonly) long long eventTypes; // @synthesize eventTypes=_eventTypes;
@property long long events; // @synthesize events=_events;
@property(readonly) HMICameraVideoAnalyzer *analyzer; // @synthesize analyzer=_analyzer;
@property(readonly) HMICameraVideoAssetReader *assetReader; // @synthesize assetReader=_assetReader;
@property(readonly) HMICameraVideoFrameSelector *frameSelector; // @synthesize frameSelector=_frameSelector;
@property(readonly) HMICameraVideoPosterFrameGenerator *posterFrameGenerator; // @synthesize posterFrameGenerator=_posterFrameGenerator;
@property(readonly) HMICameraVideoEncoderSession *encoderSession; // @synthesize encoderSession=_encoderSession;
@property(readonly) HMICameraVideoResourceAttributes *attributes; // @synthesize attributes=_attributes;
@property(readonly) HMICameraVideoFragment *fragment; // @synthesize fragment=_fragment;
@property(readonly) double analysisFPS; // @synthesize analysisFPS=_analysisFPS;
@property(readonly) double maxAnalysisFPS; // @synthesize maxAnalysisFPS=_maxAnalysisFPS;
@property(readonly) NSDate *analysisStartTime; // @synthesize analysisStartTime=_analysisStartTime;
@property(readonly) NSDate *analysisSubmissionTime; // @synthesize analysisSubmissionTime=_analysisSubmissionTime;
// - (void).cxx_destruct;
- (void)cancel;
@property(readonly) double timeSinceAnalysisSubmission;
@property(readonly) double timeSinceAnalysisStart;
- (id)makeDidNotAnalyzeResultWithResultCode:(long long)arg1;
- (id)makeDidAnalyzeResult;
- (id)finishEncoderSession;
- (void)selector:(id)arg1 maySelectFrame:(id)arg2;
- (BOOL)startFrameSelector;
- (BOOL)startAssetReaderWithWorkQueue:(id)arg1 logIdentifier:(id)arg2;
- (BOOL)startPosterFrameGeneratorWithInterval:(NSUInteger)arg1 frameHeight:(NSUInteger)arg2;
- (BOOL)startEncodingSessionWithError:(id )arg1;
- (void)startAnalysis;
- (void)loadAttributes;
- (id)loadAttributesFromVideoFragment:(id)arg1;
@property(readonly) BOOL shouldFailAnalysis;
@property(readonly) BOOL shouldSkipAnalysis;
- (void)markForPrediction;
@property(readonly) NSArray *significantEvents;
- (void)addSignificantEvent:(id)arg1;
- (id)initWithVideoFragment:(id)arg1 analyzer:(id)arg2 maxAnalysisFPS:(double)arg3;

@end

