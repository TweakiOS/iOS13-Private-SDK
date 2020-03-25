//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <PhotosUICore/PXChangeObserver-Protocol.h>

@class PXOnboardingStatusUIView, PXOnboardingWelcomeUIView, PXPhotoAnalysisStatusController;
@protocol PXMemoriesOnboardingViewControllerDelegate;

@interface PXMemoriesOnboardingUIViewController : UIViewController <PXChangeObserver>
{
    struct {
        BOOL views;
        BOOL stage;
        BOOL progress;
    } _needsUpdateFlags;
    id <PXMemoriesOnboardingViewControllerDelegate> _delegate;
    PXPhotoAnalysisStatusController *__statusController;
    NSUInteger __stage;
    PXOnboardingWelcomeUIView *__welcomeView;
    PXOnboardingStatusUIView *__statusView;
}

@property(nonatomic, setter=_setStatusView:) PXOnboardingStatusUIView *_statusView; // @synthesize _statusView=__statusView;
@property(nonatomic, setter=_setWelcomeView:) PXOnboardingWelcomeUIView *_welcomeView; // @synthesize _welcomeView=__welcomeView;
@property(nonatomic, setter=_setStage:) NSUInteger _stage; // @synthesize _stage=__stage;
@property(readonly, nonatomic) PXPhotoAnalysisStatusController *_statusController; // @synthesize _statusController=__statusController;
@property(nonatomic) __weak id <PXMemoriesOnboardingViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)observable:(id)arg1 didChange:(NSUInteger)arg2 context:(void )arg3;
- (void)_updateProgressIfNeeded;
- (void)_invalidateProgress;
- (void)_updateStageIfNeeded;
- (void)_invalidateStage;
- (BOOL)_needsUpdate;
- (void)_setNeedsUpdate;
- (void)_updateIfNeeded;
- (void)startButtonTapped:(id)arg1;
- (void)_updateViews;
- (void)_tearDownViews;
- (void)contentSizeCategoryDidChange:(id)arg1;
- (void)viewWillLayoutSubviews;
- (id)_constraintsForMaximizingView:(id)arg1;
- (void)viewDidLoad;

@end
