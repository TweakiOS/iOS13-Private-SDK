//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NanoTimeKitCompanion/_Geometry.h>

@class NSMutableArray;

@interface _Head : _Geometry
{
    float _width;
    float _height;
    float _curHeadTilt;
    float _curHeadX;
    int _inAnimation;
    NSMutableArray *_texs;
    NSMutableArray *_blinkTexs;
    // Error parsing type: , name: _bone
    // Error parsing type: , name: _offset
}

@property(nonatomic) int inAnimation; // @synthesize inAnimation=_inAnimation;
@property(nonatomic) float curHeadX; // @synthesize curHeadX=_curHeadX;
@property(nonatomic) float curHeadTilt; // @synthesize curHeadTilt=_curHeadTilt;
// Error parsing type for property offset:
// Property attributes: T,N,V_offset

// Error parsing type for property bone:
// Property attributes: T,N,V_bone

@property(retain, nonatomic) NSMutableArray *blinkTexs; // @synthesize blinkTexs=_blinkTexs;
@property(retain, nonatomic) NSMutableArray *texs; // @synthesize texs=_texs;
@property(nonatomic) float height; // @synthesize height=_height;
@property(nonatomic) float width; // @synthesize width=_width;

@end
