//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSCH3DExtrusionGeometry.h>

__attribute__((visibility("hidden")))
@interface TSCH3DLineExtrusionGeometry : TSCH3DExtrusionGeometry
{
    tvec2_84d5962d mYlimits;
    tvec2_84d5962d mXlimits;
}

+ (id)lineFromValues:(const vector_7584168e *)arg1 yLimits:(tvec2_84d5962d)arg2;
@property(nonatomic) tvec2_84d5962d xlimits; // @synthesize xlimits=mXlimits;
@property(nonatomic) tvec2_84d5962d ylimits; // @synthesize ylimits=mYlimits;
- (id).cxx_construct;
- (id)elementsBoundsPositions;
- (id)selectionKnobPositions;
- (tmat4x4_3074befe)matrixAtXPosition:(float)arg1 returningXRangeInfo:(struct LineExtrusionGeometryXRangeInfo *)arg2;
- (tmat3x3_b39cd897)p_rotationMatrixForCrossSectionIndex:(unsigned long long)arg1;
- (void)generateArrays;
- (void)setSpine:(const vector_7200ab52 *)arg1;
- (id)init;

@end
