//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NFUnfairLock, NSMapTable, NSMutableOrderedSet;

@interface FCURLRequestScheduler : NSObject
{
    NSMutableOrderedSet *_requests;
    NSMapTable *_inFlightURLTasks;
    NFUnfairLock *_lock;
}

@property(retain, nonatomic) NFUnfairLock *lock; // @synthesize lock=_lock;
@property(retain, nonatomic) NSMapTable *inFlightURLTasks; // @synthesize inFlightURLTasks=_inFlightURLTasks;
@property(retain, nonatomic) NSMutableOrderedSet *requests; // @synthesize requests=_requests;
- (void)_applyPriority:(long long)arg1 toRequest:(id)arg2;
- (void)_cancelRequest:(id)arg1;
- (void)_suspendURLTaskForRequest:(id)arg1;
- (void)_resumeURLTaskForRequest:(id)arg1;
- (_Bool)_isLowPriority:(long long)arg1;
- (void)_serviceRequests;
- (id)scheduleURLRequest:(id)arg1 URLSession:(id)arg2 destination:(long long)arg3 priority:(long long)arg4 loggingKey:(id)arg5 completion:(id /* block */)arg6;
- (id)init;

@end
