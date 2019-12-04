//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDate, NSMutableArray, NSNumber;
@protocol OS_dispatch_queue;

@interface SKUIMediaSocialAdminPermissionsCoordinator : NSObject
{
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSArray *_lastKnownAuthors;
    NSDate *_lastRequestDate;
    NSMutableArray *_resultBlocks;
}

+ (id)sharedCoordinator;
- (void)_queueResultBlock:(id /* block */)arg1;
- (void)_handleOperationResponseWithAuthors:(id)arg1 error:(id)arg2;
- (void)_getAuthors;
- (void)_fireResultsBlocksWithAuthors:(id)arg1 error:(id)arg2;
- (void)_authenticateOnCompletion:(id /* block */)arg1;
- (void)reset;
@property(readonly, copy) NSNumber *lastKnownAdminStatus;
@property(readonly, copy) NSArray *lastKnownAuthors;
- (void)getAuthorsAndWaitWithOptions:(id)arg1 authorsBlock:(id /* block */)arg2;
- (void)getAuthorsWithOptions:(id)arg1 authorsBlock:(id /* block */)arg2;
- (void)getAdminStatusWithOptions:(id)arg1 resultBlock:(id /* block */)arg2;
- (id)init;

@end
