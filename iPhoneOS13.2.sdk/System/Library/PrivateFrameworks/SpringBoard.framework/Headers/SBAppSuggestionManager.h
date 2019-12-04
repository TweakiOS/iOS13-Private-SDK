//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/SBAttentionAwarenessClientDelegate-Protocol.h>
#import <SpringBoard/UABestAppSuggestionManagerDelegate-Protocol.h>

@class NSCountedSet, NSString, SBAttentionAwarenessClient, SBBestAppSuggestion, UABestAppSuggestion, UABestAppSuggestionManager;

@interface SBAppSuggestionManager : NSObject <UABestAppSuggestionManagerDelegate, SBAttentionAwarenessClientDelegate>
{
    UABestAppSuggestionManager *_continuitySuggestionManager;
    UABestAppSuggestion *_continuityCurrentBestSuggestion;
    SBBestAppSuggestion *_currentBestSuggestion;
    NSCountedSet *_listeningReasons;
    _Bool _isListeningForContinuitySuggestion;
    _Bool _isListeningForExpertCenterSuggestion;
    _Bool _screenOnDueToUserEvent;
    _Bool _screenOnAndLookingForEvent;
    SBAttentionAwarenessClient *_idleTouchAwarenessClient;
}

+ (id)sharedInstance;
- (void)_handleAppUninstall:(id)arg1;
- (void)bestAppSuggestionChanged:(id)arg1;
- (void)_calculateBestSuggestionAndNotifyListeners;
- (void)noteNotActivatingForAppSuggestion:(id)arg1 fromSource:(long long)arg2;
- (void)noteActivatingForAppSuggestion:(id)arg1 fromSource:(long long)arg2;
- (void)_setContinuitySuggestionUpdatesEnabled:(_Bool)arg1 expertCenterSuggestionUpdatesEnabled:(_Bool)arg2;
- (void)_evaluateSuggestionUpdates:(id)arg1;
- (void)_handleInitialSpringBoardLaunch;
- (void)clientDidResetForUserAttention:(id)arg1;
- (void)client:(id)arg1 attentionLostTimeoutDidExpire:(double)arg2 forConfigurationGeneration:(unsigned long long)arg3 withAssociatedObject:(id)arg4;
- (void)_screenDidUndim:(id)arg1;
- (void)_screenDidDim:(id)arg1;
- (void)disableListeningForUpdatesForReason:(id)arg1;
- (void)enableListeningForUpdatesForReason:(id)arg1;
- (void)startFetchingPayloadForAppSuggestion:(id)arg1;
- (void)performWithCurrentSuggestedAppAndApplication:(id /* block */)arg1;
- (id)currentSuggestedApp;
- (void)_stopListeningForNotifications;
- (void)_listenForNotifications;
- (void)_destroySuggestionSources;
- (void)_createSuggestionSources;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
