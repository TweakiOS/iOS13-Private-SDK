//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <SpringBoardUIServices/_SBUIWidgetHost-Protocol.h>

@class NSString;
@protocol _SBUIWidgetHost;

@interface _SBUIWidgetViewController : UIViewController <_SBUIWidgetHost>
{
    NSString *_widgetIdentifier;
    id <_SBUIWidgetHost> _widgetHost;
}

@property(nonatomic) __weak id <_SBUIWidgetHost> widgetHost; // @synthesize widgetHost=_widgetHost;
@property(copy, nonatomic) NSString *widgetIdentifier; // @synthesize widgetIdentifier=_widgetIdentifier;
- (void)invalidatePreferredViewSize;
- (void)requestLaunchOfURL:(id)arg1;
- (void)setVisibleWidgetsIDs:(id)arg1;
- (void)hostDidDismiss;
- (void)hostWillDismiss;
- (void)hostDidPresent;
- (void)hostWillPresent;
@property(readonly, nonatomic) struct CGSize preferredViewSize;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
