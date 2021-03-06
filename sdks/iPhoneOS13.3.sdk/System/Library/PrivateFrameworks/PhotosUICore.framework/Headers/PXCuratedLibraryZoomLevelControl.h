//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <PhotosUICore/PXChangeObserver-Protocol.h>

@class NSArray, PXCuratedLibraryStyleGuide, PXCuratedLibraryViewModel, PXUpdater, UIColor, UIVisualEffectView;
@protocol PXCuratedLibraryZoomLevelControlDelegate;

@interface PXCuratedLibraryZoomLevelControl : UIView <PXChangeObserver>
{
    PXUpdater *_updater;
    UIEdgeInsets _padding;
    CGSize _segmentSizes;
    double _minimumInterSegmentSpacing;
    CGSize _intrinsicSize;
    UIVisualEffectView *_backgroundEffectView;
    UIView *_contentView;
    UIView *_selectionView;
    UIColor *_selectedButtonTextColor;
    UIColor *_unselectedButtonTextColor;
    NSArray *_selectedButtons;
    NSArray *_unselectedButtons;
    double _selectionPillMargin;
    PXCuratedLibraryViewModel *_viewModel;
    PXCuratedLibraryStyleGuide *_styleGuide;
    id <PXCuratedLibraryZoomLevelControlDelegate> _delegate;
    NSArray *_zoomLevelIdentifiers;
    long long _selectedZoomLevel;
    NSArray *_enabledZoomLevelIdentifiers;
    long long _shrinkLevel;
}

+ (id)_enabledZoomLevelIdentifiersForViewModel:(id)arg1;
+ (id)_allZoomLevelIdentifiers;
+ (id)_localizedTitleForZoomLevel:(long long)arg1 usingShortVariant:(BOOL)arg2;
@property(nonatomic) long long shrinkLevel; // @synthesize shrinkLevel=_shrinkLevel;
@property(retain, nonatomic) NSArray *enabledZoomLevelIdentifiers; // @synthesize enabledZoomLevelIdentifiers=_enabledZoomLevelIdentifiers;
@property(nonatomic) long long selectedZoomLevel; // @synthesize selectedZoomLevel=_selectedZoomLevel;
@property(readonly, nonatomic) NSArray *zoomLevelIdentifiers; // @synthesize zoomLevelIdentifiers=_zoomLevelIdentifiers;
@property(nonatomic) __weak id <PXCuratedLibraryZoomLevelControlDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) PXCuratedLibraryStyleGuide *styleGuide; // @synthesize styleGuide=_styleGuide;
@property(readonly, nonatomic) PXCuratedLibraryViewModel *viewModel; // @synthesize viewModel=_viewModel;
// - (void).cxx_destruct;
- (void)observable:(id)arg1 didChange:(NSUInteger)arg2 context:(void )arg3;
- (void)_handleContentSizeCategoryDidChange:(id)arg1;
- (void)_handleButton:(id)arg1;
- (void)_updateButtonsStyle;
- (void)_invalidateButtonsStyle;
- (void)_updateSubviews;
- (void)_invalidateSubviews;
- (void)_updateSelection;
- (long long)zoomLevelDisplayedBeforeZoomLevel:(long long)arg1;
- (void)layoutSubviews;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)dealloc;
- (id)initWithViewModel:(id)arg1 styleGuide:(id)arg2;
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end

