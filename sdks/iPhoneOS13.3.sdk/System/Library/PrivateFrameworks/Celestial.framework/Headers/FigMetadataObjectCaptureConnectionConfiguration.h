//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Celestial/FigCaptureConnectionConfiguration.h>

@class NSArray;

@interface FigMetadataObjectCaptureConnectionConfiguration : FigCaptureConnectionConfiguration
{
    NSArray *_metadataIdentifiers;
    CGRect _metadataRectOfInterest;
    int _faceTrackingMaxFaces;
    BOOL _faceTrackingUsesFaceRecognition;
}

@property(nonatomic) BOOL faceTrackingUsesFaceRecognition; // @synthesize faceTrackingUsesFaceRecognition=_faceTrackingUsesFaceRecognition;
@property(nonatomic) int faceTrackingMaxFaces; // @synthesize faceTrackingMaxFaces=_faceTrackingMaxFaces;
@property(nonatomic) CGRect metadataRectOfInterest; // @synthesize metadataRectOfInterest=_metadataRectOfInterest;
@property(copy, nonatomic) NSArray *metadataIdentifiers; // @synthesize metadataIdentifiers=_metadataIdentifiers;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)description;
- (void)dealloc;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;

@end

