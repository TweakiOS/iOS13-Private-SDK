//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXSettingsKeyObserver-Protocol.h>


@class NSArray, NSString, UITapGestureRecognizer, UIWindow;

@interface PXDiagnosticsController : NSObject <PXSettingsKeyObserver, UIGestureRecognizerDelegate>
{
    UIWindow *__window;
    NSArray *__diagnosticsServicesClasses;
    UITapGestureRecognizer *__gestureRecognizer;
}

+ (id)sharedController;
@property(retain, nonatomic, setter=_setGestureRecognizer:) UITapGestureRecognizer *_gestureRecognizer; // @synthesize _gestureRecognizer=__gestureRecognizer;
@property(readonly, nonatomic) NSArray *_diagnosticsServicesClasses; // @synthesize _diagnosticsServicesClasses=__diagnosticsServicesClasses;
@property(readonly, nonatomic) UIWindow *_window; // @synthesize _window=__window;
- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (void)_executeService:(id)arg1;
- (id)_currentRootViewController;
- (void)_presentContextualViewControllerFromPoint:(struct CGPoint)arg1 inCoordinateSpace:(id)arg2;
- (void)presentContextualDiagnostics;
- (void)_handleGestureRecognizer:(id)arg1;
- (void)_updateGestureRecognizer;
- (void)_loadDiagnosticsServicesClasses;
- (void)presentContextualViewControllerForServices:(id)arg1;
- (id)consoleDescriptionForServices:(id)arg1;
- (id)servicesWithItemProviders:(id)arg1;
- (id)currentItemProviders;
- (void)setupOnInternalDevicesWithWindow:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

