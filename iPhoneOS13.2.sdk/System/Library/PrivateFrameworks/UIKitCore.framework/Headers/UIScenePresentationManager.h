//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/BSDescriptionProviding-Protocol.h>
#import <UIKitCore/FBSceneObserver-Protocol.h>
#import <UIKitCore/_UIScenePresenterOwnerDelegate-Protocol.h>

@class FBScene, NSMapTable, NSString, UIScenePresentationContext, _UIScenePresenterOwner;
@protocol UIScenePresentationManagerDelegate;

@interface UIScenePresentationManager : NSObject <BSDescriptionProviding, _UIScenePresenterOwnerDelegate, FBSceneObserver>
{
    FBScene *_scene;
    _UIScenePresenterOwner *_scenePresenterOwner;
    NSMapTable *_mapLayersToPresenterOwners;
    _Bool _invalidated;
    UIScenePresentationContext *_defaultScenePresentationContext;
    id <UIScenePresentationManagerDelegate> _delegate;
    struct {
        _Bool defaultPriorityBand;
    } _delegateFlags;
}

@property(readonly, copy, nonatomic) UIScenePresentationContext *defaultPresentationContext; // @synthesize defaultPresentationContext=_defaultScenePresentationContext;
@property(nonatomic) __weak id <UIScenePresentationManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) __weak FBScene *scene; // @synthesize scene=_scene;
- (_Bool)_hasPresenterWithIdentifier:(id)arg1;
- (long long)_defaultPresentationPriority;
- (id)_presenterWithIdentifier:(id)arg1;
- (void)sceneDidInvalidate:(id)arg1;
- (void)sceneContentStateDidChange:(id)arg1;
- (void)ownerDidInvalidateLastPresenter:(id)arg1;
- (void)owner:(id)arg1 willPrioritizePresenter:(id)arg2 deactivatePresenter:(id)arg3;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;
- (id)snapshotPresentationForSnapshot:(id)arg1;
- (id)snapshotContext;
- (id)createPresenterForLayerTarget:(id)arg1 identifier:(id)arg2 priority:(long long)arg3;
- (id)createPresenterForLayerTarget:(id)arg1 identifier:(id)arg2;
- (id)createPresenterWithIdentifier:(id)arg1 priority:(long long)arg2;
- (id)createPresenterWithIdentifier:(id)arg1;
@property(readonly, nonatomic, getter=isInvalidated) _Bool invalidated;
- (void)modifyDefaultPresentationContext:(id /* block */)arg1;
- (id)_initWithScene:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
