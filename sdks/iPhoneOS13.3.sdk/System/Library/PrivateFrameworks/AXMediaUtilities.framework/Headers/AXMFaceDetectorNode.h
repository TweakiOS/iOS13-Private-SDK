//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AXMediaUtilities/AXMEvaluationNode.h>

@class VNClassifyFaceAttributesRequest, VNCreateFaceprintRequest, VNDetectFaceExpressionsRequest, VNDetectFaceLandmarksRequest, VNDetectFacePoseRequest, VNDetectFaceRectanglesRequest;

@interface AXMFaceDetectorNode : AXMEvaluationNode
{
    VNDetectFaceRectanglesRequest *__faceRectanglesRequest;
    VNCreateFaceprintRequest *__faceprintRequest;
    VNClassifyFaceAttributesRequest *__faceAttributesRequest;
    VNDetectFaceExpressionsRequest *__faceExpressionsRequest;
    VNDetectFaceLandmarksRequest *__faceLandmarksRequest;
    VNDetectFacePoseRequest *__facePoseRequest;
}

+ (id)title;
+ (BOOL)isSupported;
+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) VNDetectFacePoseRequest *_facePoseRequest; // @synthesize _facePoseRequest=__facePoseRequest;
@property(retain, nonatomic) VNDetectFaceLandmarksRequest *_faceLandmarksRequest; // @synthesize _faceLandmarksRequest=__faceLandmarksRequest;
@property(retain, nonatomic) VNDetectFaceExpressionsRequest *_faceExpressionsRequest; // @synthesize _faceExpressionsRequest=__faceExpressionsRequest;
@property(retain, nonatomic) VNClassifyFaceAttributesRequest *_faceAttributesRequest; // @synthesize _faceAttributesRequest=__faceAttributesRequest;
@property(retain, nonatomic) VNCreateFaceprintRequest *_faceprintRequest; // @synthesize _faceprintRequest=__faceprintRequest;
@property(retain, nonatomic) VNDetectFaceRectanglesRequest *_faceRectanglesRequest; // @synthesize _faceRectanglesRequest=__faceRectanglesRequest;
// - (void).cxx_destruct;
- (id)_faceResultForUUID:(id)arg1 inFaceDictionary:(id)arg2;
- (void)evaluate:(id)arg1;
- (id)_faceDetectionResultsForVisionRequests:(id)arg1 canvasSize:(CGSize)arg2;
- (id)_createRequestsForContext:(id)arg1;
- (BOOL)validateVisionKitSoftLinkSymbols;
- (BOOL)requiresVisionFramework;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)nodeInitialize;

@end
