//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AssistantServices/AFClockItemStorageDelegate-Protocol.h>
#import <AssistantServices/AFInvalidating-Protocol.h>

@class AFClockAlarmSnapshot, AFClockItemStorage, NSHashTable, NSMutableOrderedSet, NSUUID;
@protocol OS_dispatch_queue;

@interface AFClockAlarmObserver : NSObject <AFClockItemStorageDelegate, AFInvalidating>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSHashTable *_listeners;
    AFClockAlarmSnapshot *_alarmSnapshot;
    AFClockItemStorage *_alarmStorage;
    NSMutableOrderedSet *_notifiedFiringAlarmIDs;
    NSUUID *_alarmsChangedToken;
}

+ (void)initialize;
// - (void).cxx_destruct;
- (void)_enumerateListenersUsingBlock:(id /* CDUnknownBlockType */)arg1;
- (void)_handleFetchAlarmsForReason:(id)arg1 error:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)_fetchAlarmsForReason:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)_tearDown;
- (void)_setUp;
- (id)_alarmSnapshot;
- (void)alarmsChanged:(id)arg1;
- (void)stateReset:(id)arg1;
- (void)firingAlarmDismissed:(id)arg1;
- (void)firingAlarmChanged:(id)arg1;
- (void)alarmFired:(id)arg1;
- (void)alarmsRemoved:(id)arg1;
- (void)alarmsUpdated:(id)arg1;
- (void)alarmsAdded:(id)arg1;
- (void)clockItemStorageDidUpdate:(id)arg1 insertedItemIDs:(id)arg2 updatedItemIDs:(id)arg3 deletedItemIDs:(id)arg4;
- (void)invalidate;
- (void)getFiringAlarmIDsWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)getAlarmSnapshotWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (void)dealloc;
- (id)init;

@end

