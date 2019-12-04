//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoverSheet/CSPresentationViewController.h>

#import <CoverSheet/CSModalHomeGestureParticipating-Protocol.h>


@class NSString, UIScreenEdgePanGestureRecognizer;
@protocol CSDismissableModalViewControllerDelegate, CSModalHomeAffordanceControlling;

@interface CSDismissableModalViewController : CSPresentationViewController <CSModalHomeGestureParticipating, UIGestureRecognizerDelegate>
{
    UIScreenEdgePanGestureRecognizer *_bottomEdgeRecognizer;
    id <CSDismissableModalViewControllerDelegate> _delegate;
    id <CSModalHomeAffordanceControlling> _homeAffordanceController;
}

@property(retain, nonatomic) id <CSModalHomeAffordanceControlling> homeAffordanceController; // @synthesize homeAffordanceController=_homeAffordanceController;
@property(nonatomic) __weak id <CSDismissableModalViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)aggregateBehavior:(id)arg1;
- (_Bool)wouldHandleButtonEvent:(id)arg1;
- (_Bool)handleEvent:(id)arg1;
- (void)addGrabberView:(id)arg1;
- (void)homeGestureParticipantOwningHomeGestureDidChange:(_Bool)arg1;
- (void)_handleBottomEdgeGestureEnded:(id)arg1;
- (void)_handleBottomEdgeGestureChanged:(id)arg1;
- (void)_handleBottomEdgeGestureBegan:(id)arg1;
- (void)_handleBottomEdgeGestureRecognizer:(id)arg1;
- (void)_addOrRemoveGestureForCurrentSettings;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

