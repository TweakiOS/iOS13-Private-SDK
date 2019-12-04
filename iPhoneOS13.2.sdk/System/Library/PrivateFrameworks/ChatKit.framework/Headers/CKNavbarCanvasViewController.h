//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <ChatKit/CKDetailsContactsManagerDelegate-Protocol.h>
#import <ChatKit/CKNavigationBarCanvasViewDelegate-Protocol.h>


@class CKAvatarPickerViewController, CKCanvasBackButtonView, CKConversation, CKDetailsContactsManager, CKLabel, CKNavigationBarCanvasView, CNContactStore, NSString, UIButton, UINavigationController;
@protocol CKNavbarCanvasViewControllerDelegate;

@interface CKNavbarCanvasViewController : UIViewController <UIGestureRecognizerDelegate, CKDetailsContactsManagerDelegate, CKNavigationBarCanvasViewDelegate>
{
    _Bool _canShowBackButtonView;
    _Bool _shouldShowDoneButton;
    _Bool _isInEditingMode;
    _Bool _editing;
    id <CKNavbarCanvasViewControllerDelegate> _delegate;
    UIButton *_callButton;
    CKNavigationBarCanvasView *_canvasView;
    NSString *_navbarTitle;
    CKConversation *_conversation;
    CKAvatarPickerViewController *_avatarPickerViewController;
    CKLabel *_defaultLabel;
    CKCanvasBackButtonView *_backButtonView;
    UIButton *_detailsButton;
    UIButton *_clearAllButtonView;
    UIButton *_editCancelButtonView;
    UIButton *_doneButton;
    UINavigationController *_proxyNavigationController;
    long long _indicatorType;
    CNContactStore *_suggestionsEnabledContactStore;
    CKDetailsContactsManager *_contactsManager;
}

@property(retain, nonatomic) CKDetailsContactsManager *contactsManager; // @synthesize contactsManager=_contactsManager;
@property(retain, nonatomic) CNContactStore *suggestionsEnabledContactStore; // @synthesize suggestionsEnabledContactStore=_suggestionsEnabledContactStore;
@property(nonatomic) long long indicatorType; // @synthesize indicatorType=_indicatorType;
@property(nonatomic) _Bool editing; // @synthesize editing=_editing;
@property(nonatomic) __weak UINavigationController *proxyNavigationController; // @synthesize proxyNavigationController=_proxyNavigationController;
@property(retain, nonatomic) UIButton *doneButton; // @synthesize doneButton=_doneButton;
@property(retain, nonatomic) UIButton *editCancelButtonView; // @synthesize editCancelButtonView=_editCancelButtonView;
@property(retain, nonatomic) UIButton *clearAllButtonView; // @synthesize clearAllButtonView=_clearAllButtonView;
@property(retain, nonatomic) UIButton *detailsButton; // @synthesize detailsButton=_detailsButton;
@property(retain, nonatomic) CKCanvasBackButtonView *backButtonView; // @synthesize backButtonView=_backButtonView;
@property(retain, nonatomic) CKLabel *defaultLabel; // @synthesize defaultLabel=_defaultLabel;
@property(retain, nonatomic) CKAvatarPickerViewController *avatarPickerViewController; // @synthesize avatarPickerViewController=_avatarPickerViewController;
@property(retain, nonatomic) CKConversation *conversation; // @synthesize conversation=_conversation;
@property(retain, nonatomic) NSString *navbarTitle; // @synthesize navbarTitle=_navbarTitle;
@property(nonatomic) _Bool isInEditingMode; // @synthesize isInEditingMode=_isInEditingMode;
@property(nonatomic) _Bool shouldShowDoneButton; // @synthesize shouldShowDoneButton=_shouldShowDoneButton;
@property(nonatomic) _Bool canShowBackButtonView; // @synthesize canShowBackButtonView=_canShowBackButtonView;
@property(retain, nonatomic) CKNavigationBarCanvasView *canvasView; // @synthesize canvasView=_canvasView;
@property(retain, nonatomic) UIButton *callButton; // @synthesize callButton=_callButton;
@property(nonatomic) __weak id <CKNavbarCanvasViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (struct NSDirectionalEdgeInsets)systemMinimumLayoutMarginsForView:(id)arg1;
- (void)contactsManager:(id)arg1 didRequestCallTypeForEntity:(id)arg2 addresses:(id)arg3 abLabels:(id)arg4 faceTimeAudioEnabled:(_Bool)arg5;
- (void)contactsManagerViewModelsDidChange:(id)arg1;
- (void)_buttonPressed:(id)arg1;
- (void)_contactPhotosEnabledChangedNotification:(id)arg1;
- (void)setUnreadCountTitleColor;
- (void)_chatUnreadCountDidChange:(id)arg1;
- (void)_updateUnreadCountForBackbuttonView:(long long)arg1;
- (long long)_unreadCount;
- (void)_showContactCardForEntity:(id)arg1;
- (void)_handleTranscriptScroll:(id)arg1;
- (void)dismissModal;
- (void)showMapkitBusinessData;
- (void)_configureForDefaultMode;
- (void)_configureForEditMode;
- (id)_titleItemViewForTraitCollection:(id)arg1;
- (id)_secondaryRightItemViewForTraitCollection:(id)arg1;
- (id)_rightItemViewForTraitCollection:(id)arg1;
- (id)_leftItemViewForTraitCollection:(id)arg1;
- (void)updateContentsForConversation:(id)arg1;
- (void)_initializeForTraitCollection:(id)arg1;
- (void)updateTitle:(id)arg1 animated:(_Bool)arg2;
- (void)configureForEditing:(_Bool)arg1;
- (_Bool)isFaceTimeVideoSupported;
- (_Bool)isMultiwayFaceTimeAudioSupported;
- (void)_notifyDelegateThatViewControllerWantsResize;
- (void)_handleAddressBookChange:(id)arg1;
- (void)_updateMultiwayButtonStateWithConversation:(id)arg1;
- (void)multiwayStateChanged:(id)arg1;
- (void)accessibilitySizeCategoryDidChange:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)handleCloseNavBarAnimationCompleteNotification:(id)arg1;
- (_Bool)_isFaceTimeSupportedForIndividualCalls;
- (void)_userDidTapNavigationBar:(id)arg1;
- (_Bool)_isMuliwayAvaialble;
- (void)toggleExpansionState;
- (void)collapse;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)loadView;
- (id)navigationItem;
- (_Bool)_canShowAvatarView;
- (double)_preferredHeightForTraitCollection:(id)arg1;
- (id)_windowTraitCollection;
- (void)startAudioCommunicationUsingPreferredRouteIfAvailable:(_Bool)arg1;
- (id)navBarTitleFromConversation:(id)arg1;
- (void)dealloc;
- (id)initWithConversation:(id)arg1 navigationController:(id)arg2;
- (id)initWithConversation:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

