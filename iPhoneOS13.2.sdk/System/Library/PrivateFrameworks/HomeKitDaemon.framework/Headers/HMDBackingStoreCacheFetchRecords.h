//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeKitDaemon/HMDBackingStoreOperation.h>

@class HMDBackingStoreCacheGroup, HMDBackingStoreCacheShareGroup, NSArray;

@interface HMDBackingStoreCacheFetchRecords : HMDBackingStoreOperation
{
    _Bool _recursive;
    HMDBackingStoreCacheGroup *_group;
    HMDBackingStoreCacheShareGroup *_share;
    id /* block */ _fetchResult;
    NSArray *_recordNames;
    NSArray *_uuids;
    NSArray *_parentUuids;
}

@property(retain, nonatomic) NSArray *parentUuids; // @synthesize parentUuids=_parentUuids;
@property(retain, nonatomic) NSArray *uuids; // @synthesize uuids=_uuids;
@property(retain, nonatomic) NSArray *recordNames; // @synthesize recordNames=_recordNames;
@property(copy, nonatomic) id /* block */ fetchResult; // @synthesize fetchResult=_fetchResult;
@property(retain, nonatomic) HMDBackingStoreCacheShareGroup *share; // @synthesize share=_share;
@property(retain, nonatomic) HMDBackingStoreCacheGroup *group; // @synthesize group=_group;
@property _Bool recursive; // @synthesize recursive=_recursive;
- (id)mainReturningError;
- (id)initWithGroup:(id)arg1 records:(id)arg2 fetchResult:(id /* block */)arg3;
- (id)initWithShareGroup:(id)arg1 records:(id)arg2 fetchResult:(id /* block */)arg3;
- (id)initWithGroup:(id)arg1 parentUuids:(id)arg2 fetchResult:(id /* block */)arg3;
- (id)initWithShareGroup:(id)arg1 parentUuids:(id)arg2 fetchResult:(id /* block */)arg3;
- (id)initWithGroup:(id)arg1 uuids:(id)arg2 fetchResult:(id /* block */)arg3;
- (id)initWithShareGroup:(id)arg1 uuids:(id)arg2 fetchResult:(id /* block */)arg3;

@end
