//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ActionKit/WFSendEmailAction.h>

#import <ActionKitUI/MFMailComposeViewControllerDelegate-Protocol.h>

@class NSString;

@interface WFSendEmailAction (UIKit) <MFMailComposeViewControllerDelegate>
- (void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3;
- (void)sendTextViaMailtoURL:(id)arg1 withUserInterface:(id)arg2;
- (void)runWithUIKitWidgetUserInterface:(id)arg1 input:(id)arg2;
- (void)generateBodyFromCollection:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)generateEmailHeaderFromParameters:(id /* block */)arg1;
- (void)runWithUIKitUserInterface:(id)arg1 input:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;
@end
