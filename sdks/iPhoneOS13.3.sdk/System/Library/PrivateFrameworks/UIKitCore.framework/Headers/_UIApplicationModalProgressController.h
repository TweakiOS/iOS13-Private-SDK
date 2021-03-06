//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSProgress, NSString, NSTimer, UIAlertController, UIWindow, UIWindowScene, _UIProgressView;

__attribute__((visibility("hidden")))
@interface _UIApplicationModalProgressController : NSObject
{
    BOOL _disableButtonAction;
    _UIProgressView *_progressView;
    UIWindowScene *_weakScene;
    double _displayDelaySeconds;
    UIWindow *_window;
    UIAlertController *_alertController;
    id /* CDUnknownBlockType */ _dismissalHandler;
    id /* CDUnknownBlockType */ _preDisplayTestBlock;
    NSProgress *_progress;
    NSTimer *_showTimer;
    NSTimer *_hideTimer;
    double _displayStartTime;
    NSProgress *_urlProgress;
}

+ (id)instanceForScene:(id)arg1;
+ (id)sharedInstance;
@property(retain, nonatomic) NSProgress *urlProgress; // @synthesize urlProgress=_urlProgress;
@property(nonatomic, getter=_displayStartTime, setter=_setDisplayStartTime:) double displayStartTime; // @synthesize displayStartTime=_displayStartTime;
@property(retain, nonatomic, getter=_hideTimer, setter=_setHideTimer:) NSTimer *hideTimer; // @synthesize hideTimer=_hideTimer;
@property(retain, nonatomic, getter=_showTimer, setter=_setShowTimer:) NSTimer *showTimer; // @synthesize showTimer=_showTimer;
@property(retain, nonatomic, getter=_progress, setter=_setProgress:) NSProgress *progress; // @synthesize progress=_progress;
@property(copy, nonatomic, getter=_preDisplaySetBlock, setter=_setPreDisplayTestBlock:) id /* CDUnknownBlockType */ preDisplayTestBlock; // @synthesize preDisplayTestBlock=_preDisplayTestBlock;
@property(copy, nonatomic, getter=_dismissalHandler, setter=_setDismissalHandler:) id /* CDUnknownBlockType */ dismissalHandler; // @synthesize dismissalHandler=_dismissalHandler;
@property(retain, nonatomic, getter=_alertController, setter=_setAlertController:) UIAlertController *alertController; // @synthesize alertController=_alertController;
@property(retain, nonatomic, getter=_window, setter=_setWindow:) UIWindow *window; // @synthesize window=_window;
@property(nonatomic) double displayDelaySeconds; // @synthesize displayDelaySeconds=_displayDelaySeconds;
// - (void).cxx_destruct;
- (void)displayForDownloadingURL:(id)arg1 copyToURL:(id)arg2 completionHandler:(id /* CDUnknownBlockType */)arg3;
- (void)displayForCopyingFileAtURL:(id)arg1 toURL:(id)arg2 completionHandler:(id /* CDUnknownBlockType */)arg3;
- (void)displayForDownloadingURL:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (void)displayWithTitle:(id)arg1 message:(id)arg2 progress:(id)arg3 buttonTitle:(id)arg4 preDisplayTestBlock:(id /* CDUnknownBlockType */)arg5 dismissalHandler:(id /* CDUnknownBlockType */)arg6;
@property(copy, nonatomic) NSString *message;
@property(copy, nonatomic) NSString *title;
- (void)reconfigureWithTitle:(id)arg1 message:(id)arg2 progress:(id)arg3 buttonTitle:(id)arg4 dismissalHandler:(id /* CDUnknownBlockType */)arg5;
- (void)hideAfterDelay:(double)arg1 forceCompletion:(BOOL)arg2 afterMinimumUptimeDismissalHandler:(id /* CDUnknownBlockType */)arg3;
- (void)hideAfterMinimumUptimeWithDismissalHandler:(id /* CDUnknownBlockType */)arg1;
- (void)_dismissButtonAction:(id)arg1;
- (void)_hideTimerAction:(id)arg1;
- (void)_showTimerAction:(id)arg1;
- (void)_hideImmediatelyWasDismissedByUser:(BOOL)arg1;
- (void)_reset;
- (void)_callAndClearDismissalHandlerWasDismissedByUser:(BOOL)arg1;
- (id)init;

@end

