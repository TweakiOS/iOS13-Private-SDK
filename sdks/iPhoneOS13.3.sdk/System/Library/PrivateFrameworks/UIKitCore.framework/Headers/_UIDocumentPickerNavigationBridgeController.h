//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "UINavigationController.h"

#import <UIKitCore/_UIDocumentPickerExtensionViewController-Protocol.h>

__attribute__((visibility("hidden")))
@interface _UIDocumentPickerNavigationBridgeController : UINavigationController <_UIDocumentPickerExtensionViewController>
{
    BOOL _hasSetInitialNavigationItem;
}

+ (id)_remoteViewControllerInterface;
+ (id)_exportedInterface;
- (void)setViewControllers:(id)arg1 animated:(BOOL)arg2;
- (id)popToRootViewControllerAnimated:(BOOL)arg1;
- (id)popToViewController:(id)arg1 animated:(BOOL)arg2;
- (id)popViewControllerAnimated:(BOOL)arg1;
- (void)pushViewController:(id)arg1 animated:(BOOL)arg2;
- (void)_updateNavigationItem;
- (void)_locationsMenu:(id)arg1;
- (void)_doneButton:(id)arg1;
- (id)hostingViewController;
- (void)_setTintColor:(id)arg1;
- (void)_documentPickerDidDismiss;
- (void)_prepareWithExtensionInfo:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (void)_setUploadURLWrapper:(id)arg1;
- (void)_setPickerMode:(NSUInteger)arg1;
- (void)_setPickableTypes:(id)arg1;

@end

