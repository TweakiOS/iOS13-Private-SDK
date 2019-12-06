//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "UIViewController.h"

@class NSExtension, _UIWaitingForRemoteViewContainerViewController;
@protocol NSCopying;

@interface _UIResilientRemoteViewContainerViewController : UIViewController
{
    UIViewController *_remoteViewController;
    BOOL _delayingDisplayOfRemoteView;
    NSExtension *_extension;
    id <NSCopying> _extensionRequestIdentifier;
    UIViewController *_containedViewController;
    _UIWaitingForRemoteViewContainerViewController *_waitingController;
    UIViewController *_errorViewController;
}

+ (id)instantiateWithExtension:(id)arg1 completion:(CDUnknownBlockType)arg2;
@property(nonatomic) BOOL delayingDisplayOfRemoteView; // @synthesize delayingDisplayOfRemoteView=_delayingDisplayOfRemoteView;
@property(retain, nonatomic) UIViewController *errorViewController; // @synthesize errorViewController=_errorViewController;
@property(retain, nonatomic) _UIWaitingForRemoteViewContainerViewController *waitingController; // @synthesize waitingController=_waitingController;
@property(retain, nonatomic) UIViewController *containedViewController; // @synthesize containedViewController=_containedViewController;
@property(copy, nonatomic) id <NSCopying> extensionRequestIdentifier; // @synthesize extensionRequestIdentifier=_extensionRequestIdentifier;
@property(retain, nonatomic) NSExtension *extension; // @synthesize extension=_extension;
@property(readonly, nonatomic) id remoteViewController; // @synthesize remoteViewController=_remoteViewController;
// - (void).cxx_destruct;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (void)_displayError:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)invalidate;
- (void)dealloc;
- (void)viewWillLayoutSubviews;
- (void)endDelayingDisplayOfRemoteController;
- (void)delayDisplayOfRemoteController;
- (void)_displayRemoteViewController;
- (id)initWithExtension:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (CGRect)_defaultInitialViewFrame;

@end
