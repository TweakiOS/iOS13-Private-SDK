//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/_UIFocusEnvironmentPreferenceEnumerationContext-Protocol.h>

@class NSArray, NSHashTable, NSMutableArray, UIFocusSystem, _UIDebugLogReport;
@protocol UIFocusEnvironment, _UIFocusEnvironmentPreferenceEnumerationContextDelegate;

__attribute__((visibility("hidden")))
@interface _UIFocusEnvironmentPreferenceEnumerationContext : NSObject <_UIFocusEnvironmentPreferenceEnumerationContext>
{
    UIFocusSystem *_focusSystem;
    NSMutableArray *_visitedEnvironmentStack;
    id <UIFocusEnvironment> _lastPrimaryPreferredEnvironment;
    NSArray *_cachedPreferredEnvironments;
    NSHashTable *_allVisitedEnvironments;
    BOOL _hasResolvedPreferredFocusEnvironments;
    BOOL _hasNeverPopped;
    BOOL _cachedPrefersNothingFocused;
    id <UIFocusEnvironment> _environment;
    id <_UIFocusEnvironmentPreferenceEnumerationContextDelegate> _delegate;
    _UIDebugLogReport *_debugReport;
}

@property(retain, nonatomic) _UIDebugLogReport *debugReport; // @synthesize debugReport=_debugReport;
@property(nonatomic) __weak id <_UIFocusEnvironmentPreferenceEnumerationContextDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) id <UIFocusEnvironment> environment; // @synthesize environment=_environment;
// - (void).cxx_destruct;
- (void)_reportInferredPreferredFocusEnvironment:(id)arg1;
- (void)popEnvironment;
- (void)pushEnvironment:(id)arg1;
- (BOOL)_isAllowedToPreferEnvironment:(id)arg1;
- (id)_inferPreferencesForEnvironment:(id)arg1;
- (void)_resolvePreferredFocusEnvironments;
- (void)_invalidatePreferredEnvironments;
@property(readonly, nonatomic) BOOL prefersNothingFocused; // @synthesize prefersNothingFocused=_cachedPrefersNothingFocused;
@property(readonly, nonatomic) NSArray *preferredEnvironments;
@property(readonly, nonatomic) id <UIFocusEnvironment> preferringEnvironment;
@property(readonly, nonatomic, getter=isPreferredByItself) BOOL preferredByItself;
@property(readonly, nonatomic) BOOL isLeafPreference;
@property(readonly, nonatomic) BOOL isPrimaryPreference;
- (id)initWithInitialFocusEnvironment:(id)arg1;
- (id)init;

@end
