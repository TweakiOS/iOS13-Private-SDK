//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSSStyle.h>

#import <iWorkImport/TSWPColumnMetrics-Protocol.h>

@class TSWPPadding;

__attribute__((visibility("hidden")))
@interface TSWPColumnStyle : TSSStyle <TSWPColumnMetrics>
{
}

+ (id)defaultStyleWithContext:(id)arg1;
+ (id)defaultValueForProperty:(int)arg1;
+ (float)defaultFloatValueForProperty:(int)arg1;
+ (int)defaultIntValueForProperty:(int)arg1;
+ (id)properties;
- (void)saveToArchiver:(id)arg1;
- (void)saveToArchive:(struct ColumnStyleArchive )arg1 archiver:(id)arg2;
- (void)loadFromUnarchiver:(id)arg1;
- (void)loadFromArchive:(const struct ColumnStyleArchive )arg1 unarchiver:(id)arg2;
@property(readonly, nonatomic) BOOL columnsAreLeftToRight;
@property(readonly, nonatomic) BOOL shrinkTextToFit;
@property(readonly, nonatomic) BOOL alwaysStartsNewTarget;
- (double)positionForColumnIndex:(NSUInteger)arg1 bodyWidth:(double)arg2 target:(id)arg3 outWidth:(double )arg4 outGap:(double )arg5;
- (double)gapForColumnIndex:(NSUInteger)arg1 bodyWidth:(double)arg2;
- (double)widthForColumnIndex:(NSUInteger)arg1 bodyWidth:(double)arg2;
@property(readonly, nonatomic) NSUInteger columnCount;
- (BOOL)equalWidth;
- (id)layoutMarginsForTarget:(id)arg1;
@property(readonly, nonatomic) TSWPPadding *layoutMargins;
- (CGSize)adjustedInsetsForTarget:(id)arg1;

@end

