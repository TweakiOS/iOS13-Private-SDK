//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TSReading/TSKPopoverBasedViewController.h>

@class UIViewController;

@interface TSKComposedViewController : TSKPopoverBasedViewController
{
    UIViewController *mComposedViewController;
}

@property(readonly, nonatomic) UIViewController *composedViewController; // @synthesize composedViewController=mComposedViewController;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (id)i_contentViewController;
- (id)title;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)p_unloadChildView;
- (void)p_loadChildView;
- (void)dealloc;
- (id)initWithViewController:(id)arg1;

@end
