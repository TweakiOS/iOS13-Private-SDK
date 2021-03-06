//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UINavigationController.h>

#import <ChatKit/CKComposeChatControllerDelegate-Protocol.h>
#import <ChatKit/CKSMSComposeViewServiceProtocol-Protocol.h>

@class CKModalTranscriptController, NSArray, NSString;
@protocol CKSMSComposeViewServiceControllerDelegate;

@interface CKSMSComposeViewServiceController : UINavigationController <CKComposeChatControllerDelegate, CKSMSComposeViewServiceProtocol>
{
    BOOL _canEditRecipients;
    BOOL _supportsAttachments;
    BOOL _supportsMessageInspection;
    BOOL _forceMMS;
    BOOL _disableCameraAttachments;
    NSArray *_utiTypes;
    NSArray *_contentURLs;
    NSArray *_photoIDs;
    NSArray *_cloudPhotoIDs;
    NSArray *_contentText;
    NSString *_shareSheetSessionID;
    CKModalTranscriptController *_modalTranscriptController;
    id <CKSMSComposeViewServiceControllerDelegate> _composeDelegate;
    id /* CDUnknownBlockType */ _gameCenterPickerBlock;
    id /* CDUnknownBlockType */ _entryViewCompletion;
}

+ (id)_remoteViewControllerInterface;
+ (id)_exportedInterface;
+ (BOOL)_isSecureForRemoteViewService;
@property(copy, nonatomic) id /* CDUnknownBlockType */ entryViewCompletion; // @synthesize entryViewCompletion=_entryViewCompletion;
@property(copy, nonatomic) id /* CDUnknownBlockType */ gameCenterPickerBlock; // @synthesize gameCenterPickerBlock=_gameCenterPickerBlock;
@property(nonatomic) __weak id <CKSMSComposeViewServiceControllerDelegate> composeDelegate; // @synthesize composeDelegate=_composeDelegate;
@property(retain, nonatomic) CKModalTranscriptController *modalTranscriptController; // @synthesize modalTranscriptController=_modalTranscriptController;
// - (void).cxx_destruct;
- (void)donateInteractionWithConversation:(id)arg1;
- (void)_willAppearInRemoteViewController;
- (BOOL)supportsMessageInspection;
- (BOOL)supportsAttachments;
- (BOOL)composeChatControllerShouldShowBackButtonViewDuringSendAnimation:(id)arg1;
- (void)composeChatController:(id)arg1 didSelectNewConversation:(id)arg2;
- (void)composeChatControllerDidCancelComposition:(id)arg1;
- (BOOL)composeChatControllerCanEditRecipients;
- (void)prewarmCameraIfNecessaryForChatController:(id)arg1;
- (void)chatController:(id)arg1 forwardComposition:(id)arg2;
- (void)chatController:(id)arg1 didReportSpamForConversation:(id)arg2;
- (void)chatController:(id)arg1 didSendCompositionInConversation:(id)arg2;
- (void)chatController:(id)arg1 willSendComposition:(id)arg2 inConversation:(id)arg3;
- (void)composeChatController:(id)arg1 shouldSendComposition:(id)arg2 inConversation:(id)arg3 completion:(id /* CDUnknownBlockType */)arg4;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)setTextEntryContentsVisible:(BOOL)arg1;
- (void)disableCameraAttachments;
@property(nonatomic) BOOL canEditRecipients; // @dynamic canEditRecipients;
- (void)setPendingAddresses:(id)arg1;
- (void)setShareSheetSessionID:(id)arg1;
- (id)recipientsFromChatGUID:(id)arg1 groupName:(id)arg2 handles:(id)arg3;
- (void)setText:(id)arg1 subject:(id)arg2 addresses:(id)arg3 chatGUID:(id)arg4 groupName:(id)arg5;
- (void)setText:(id)arg1 subject:(id)arg2 addresses:(id)arg3;
- (void)setGameCenterPickedHandles:(id)arg1 playerNames:(id)arg2;
- (void)setGameCenterModeWithPickerBlock:(id /* CDUnknownBlockType */)arg1;
- (void)forceMMS;
- (void)_forceMMSIfNecessary;
- (void)setContentText:(id)arg1;
- (void)setCloudPhotoIDs:(id)arg1;
- (void)setPhotoIDs:(id)arg1;
- (void)setContentURLs:(id)arg1;
- (void)setUTIs:(id)arg1;
- (void)setUICustomizationData:(id)arg1;
- (void)forceCancelComposition;
- (void)insertRemoteItemForSending:(id)arg1;
- (void)hideEntryViewContent:(BOOL)arg1;
- (void)composeChatController:(id)arg1 didLoadEntryViewContentWithCompletion:(id /* CDUnknownBlockType */)arg2;
- (void)insertRemoteItemForSendingAndCalculateEntryViewFrame:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)insertAttachmentWithURL:(id)arg1 andDescription:(id)arg2;
- (void)_insertAttachmentWithURL:(id)arg1 andDescription:(id)arg2 preview:(id)arg3 isFullyRealized:(BOOL)arg4 appendedVideoURL:(id)arg5 appendedBundleURL:(id)arg6 completion:(id /* CDUnknownBlockType */)arg7;
- (void)insertFileURL:(id)arg1 filename:(id)arg2 transcoderUserInfo:(id)arg3;
- (BOOL)_hostSandboxAllowsFileReadAtFileURL:(id)arg1;
- (void)showInsertedItemInEntryView;
- (void)_insertFileURL:(id)arg1 filename:(id)arg2 transcoderUserInfo:(id)arg3 preview:(id)arg4 isFullyRealized:(BOOL)arg5 appendedVideoURL:(id)arg6 completion:(id /* CDUnknownBlockType */)arg7;
- (void)insertData:(id)arg1 MIMEType:(id)arg2 exportedFilename:(id)arg3;
- (void)insertFilename:(id)arg1 MIMEType:(id)arg2 exportedFilename:(id)arg3 options:(id)arg4;
- (void)dealloc;
- (BOOL)_canShowWhileLocked;
- (id)init;

@end

