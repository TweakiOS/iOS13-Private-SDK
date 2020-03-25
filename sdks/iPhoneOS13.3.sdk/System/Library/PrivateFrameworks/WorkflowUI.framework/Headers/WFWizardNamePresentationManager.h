//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UINavigationController, WFWorkflowWizardNameViewController;

@interface WFWizardNamePresentationManager : NSObject
{
    BOOL _presentsModally;
    UINavigationController *_navigationController;
    WFWorkflowWizardNameViewController *_wizardNameViewController;
}

@property(readonly, nonatomic) BOOL presentsModally; // @synthesize presentsModally=_presentsModally;
@property(readonly, nonatomic) WFWorkflowWizardNameViewController *wizardNameViewController; // @synthesize wizardNameViewController=_wizardNameViewController;
@property(readonly, nonatomic) UINavigationController *navigationController; // @synthesize navigationController=_navigationController;
// - (void).cxx_destruct;
- (void)dismiss;
- (void)presentModal;
- (void)present;
- (id)initWithNavigationController:(id)arg1 wizardNameViewController:(id)arg2;

@end
