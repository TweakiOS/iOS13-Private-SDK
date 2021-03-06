//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface ASVSpline : NSObject
{
    struct vector<ASVControlPoint, std::__1::allocator<ASVControlPoint>> _controlPoints;
    struct vector<ASVPatchData, std::__1::allocator<ASVPatchData>> _patchData;
    struct vector<unsigned short, std::__1::allocator<unsigned short>> _indices;
    float _relativeThickness;
    float _cap_error;
}

+ 
+ 
- (id).cxx_construct;
// - (void).cxx_destruct;
- (void)genTubeIndicesWithPattern:(NSUInteger)arg1;
- (void)genRightCapWithWidth:(float)arg1;
- (void)genLeftCapWithWidth:(float)arg1;
- (id)initWithPoints:(MISSING_TYPE *)arg1 numPoints:(unsigned int)arg2 relativeThickness:(float)arg3 pattern:(NSUInteger)arg4 mat:(CDStruct_14d5dc5e)arg5;
@property(readonly, nonatomic) unsigned int numIndices;
@property(readonly, nonatomic) unsigned short indices;
@property(readonly, nonatomic) unsigned int patchDataLength;
@property(readonly, nonatomic) CDStruct_183601bc patchData;
@property(readonly, nonatomic) unsigned int numControlPoints;
@property(readonly, nonatomic) CDStruct_37a3040a controlPoints;

@end

