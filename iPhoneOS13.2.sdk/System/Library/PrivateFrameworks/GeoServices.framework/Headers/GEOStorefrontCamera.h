//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface GEOStorefrontCamera : NSObject
{
    int _cameraNumber;
    struct CGSize _imageSize;
    struct GEOOrientedPosition _position;
    unsigned char _lensType;
    struct GEOLensModel _projection;
    NSArray *_textureIds;
}

@property(readonly, nonatomic) NSArray *textureIds; // @synthesize textureIds=_textureIds;
@property(readonly, nonatomic) struct GEOLensModel projection; // @synthesize projection=_projection;
@property(readonly, nonatomic) unsigned char lensType; // @synthesize lensType=_lensType;
@property(readonly, nonatomic) struct GEOOrientedPosition position; // @synthesize position=_position;
@property(readonly, nonatomic) struct CGSize imageSize; // @synthesize imageSize=_imageSize;
@property(readonly, nonatomic) int cameraNumber; // @synthesize cameraNumber=_cameraNumber;
- (id)initWithCameraMetadata:(id)arg1;
- (id)init;

@end
