//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewLayout.h>

@class IKChangeSet, NSArray, NSIndexSet;
@protocol _TVStackViewDelegateFlowLayout;

@interface _TVStackViewFlowLayout : UICollectionViewLayout
{
    id <_TVStackViewDelegateFlowLayout> _stackViewDelegateFlowLayout;
    struct {
        BOOL hasShowcaseFactorDidChange;
    } _stackViewDelegateFlowLayoutFlags;
    NSArray *_oldSectionCellLayoutAttributes;
    IKChangeSet *_changeSet;
    NSIndexSet *_indexesAddedAtEnd;
    CGPoint _initialContentOffset;
    BOOL _isFullReplace;
    double _lastLayoutWidth;
    long long _supplementaryCellSection;
    NSArray *_supplementaryCellLayoutAttributes;
    id /* CDUnknownBlockType */ _onPrepareLayout;
    double _showcaseHeight;
    double _showcaseFactor;
    NSArray *_sectionCellLayoutAttributes;
    CGSize _contentSize;
}

+ (Class)invalidationContextClass;
+ (Class)layoutAttributesClass;
@property(nonatomic) CGSize contentSize; // @synthesize contentSize=_contentSize;
@property(copy, nonatomic) NSArray *sectionCellLayoutAttributes; // @synthesize sectionCellLayoutAttributes=_sectionCellLayoutAttributes;
@property(readonly, nonatomic) double showcaseFactor; // @synthesize showcaseFactor=_showcaseFactor;
@property(nonatomic) double showcaseHeight; // @synthesize showcaseHeight=_showcaseHeight;
@property(copy, nonatomic) id /* CDUnknownBlockType */ onPrepareLayout; // @synthesize onPrepareLayout=_onPrepareLayout;
@property(copy, nonatomic) NSArray *supplementaryCellLayoutAttributes; // @synthesize supplementaryCellLayoutAttributes=_supplementaryCellLayoutAttributes;
@property(nonatomic) long long supplementaryCellSection; // @synthesize supplementaryCellSection=_supplementaryCellSection;
// - (void).cxx_destruct;
- (double)_computeShowcaseFactorForContentOffset:(CGPoint)arg1;
- (void)_prepareSectionMetrics;
- (id)_oldLayoutAttributesForItemAtIndexPath:(id)arg1;
- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1;
- (id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1;
- (void)finalizeCollectionViewUpdates;
- (void)prepareForCollectionViewUpdates:(id)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForElementsInRect:(CGRect)arg1;
- (CGSize)collectionViewContentSize;
- (void)invalidateLayoutWithContext:(id)arg1;
- (id)invalidationContextForBoundsChange:(CGRect)arg1;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1;
- (void)prepareLayout;
- (id)init;

@end

