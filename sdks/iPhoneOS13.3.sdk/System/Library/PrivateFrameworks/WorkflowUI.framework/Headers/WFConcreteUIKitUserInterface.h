//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WorkflowUI/WFUIKitUserInterface-Protocol.h>
#import <WorkflowUI/WFUIKitUserInterfaceImpl-Protocol.h>

@class UIView, UIViewController;

@interface WFConcreteUIKitUserInterface : NSObject <WFUIKitUserInterface, WFUIKitUserInterfaceImpl>
{
    UIViewController *_viewController;
}

@property(readonly, nonatomic) UIViewController *viewController; // @synthesize viewController=_viewController;
// - (void).cxx_destruct;
- (void)presentAlert:(id)arg1;
@property(readonly, nonatomic) UIView *view;
- (id)initWithViewController:(id)arg1;

@end

