//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "UIView.h"

@class UIPageControl, UIPageViewController, _UIQueuingScrollView;

__attribute__((visibility("hidden")))
@interface _UIPageViewControllerContentView : UIView
{
    UIPageViewController *_pageViewController;
    _UIQueuingScrollView *_scrollView;
    UIPageControl *_pageControl;
}

@property(readonly, nonatomic) UIPageControl *pageControl; // @synthesize pageControl=_pageControl;
@property(readonly, nonatomic) _UIQueuingScrollView *scrollView; // @synthesize scrollView=_scrollView;
// - (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_setupPageControl:(id)arg1;
- (CGRect)_scrollViewFrame;
- (double)_pageSpacing;
- (void)setFrame:(CGRect)arg1;
- (void)setBounds:(CGRect)arg1;
- (void)invalidatePageViewController;
- (id)initWithFrame:(CGRect)arg1 andPageViewController:(id)arg2;
- (id)preferredFocusedView;
- (BOOL)canBecomeFocused;

@end

