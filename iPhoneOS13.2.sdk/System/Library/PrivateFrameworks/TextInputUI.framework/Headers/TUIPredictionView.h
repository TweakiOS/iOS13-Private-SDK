//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UIView.h>



@class NSArray, NSLocale, NSString, TIAutocorrectionList, TUIPredictionViewStackView, UIKBRenderConfig, UIKBVisualEffectView, UILongPressGestureRecognizer;
@protocol TUIPredictionViewDelegate;

@interface TUIPredictionView : UIView <UIGestureRecognizerDelegate>
{
    _Bool _drawsBackdropView;
    id <TUIPredictionViewDelegate> _delegate;
    long long _selectedIndex;
    TIAutocorrectionList *_autocorrectionList;
    UIKBVisualEffectView *_backdropView;
    unsigned long long _minimumNumberOfCells;
    unsigned long long _maximumEmojiCells;
    NSLocale *_currentLocale;
    UIKBRenderConfig *_renderConfig;
    TUIPredictionViewStackView *_cellStackView;
    UILongPressGestureRecognizer *_tapGestureRecognizer;
}

@property(retain, nonatomic) UILongPressGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
@property(retain, nonatomic) TUIPredictionViewStackView *cellStackView; // @synthesize cellStackView=_cellStackView;
@property(retain, nonatomic) UIKBRenderConfig *renderConfig; // @synthesize renderConfig=_renderConfig;
@property(retain, nonatomic) NSLocale *currentLocale; // @synthesize currentLocale=_currentLocale;
@property(nonatomic) unsigned long long maximumEmojiCells; // @synthesize maximumEmojiCells=_maximumEmojiCells;
@property(nonatomic) unsigned long long minimumNumberOfCells; // @synthesize minimumNumberOfCells=_minimumNumberOfCells;
@property(retain, nonatomic) UIKBVisualEffectView *backdropView; // @synthesize backdropView=_backdropView;
@property(nonatomic) _Bool drawsBackdropView; // @synthesize drawsBackdropView=_drawsBackdropView;
@property(retain, nonatomic) TIAutocorrectionList *autocorrectionList; // @synthesize autocorrectionList=_autocorrectionList;
@property(nonatomic) long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(nonatomic) id <TUIPredictionViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_updateHighlightedCellForTouch:(id)arg1;
- (unsigned long long)_predictionCellIndexAtLocation:(struct CGPoint)arg1;
- (void)_didRecognizeTapGesture:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)cancelTapGestureRecognizer;
- (void)_setRenderConfig:(id)arg1;
- (void)setAutocorrectionList:(id)arg1 animated:(_Bool)arg2;
@property(readonly, nonatomic) NSArray *displayedCandidates;
- (id)allVisibleCells;
- (id)visibleCells;
- (_Bool)_ensureVisibleCellCount:(unsigned long long)arg1 forCellStackView:(id)arg2;
- (void)_updateVisibleCellAppearance;
- (void)configurePredictionCell:(id)arg1 forCandidate:(id)arg2 animated:(_Bool)arg3;
- (void)_reloadCellsAnimated:(_Bool)arg1;
- (id)_candidatesToDisplayForAutocorrectionList:(id)arg1;
- (_Bool)_shouldPadWithEmptyCellsForAutocorrectionList:(id)arg1;
- (struct CGSize)intrinsicContentSize;
- (double)maximumBackgroundWidth;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

