//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/WFAccessResource.h>

@interface WFListeningModeDeviceAccessResource : WFAccessResource
{
    NSUInteger _managerState;
    id /* CDUnknownBlockType */ _availabilityCompletion;
}

+ (BOOL)isSingleton;
@property(copy, nonatomic) id /* CDUnknownBlockType */ availabilityCompletion; // @synthesize availabilityCompletion=_availabilityCompletion;
@property(nonatomic) NSUInteger managerState; // @synthesize managerState=_managerState;
// - (void).cxx_destruct;
- (id)localizedImportErrorReasonForGlobalLevelStatus:(NSUInteger)arg1;
- (id)localizedErrorReasonForGlobalLevelStatus:(NSUInteger)arg1;
- (id)localizedAccessResourceErrorString;
- (id)unavailableAccessResourceError;
- (NSUInteger)workflowLevelStatus;
- (NSUInteger)globalLevelStatus;
- (void)makeAvailableAtGlobalLevelWithUserInterface:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (void)handleNotification:(id)arg1;
- (void)dealloc;
- (void)installObserversIfNecessary;
- (id)initWithDefinition:(id)arg1;

@end

