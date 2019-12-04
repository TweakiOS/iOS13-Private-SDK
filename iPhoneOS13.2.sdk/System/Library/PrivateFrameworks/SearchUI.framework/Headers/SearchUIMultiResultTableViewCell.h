//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SearchUI/SearchUITableViewCell.h>

@class NSArray, SearchUIAppIconsRowView, TLKAuxilliaryTextView, UIView;

@interface SearchUIMultiResultTableViewCell : SearchUITableViewCell
{
    SearchUIAppIconsRowView *_topRow;
    SearchUIAppIconsRowView *_bottomRow;
    NSArray *_results;
    long long _indexOfSelectedKeyboardIcon;
    TLKAuxilliaryTextView *_folderLabelView;
    UIView *_highlightBackgroundView;
}

+ (unsigned long long)numberOfColumnsForCurrentOrientation;
@property(retain, nonatomic) UIView *highlightBackgroundView; // @synthesize highlightBackgroundView=_highlightBackgroundView;
@property(retain, nonatomic) TLKAuxilliaryTextView *folderLabelView; // @synthesize folderLabelView=_folderLabelView;
@property(nonatomic) long long indexOfSelectedKeyboardIcon; // @synthesize indexOfSelectedKeyboardIcon=_indexOfSelectedKeyboardIcon;
@property(retain, nonatomic) NSArray *results; // @synthesize results=_results;
@property(retain, nonatomic) SearchUIAppIconsRowView *bottomRow; // @synthesize bottomRow=_bottomRow;
@property(retain, nonatomic) SearchUIAppIconsRowView *topRow; // @synthesize topRow=_topRow;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)removeKeyboardHandler;
- (_Bool)navigateKeyboardUp;
- (_Bool)navigateKeyboardDown;
- (_Bool)navigateKeyboardLeft;
- (void)returnKeyPressed;
- (_Bool)navigateKeyboardRight;
- (void)setupKeyboardHandler;
- (_Bool)canSetupKeyboardHandler;
- (void)removeHighlightedIconState;
- (unsigned long long)numberOfVisibleResults;
- (id)visibleResults;
- (void)updateExpanded:(_Bool)arg1;
- (_Bool)isExpandable;
- (void)layoutSubviews;
- (double)appRowSpacing;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)updateWithRowModel:(id)arg1;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (id)initWithRowModel:(id)arg1 feedbackDelegate:(id)arg2;

@end
