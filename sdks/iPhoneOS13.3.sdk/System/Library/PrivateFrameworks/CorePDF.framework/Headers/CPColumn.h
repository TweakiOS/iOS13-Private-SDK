//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CorePDF/CPRegion.h>

__attribute__((visibility("hidden")))
@interface CPColumn : CPRegion
{
    BOOL hasCentredParagraph;
    BOOL hasColumnBreak;
    double maxLeftPad;
    double maxRightPad;
    double maxRight;
    double minLeft;
    BOOL complete;
}

@property BOOL complete; // @synthesize complete;
- (id)description;
- (double)selectionBottom;
- (CGRect)paddedBounds;
- (void)setMaxRightPad:(double)arg1;
- (double)maxRightPad;
- (void)setMaxLeftPad:(double)arg1;
- (double)maxLeftPad;
- (double)rightPad;
- (double)leftPad;
- (void)setHasCentredParagraph:(BOOL)arg1;
- (BOOL)hasCentredParagraph;
- (double)bottomBaseline;
- (CGRect)columnBounds;
- (BOOL)isShapeRegion;
- (BOOL)isImageRegion;
- (void)setIsImageRegion:(BOOL)arg1;
- (BOOL)isRowRegion;
- (BOOL)isGraphicalRegion;
- (BOOL)isBoxRegion;
- (void)setHasColumnBreak:(BOOL)arg1;
- (void)accept:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)dealloc;
- (id)init;
- (int)inOrder;
- (int)outOrder;

@end

