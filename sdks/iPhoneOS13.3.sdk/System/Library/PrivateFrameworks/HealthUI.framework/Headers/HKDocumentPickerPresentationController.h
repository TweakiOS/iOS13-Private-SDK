//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthUI/HKHealthPrivacyHostDocumentPickerViewControllerDelegate-Protocol.h>
#import <HealthUI/_HKDocumentPickerPresentationController-Protocol.h>

@class HKHealthPrivacyHostDocumentPickerViewController, UIWindow, _UIAsyncInvocation;

@interface HKDocumentPickerPresentationController : NSObject <HKHealthPrivacyHostDocumentPickerViewControllerDelegate, _HKDocumentPickerPresentationController>
{
    BOOL _didPresent;
    _UIAsyncInvocation *_requestCancellationInvocation;
    HKHealthPrivacyHostDocumentPickerViewController *_hostViewController;
    UIWindow *_savedKeyWindow;
    UIWindow *_window;
}

@property(nonatomic) BOOL didPresent; // @synthesize didPresent=_didPresent;
@property(retain, nonatomic) UIWindow *window; // @synthesize window=_window;
@property(retain, nonatomic) UIWindow *savedKeyWindow; // @synthesize savedKeyWindow=_savedKeyWindow;
@property(retain, nonatomic) HKHealthPrivacyHostDocumentPickerViewController *hostViewController; // @synthesize hostViewController=_hostViewController;
@property(retain, nonatomic) _UIAsyncInvocation *requestCancellationInvocation; // @synthesize requestCancellationInvocation=_requestCancellationInvocation;
// - (void).cxx_destruct;
- (void)healthPrivacyHostDocumentPickerViewController:(id)arg1 didFinishWithError:(id)arg2;
- (void)_didFinishDismissing;
- (void)_dismissViewControllerAnimated:(BOOL)arg1;
- (void)_presentRemoteViewController:(id)arg1;
- (void)_presentWithPromptSession:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)_requestAndConfigureHostViewController:(id /* CDUnknownBlockType */)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)cancelPresentation;
- (void)presentWithSession:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)dealloc;

@end

