//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <SpringBoardUIServices/_SBUIPopoverExtensionRemoteInterface-Protocol.h>

@protocol SBUIPopoverExtension, _SBUIPopoverExtensionHostInterface;

@interface SBUIPopoverExtensionRemoteViewController : UIViewController <_SBUIPopoverExtensionRemoteInterface>
{
    id <_SBUIPopoverExtensionHostInterface> _hostService;
    UIViewController<SBUIPopoverExtension> *_extensionViewController;
}

+ (BOOL)_isSecureForRemoteViewService;
+ (id)_exportedInterface;
+ (id)_remoteViewControllerInterface;
@property(retain, nonatomic) UIViewController<SBUIPopoverExtension> *extensionViewController; // @synthesize extensionViewController=_extensionViewController;
@property(retain, nonatomic) id <_SBUIPopoverExtensionHostInterface> hostService; // @synthesize hostService=_hostService;
// - (void).cxx_destruct;
- (void)_setupChildViewController:(id)arg1;
- (id)popoverExtensionContext;
- (void)beginRequestWithExtensionContext:(id)arg1;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (void)addChildViewController:(id)arg1;
- (void)_willAppearInRemoteViewController:(id)arg1;
- (void)_updateForBundleIdentifier:(id)arg1;

@end

