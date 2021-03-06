//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <SpringBoardFoundation/PTSettingsKeyObserver-Protocol.h>

@class NSString, _UILegibilitySettings;
@protocol SBFDateProviding;

@interface SBFLockScreenDateViewController : UIViewController <PTSettingsKeyObserver>
{
    id _timerToken;
    BOOL _isVisible;
    id _minuteHandlerToken;
    BOOL _disablesUpdates;
    BOOL _screenOff;
    _UILegibilitySettings *_legibilitySettings;
    id <SBFDateProviding> _dateProvider;
}

@property(retain, nonatomic) id <SBFDateProviding> dateProvider; // @synthesize dateProvider=_dateProvider;
@property(retain, nonatomic) _UILegibilitySettings *legibilitySettings; // @synthesize legibilitySettings=_legibilitySettings;
@property(nonatomic) BOOL screenOff; // @synthesize screenOff=_screenOff;
// - (void).cxx_destruct;
- (void)_startUpdateTimer;
- (void)_stopUpdateTimer;
- (void)_handleTimeZoneChange;
- (void)_updateView;
- (void)_updateFormat;
- (void)_updateFormatIfEnabled;
- (void)_addObservers;
- (void)_updateLegibilityStrength;
- (void)_updateState;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (BOOL)_canShowWhileLocked;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)willMoveToParentViewController:(id)arg1;
- (void)setView:(id)arg1;
- (void)loadView;
- (void)updateTimeNow;
- (void)setCustomSubtitleView:(id)arg1;
- (void)setContentAlpha:(double)arg1 withSubtitleVisible:(BOOL)arg2;
@property(nonatomic, getter=isSubtitleHidden) BOOL subtitleHidden;
- (id)dateViewIfExists;
- (id)dateView;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

