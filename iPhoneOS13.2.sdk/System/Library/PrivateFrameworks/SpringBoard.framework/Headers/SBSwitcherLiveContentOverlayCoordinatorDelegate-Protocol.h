//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class SBAppLayout, UIViewController;
@protocol SBSwitcherLiveContentOverlay;

@protocol SBSwitcherLiveContentOverlayCoordinatorDelegate 
- (UIViewController *)parentViewControllerForContentOverlay;
- (void)removeLiveContentOverlayForAppLayout:(SBAppLayout *)arg1 animated:(_Bool)arg2;
- (void)addLiveContentOverlay:(id <SBSwitcherLiveContentOverlay>)arg1 forAppLayout:(SBAppLayout *)arg2 animated:(_Bool)arg3;
@end
