//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSError, NSProgress, NSString, NSURL, NSUUID, PFMediaCapabilities, PHMediaFormatConversionCompositeRequest, PHMediaFormatConversionDestination, PHMediaFormatConversionSource;

@interface PHMediaFormatConversionRequest : NSObject <NSProgressReporting>
{
    double _formatConversionExpansionFactor;
    BOOL _forceFormatConversion;
    BOOL _shouldPadOutputFileToEstimatedLength;
    BOOL _shouldStripLocation;
    BOOL _useTransferBehaviorUserPreference;
    BOOL _requiresSinglePassVideoConversion;
    BOOL _preflighted;
    long long _livePhotoPairingIdentifierBehavior;
    NSString *_livePhotoPairingIdentifier;
    long long _status;
    NSProgress *_progress;
    NSError *_error;
    NSString *_outputFilename;
    PHMediaFormatConversionDestination *_destination;
    id _userInfo;
    NSUUID *_identifier;
    PHMediaFormatConversionSource *_source;
    PFMediaCapabilities *_destinationCapabilities;
    PHMediaFormatConversionCompositeRequest *_parentRequest;
    NSURL *_directoryForTemporaryFiles;
    long long _transferBehaviorUserPreference;
    id /* CDUnknownBlockType */ _singlePassVideoConversionUpdateHandler;
    long long _passthroughConversionAdditionalByteCount;
}

+ (double)heifToJPEGFactorForBitsPerPixel:(double)arg1;
+ (double)bitsPerPixelWithImageDimensions:(CGSize)arg1 fileLength:(NSUInteger)arg2;
+ (double)heifToJPEGFactorWithImageDimensions:(CGSize)arg1 fileLength:(NSUInteger)arg2;
+ (id)requestForSource:(id)arg1 destinationCapabilities:(id)arg2 error:(id )arg3;
+ (id)stringForRequestStatus:(long long)arg1;
@property BOOL preflighted; // @synthesize preflighted=_preflighted;
@property(nonatomic) long long passthroughConversionAdditionalByteCount; // @synthesize passthroughConversionAdditionalByteCount=_passthroughConversionAdditionalByteCount;
@property BOOL requiresSinglePassVideoConversion; // @synthesize requiresSinglePassVideoConversion=_requiresSinglePassVideoConversion;
@property(copy) id /* CDUnknownBlockType */ singlePassVideoConversionUpdateHandler; // @synthesize singlePassVideoConversionUpdateHandler=_singlePassVideoConversionUpdateHandler;
@property long long transferBehaviorUserPreference; // @synthesize transferBehaviorUserPreference=_transferBehaviorUserPreference;
@property(retain) NSURL *directoryForTemporaryFiles; // @synthesize directoryForTemporaryFiles=_directoryForTemporaryFiles;
@property __weak PHMediaFormatConversionCompositeRequest *parentRequest; // @synthesize parentRequest=_parentRequest;
@property(retain) PFMediaCapabilities *destinationCapabilities; // @synthesize destinationCapabilities=_destinationCapabilities;
@property(retain) PHMediaFormatConversionSource *source; // @synthesize source=_source;
@property(readonly) NSUUID *identifier; // @synthesize identifier=_identifier;
@property(retain) id userInfo; // @synthesize userInfo=_userInfo;
@property(retain) PHMediaFormatConversionDestination *destination; // @synthesize destination=_destination;
@property BOOL useTransferBehaviorUserPreference; // @synthesize useTransferBehaviorUserPreference=_useTransferBehaviorUserPreference;
@property(retain) NSString *outputFilename; // @synthesize outputFilename=_outputFilename;
@property(retain) NSError *error; // @synthesize error=_error;
@property(retain) NSProgress *progress; // @synthesize progress=_progress;
@property long long status; // @synthesize status=_status;
@property BOOL shouldStripLocation; // @synthesize shouldStripLocation=_shouldStripLocation;
@property BOOL shouldPadOutputFileToEstimatedLength; // @synthesize shouldPadOutputFileToEstimatedLength=_shouldPadOutputFileToEstimatedLength;
@property BOOL forceFormatConversion; // @synthesize forceFormatConversion=_forceFormatConversion;
@property(copy) NSString *livePhotoPairingIdentifier; // @synthesize livePhotoPairingIdentifier=_livePhotoPairingIdentifier;
@property long long livePhotoPairingIdentifierBehavior; // @synthesize livePhotoPairingIdentifierBehavior=_livePhotoPairingIdentifierBehavior;
// - (void).cxx_destruct;
- (void)updateSinglePassVideoConversionStatus:(long long)arg1 addedRange:(_NSRange)arg2 error:(id)arg3;
- (void)enableSinglePassVideoEncodingWithUpdateHandler:(id /* CDUnknownBlockType */)arg1;
- (void)didFinishProcessing;
- (void)padOutputFileToEstimatedLength;
@property(nonatomic) double formatConversionExpansionFactor;
@property(readonly) NSUInteger estimatedOutputFileLength;
- (BOOL)userPreferenceProhibitsFormatConversion;
@property(readonly) NSString *outputFileType;
@property(readonly) NSString *outputPathExtension;
@property(readonly) BOOL requiresFormatConversion;
- (BOOL)requiresLocationMetadataChange;
- (BOOL)requiresLivePhotoPairingIdentifierChange;
@property(readonly) BOOL requiresMetadataChanges;
@property(readonly) BOOL requiresPassthroughConversion;
@property(readonly) long long backwardsCompatibilityStatus;
- (void)preflightWithConversionManager:(id)arg1;
- (void)markAsCancelled;
- (void)setupProgress;
@property(readonly) BOOL isCompositeRequest;
@property(readonly) NSString *statusString;
@property(readonly, copy) NSString *description;
- (BOOL)prepareWithError:(id )arg1;
- (id)init;

@end

