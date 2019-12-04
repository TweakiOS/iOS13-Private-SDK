//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PassKitUI/PKExplanationViewController.h>

#import <PassKitUI/PKExplanationViewDelegate-Protocol.h>
#import <PassKitUI/PKNFCTagReaderSessionDelegate-Protocol.h>

@class NSString, PKAccount, PKAccountService, PKBusinessChatController, PKNFCTagReaderSession, PKPaymentPass, PKPaymentSessionHandle, PKPhysicalCard, PKPhysicalCardActivationAnimationView;

@interface PKPhysicalCardReaderModeActivationViewController : PKExplanationViewController <PKExplanationViewDelegate, PKNFCTagReaderSessionDelegate>
{
    PKAccountService *_accountService;
    PKAccount *_account;
    PKPhysicalCard *_physicalCard;
    PKPaymentPass *_paymentPass;
    unsigned long long _feature;
    PKPhysicalCardActivationAnimationView *_animationView;
    _Bool _invalidated;
    _Bool _deviceSupportsReaderMode;
    PKPaymentSessionHandle *_sessionHandle;
    PKNFCTagReaderSession *_readerSession;
    PKBusinessChatController *_businessChatController;
}

- (void)_invalidate;
- (void)_presentActivationWithActivationCode:(id)arg1;
- (void)_stopTagReaderSession;
- (void)_startTagReaderSession;
- (void)_dismiss;
- (void)explanationViewDidSelectSetupLater:(id)arg1;
- (void)nfcTagReaderSessionDidEndUnexpectedly:(id)arg1;
- (void)nfcTagReaderSession:(id)arg1 didDetectTags:(id)arg2;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithAccountService:(id)arg1 account:(id)arg2 paymentPass:(id)arg3 physicalCard:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
