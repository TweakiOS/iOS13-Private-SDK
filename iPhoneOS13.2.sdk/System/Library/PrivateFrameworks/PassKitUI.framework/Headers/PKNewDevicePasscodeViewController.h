//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <PassKitUI/PKPaymentSetupPresentationProtocol-Protocol.h>

@class NSString, PKPasscodeUpgradeFlowController;
@protocol PKNewDevicePasscodeViewControllerDelegate;

@interface PKNewDevicePasscodeViewController : UIViewController <PKPaymentSetupPresentationProtocol>
{
    PKPasscodeUpgradeFlowController *_flowController;
    long long _minimumPasscodeLength;
    unsigned long long _passcodeInputScreenType;
    unsigned long long _passcodeInputState;
    long long _context;
    NSString *_currentPasscode;
    NSString *_newPasscode;
    NSString *_constraintFailedInstructions;
    _Bool _viewHasAppeared;
    id <PKNewDevicePasscodeViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <PKNewDevicePasscodeViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)onPresentationRemoveViewControllersAfterMarker;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithPasscodeUpgradeFlowController:(id)arg1 minimumPasscodeLength:(long long)arg2 withCurrentPasscode:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
