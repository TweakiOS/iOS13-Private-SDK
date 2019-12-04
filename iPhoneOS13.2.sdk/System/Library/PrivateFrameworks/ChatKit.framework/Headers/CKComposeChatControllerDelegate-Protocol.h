//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ChatKit/CKChatControllerDelegate-Protocol.h>


@class CKComposeChatController, CKComposition, CKConversation;

@protocol CKComposeChatControllerDelegate <NSObject, CKChatControllerDelegate>
- (_Bool)composeChatControllerShouldShowBackButtonViewDuringSendAnimation:(CKComposeChatController *)arg1;
- (void)composeChatController:(CKComposeChatController *)arg1 didSelectNewConversation:(CKConversation *)arg2;
- (void)composeChatControllerDidCancelComposition:(CKComposeChatController *)arg1;
- (_Bool)composeChatControllerCanEditRecipients;

@optional
- (void)composeChatController:(CKComposeChatController *)arg1 didLoadEntryViewContentWithCompletion:(void (^)(NSValue *))arg2;
- (void)composeChatController:(CKComposeChatController *)arg1 shouldSendComposition:(CKComposition *)arg2 inConversation:(CKConversation *)arg3 completion:(void (^)(_Bool))arg4;
@end
