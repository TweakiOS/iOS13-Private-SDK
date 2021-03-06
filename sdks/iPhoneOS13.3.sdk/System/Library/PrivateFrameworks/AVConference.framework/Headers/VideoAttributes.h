//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@interface VideoAttributes : NSObject <NSCopying, NSCoding>
{
    CGSize ratio;
    int orientation;
    int camera;
    BOOL cameraSwitching;
    CGRect contentsRect;
    BOOL videoSourceScreen;
    BOOL videoMirrored;
}

+ (id)cameraUIDForVideoAttributeCamera:(int)arg1;
+ (int)videoAttributeCameraForCameraUID:(id)arg1;
+ (id)videoAttributesWithVideoAttributes:(id)arg1;
@property(nonatomic) BOOL videoMirrored; // @synthesize videoMirrored;
@property(nonatomic) BOOL videoSourceScreen; // @synthesize videoSourceScreen;
@property(nonatomic) CGRect contentsRect; // @synthesize contentsRect;
@property(nonatomic) BOOL cameraSwitching; // @synthesize cameraSwitching;
@property(nonatomic) int camera; // @synthesize camera;
@property(nonatomic) int orientation; // @synthesize orientation;
@property(nonatomic) CGSize ratio; // @synthesize ratio;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)decodeFromNSDictionary:(id)arg1;
- (id)copyEncodedDictionary;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (BOOL)isEqualToVideoAttributes:(id)arg1;
- (id)initWithEncodedDictionary:(id)arg1;
- (id)initWithCameraStatusBits:(unsigned char)arg1 aspectRatio:(CGSize)arg2 contentsRect:(CGRect)arg3;
- (id)init;

@end

