//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <MediaControls/CCUIContentModuleContentViewController-Protocol.h>
#import <MediaControls/CCUIGroupRendering-Protocol.h>
#import <MediaControls/MPVolumeDisplaying-Protocol.h>
#import <MediaControls/MediaControlsVolumeControllerObserver-Protocol.h>

@class MediaControlsVolumeController, MediaControlsVolumeSliderView, NSArray, NSString, UIWindowScene;
@protocol MediaControlsVolumeViewControllerDelegate;

@interface MediaControlsVolumeViewController : UIViewController <MediaControlsVolumeControllerObserver, MPVolumeDisplaying, CCUIGroupRendering, UIGestureRecognizerDelegate, CCUIContentModuleContentViewController>
{
    MediaControlsVolumeSliderView *_primarySlider;
    MediaControlsVolumeSliderView *_secondarySlider;
    NSString *_packageName;
    BOOL _isExpanded;
    id <MediaControlsVolumeViewControllerDelegate> _delegate;
    MediaControlsVolumeController *_volumeController;
}

@property(retain, nonatomic) MediaControlsVolumeController *volumeController; // @synthesize volumeController=_volumeController;
@property(nonatomic) __weak id <MediaControlsVolumeViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)_dismissMediaControlsVolumeViewController;
- (void)_performWithoutAnimationWhileHidden:(id /* CDUnknownBlockType */)arg1;
- (void)_updateVisibility;
- (void)_updateGlyphPackageDescription;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)_secondarySliderValueDidChange:(id)arg1;
- (void)_primarySliderValueDidChange:(id)arg1;
- (void)mediaControlsVolumeController:(id)arg1 didChangeVolumeAvailable:(BOOL)arg2 effectiveVolume:(float)arg3 forRoute:(NSUInteger)arg4;
- (void)mediaControlsVolumeController:(id)arg1 didChangeUserInteractionEnabled:(BOOL)arg2 forRoute:(NSUInteger)arg3;
- (void)mediaControlsVolumeController:(id)arg1 didUpdateSplitRoute:(BOOL)arg2;
@property(readonly, nonatomic) NSString *volumeAudioCategory;
@property(readonly, nonatomic, getter=isOnScreen) BOOL onScreen;
@property(readonly, nonatomic) UIWindowScene *windowSceneForVolumeDisplay;
@property(readonly, nonatomic) NSArray *punchOutRootLayers;
@property(readonly, nonatomic, getter=isGroupRenderingRequired) BOOL groupRenderingRequired;
- (void)willTransitionToExpandedContentMode:(BOOL)arg1;
@property(readonly, nonatomic) double preferredExpandedContentWidth;
@property(readonly, nonatomic) double preferredExpandedContentHeight;
@property(readonly, nonatomic) BOOL providesOwnPlatter;
- (void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)dealloc;
- (CGRect)secondaryFrame;
- (CGRect)primaryFrame;
- (BOOL)_canShowWhileLocked;
- (void)viewDidLayoutSubviews;
- (void)viewWillLayoutSubviews;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;

@end

