//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "UIViewController.h"

@class UIActivityIndicatorView;

__attribute__((visibility("hidden")))
@interface _UIWaitingForRemoteViewContainerViewController : UIViewController
{
    UIActivityIndicatorView *_loadingSpinner;
}

@property(retain, nonatomic) UIActivityIndicatorView *loadingSpinner; // @synthesize loadingSpinner=_loadingSpinner;
// - (void).cxx_destruct;
- (void)stopSpinner;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end
