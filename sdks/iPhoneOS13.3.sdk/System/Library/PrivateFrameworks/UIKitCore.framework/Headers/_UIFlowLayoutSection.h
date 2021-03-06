//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSMutableSet, _UIFlowLayoutInfo;

__attribute__((visibility("hidden")))
@interface _UIFlowLayoutSection : NSObject
{
    BOOL _isValid;
    CGRect _validRect;
    CGRect _rectToKeepValid;
    NSMutableSet *_invalidatedIndexPaths;
    BOOL _fixedItemSize;
    BOOL _lastRowIncomplete;
    NSMutableArray *_items;
    NSMutableArray *_rows;
    double _verticalInterstice;
    double _horizontalInterstice;
    double _headerDimension;
    double _footerDimension;
    _UIFlowLayoutInfo *_layoutInfo;
    double _otherMargin;
    double _beginMargin;
    double _endMargin;
    double _actualGap;
    double _lastRowBeginMargin;
    double _lastRowEndMargin;
    double _lastRowActualGap;
    long long _itemsCount;
    long long _itemsByRowCount;
    long long _indexOfIncompleteRow;
    CDStruct_2f5e8405 _rowAlignmentOptions;
    CGSize _itemSize;
    _NSRange _validItemRange;
    UIEdgeInsets _sectionMargins;
    CGRect _frame;
    CGRect _headerFrame;
    CGRect _footerFrame;
}

@property(readonly, nonatomic) _NSRange validItemRange; // @synthesize validItemRange=_validItemRange;
@property(readonly, nonatomic) long long indexOfIncompleteRow; // @synthesize indexOfIncompleteRow=_indexOfIncompleteRow;
@property(readonly, nonatomic) long long itemsByRowCount; // @synthesize itemsByRowCount=_itemsByRowCount;
@property(nonatomic) long long itemsCount; // @synthesize itemsCount=_itemsCount;
@property(readonly, nonatomic) BOOL lastRowIncomplete; // @synthesize lastRowIncomplete=_lastRowIncomplete;
@property(readonly, nonatomic) double lastRowActualGap; // @synthesize lastRowActualGap=_lastRowActualGap;
@property(readonly, nonatomic) double lastRowEndMargin; // @synthesize lastRowEndMargin=_lastRowEndMargin;
@property(readonly, nonatomic) double lastRowBeginMargin; // @synthesize lastRowBeginMargin=_lastRowBeginMargin;
@property(readonly, nonatomic) double actualGap; // @synthesize actualGap=_actualGap;
@property(readonly, nonatomic) double endMargin; // @synthesize endMargin=_endMargin;
@property(readonly, nonatomic) double beginMargin; // @synthesize beginMargin=_beginMargin;
@property(readonly, nonatomic) double otherMargin; // @synthesize otherMargin=_otherMargin;
@property(nonatomic) CGSize itemSize; // @synthesize itemSize=_itemSize;
@property(nonatomic) BOOL fixedItemSize; // @synthesize fixedItemSize=_fixedItemSize;
@property(nonatomic) CDStruct_2f5e8405 rowAlignmentOptions; // @synthesize rowAlignmentOptions=_rowAlignmentOptions;
@property(nonatomic) __weak _UIFlowLayoutInfo *layoutInfo; // @synthesize layoutInfo=_layoutInfo;
@property(readonly, nonatomic) double footerDimension; // @synthesize footerDimension=_footerDimension;
@property(readonly, nonatomic) double headerDimension; // @synthesize headerDimension=_headerDimension;
@property(nonatomic) CGRect footerFrame; // @synthesize footerFrame=_footerFrame;
@property(nonatomic) CGRect headerFrame; // @synthesize headerFrame=_headerFrame;
@property(nonatomic) CGRect frame; // @synthesize frame=_frame;
@property(nonatomic) UIEdgeInsets sectionMargins; // @synthesize sectionMargins=_sectionMargins;
@property(nonatomic) double horizontalInterstice; // @synthesize horizontalInterstice=_horizontalInterstice;
@property(nonatomic) double verticalInterstice; // @synthesize verticalInterstice=_verticalInterstice;
@property(readonly, nonatomic) NSMutableArray *rows; // @synthesize rows=_rows;
@property(readonly, nonatomic) NSMutableArray *items; // @synthesize items=_items;
// - (void).cxx_destruct;
- (id)rowsInRect:(CGRect)arg1;
- (void)addInvalidatedIndexPath:(id)arg1;
- (void)setSize:(CGSize)arg1 forItemAtIndexPath:(id)arg2 invalidationContext:(id)arg3;
- (void)updateSize:(CGSize)arg1 forItemAtIndexPath:(id)arg2;
- (id)copyFromLayoutInfo:(id)arg1;
- (id)snapshot;
- (id)addRowAtEnd:(BOOL)arg1;
- (id)addItem;
- (void)setEstimatedSize:(CGSize)arg1 forSection:(long long)arg2;
- (void)updateEstimatedSizeForSection:(long long)arg1;
- (void)computeLayoutInRect:(CGRect)arg1 forSection:(long long)arg2 invalidating:(BOOL)arg3 invalidationContext:(id)arg4;
- (void)computeLayoutValidatingForwardForIndexPath:(id)arg1;
@property(readonly, nonatomic) CGRect effectiveFooterFrameWithSectionMarginsApplied;
@property(readonly, nonatomic) CGRect effectiveHeaderFrameWithSectionMarginsApplied;
- (void)setFooterDimension:(double)arg1 forSection:(long long)arg2;
- (void)setHeaderDimension:(double)arg1 forSection:(long long)arg2;
- (void)logInvalidSizesForHorizontalDirection:(BOOL)arg1 warnAboutDelegateValues:(BOOL)arg2;
- (void)logInvalidSizes;
- (long long)estimatedIndexOfItemAtPoint:(CGPoint)arg1;
- (void)computeLayout;
- (void)sizeChangedForItem:(id)arg1 atIndexPath:(id)arg2 inRow:(id)arg3;
- (void)invalidate;
- (CGRect)frameForItemAtIndexPath:(id)arg1;
@property(readonly, nonatomic) NSArray *invalidatedIndexPaths;
- (id)init;

@end

