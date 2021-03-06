//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_group;

@interface AKCoordinatedDataBlock : NSObject
{
    id /* CDUnknownBlockType */ _block;
    id /* CDUnknownBlockType */ _completionHandler;
    BOOL _started;
//     struct os_unfair_lock_s _lock;
    NSObject<OS_dispatch_group> *_group;
}

+ (id)startCoordinatingBlock:(id /* CDUnknownBlockType */)arg1;
// - (void).cxx_destruct;
- (void)_callCompletionWithData:(id)arg1 error:(id)arg2;
- (void)_start;
- (void)setCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)start;
- (id)initWithBlock:(id /* CDUnknownBlockType */)arg1;

@end

