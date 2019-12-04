//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIResponder.h>



@class NSString, UILongPressGestureRecognizer, UIMenuController, UIPDFMagnifierController, UIPDFPageView, UIPDFSelectionController, UITapGestureRecognizer;

__attribute__((visibility("hidden")))
@interface UIPDFViewTouchHandler : UIResponder <UIGestureRecognizerDelegate>
{
    UIPDFPageView *_pdfPageView;
    UITapGestureRecognizer *_doubleTapRecognizer;
    UITapGestureRecognizer *_singleTapRecognizer;
    UILongPressGestureRecognizer *_briefPressRecognizer;
    UILongPressGestureRecognizer *_longPressRecognizer;
    UITapGestureRecognizer *_twoFingerTapRecognizer;
    UIMenuController *_menuController;
    UIPDFSelectionController *_selectionController;
    UIPDFMagnifierController *_magnifyController;
    _Bool _trackingSelection;
    _Bool _showMagnifier;
    _Bool _showLoupe;
    _Bool _firstTouch;
    _Bool _useDelegateForLinks;
    _Bool _allowMenu;
}

+ (void)releaseViewManager;
@property _Bool allowMenu; // @synthesize allowMenu=_allowMenu;
- (void)hideMenu;
- (void)showMenu;
- (void)selectAll:(id)arg1;
- (void)copy:(id)arg1;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)twoFingerTapRecognized:(id)arg1;
- (void)singleTapRecognized:(id)arg1;
- (void)doubleTapRecognized:(id)arg1;
- (void)longPressRecognized:(id)arg1;
- (void)briefPressRecognized:(id)arg1;
- (_Bool)delegateGesture:(id)arg1 kind:(int)arg2;
- (void)setFirstTouch;
- (_Bool)resignFirstResponder;
- (_Bool)canBecomeFirstResponder;
- (id)nextResponder;
- (void)disableRecognizers;
- (void)enableRecognizers;
- (void)dealloc;
- (id)initWithView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

