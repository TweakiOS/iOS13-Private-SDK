//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITabBarController.h>

#import <StoreKitUI/SKUIMoreNavigationControllerDelegate-Protocol.h>

@class SKUIFloatingOverlayView, UIViewController;

@interface SKUITabBarController : UITabBarController <SKUIMoreNavigationControllerDelegate>
{
    SKUIFloatingOverlayView *_floatingOverlayView;
    UIViewController *_floatingOverlayViewController;
    BOOL _sizeTransitionInProgress;
    long long _forcedUserInterfaceStyle;
}

+ (Class)_moreNavigationControllerClass;
@property(nonatomic) BOOL sizeTransitionInProgress; // @synthesize sizeTransitionInProgress=_sizeTransitionInProgress;
- (void)setForcedUserInterfaceStyle:(long long)arg1;
- (long long)forcedUserInterfaceStyle;
- (id)floatingOverlayViewController;
// - (void).cxx_destruct;
- (void)_layoutFloatingOverlayView;
- (void)moreNavigationController:(id)arg1 didSelectItemAtIndex:(long long)arg2;
- (id)traitCollection;
- (void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)setTransientViewController:(id)arg1 animated:(BOOL)arg2;
- (void)_setSelectedViewController:(id)arg1;
- (id)moreNavigationController;
- (void)cancelTransientViewController:(id)arg1;
- (void)setFloatingOverlayViewController:(id)arg1 animated:(BOOL)arg2;
@property(readonly, nonatomic) BOOL containsTransientViewControllerOnly;
- (long long)preferredUserInterfaceStyle;
- (id)init;

@end

