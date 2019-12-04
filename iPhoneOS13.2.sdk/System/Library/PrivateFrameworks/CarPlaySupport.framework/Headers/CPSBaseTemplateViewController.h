//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <CarPlaySupport/CPBaseTemplateProviding-Protocol.h>
#import <CarPlaySupport/CPSBaseTemplateViewController-Protocol.h>
#import <CarPlaySupport/CPSButtonDelegate-Protocol.h>


@class CPTemplate, NAFuture, NSString, UITapGestureRecognizer;
@protocol CPSTemplateViewControllerDelegate, CPTemplateDelegate;

@interface CPSBaseTemplateViewController : UIViewController <CPSButtonDelegate, UIGestureRecognizerDelegate, CPBaseTemplateProviding, CPSBaseTemplateViewController>
{
    _Bool _isPopping;
    _Bool _didDisappear;
    NAFuture *_templateProviderFuture;
    CPTemplate *_associatedTemplate;
    id <CPTemplateDelegate> _templateDelegate;
    id <CPSTemplateViewControllerDelegate> _viewControllerDelegate;
    UITapGestureRecognizer *_backGestureRecognizer;
}

@property(retain, nonatomic) UITapGestureRecognizer *backGestureRecognizer; // @synthesize backGestureRecognizer=_backGestureRecognizer;
@property(nonatomic) _Bool didDisappear; // @synthesize didDisappear=_didDisappear;
@property(nonatomic) _Bool isPopping; // @synthesize isPopping=_isPopping;
@property(nonatomic) __weak id <CPSTemplateViewControllerDelegate> viewControllerDelegate; // @synthesize viewControllerDelegate=_viewControllerDelegate;
@property(retain, nonatomic) id <CPTemplateDelegate> templateDelegate; // @synthesize templateDelegate=_templateDelegate;
@property(retain, nonatomic) CPTemplate *associatedTemplate; // @synthesize associatedTemplate=_associatedTemplate;
@property(readonly, nonatomic) NAFuture *templateProviderFuture; // @synthesize templateProviderFuture=_templateProviderFuture;
- (void)setBarButton:(id)arg1 title:(id)arg2;
- (void)setBarButton:(id)arg1 image:(id)arg2;
- (void)setControl:(id)arg1 enabled:(_Bool)arg2;
- (void)setTrailingNavigationBarButtons:(id)arg1;
- (void)setLeadingNavigationBarButtons:(id)arg1;
- (void)_updateTrailingBarButtons;
- (void)_updateLeadingBarButtons;
- (void)setHostBackButton:(id)arg1;
- (void)_backGestureFired:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceivePress:(id)arg2;
- (id)_barButtonItemForIdentifier:(id)arg1;
- (void)didSelectButton:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)_addGestureRecognizerIfNecessary;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)_cleanup;
- (void)_viewDidLoad;
- (void)viewDidLoad;
- (void)_cps_viewControllerWasPopped;
- (void)_dismissTemplateViewController;
- (id)initWithTemplate:(id)arg1 templateDelegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

