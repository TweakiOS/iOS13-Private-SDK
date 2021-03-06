//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface CKMultiDict : NSObject
{
    NSObject<OS_dispatch_queue> *_lockQueue;
    NSUInteger _count;
    NSMutableDictionary *_dictionary;
}

@property(retain, nonatomic) NSMutableDictionary *dictionary; // @synthesize dictionary=_dictionary;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *lockQueue; // @synthesize lockQueue=_lockQueue;
// - (void).cxx_destruct;
- (id)allKeys;
- (NSUInteger)count;
- (void)removeAllObjects;
- (void)removeObjectsForKey:(id)arg1;
- (id)objectsForKey:(id)arg1;
- (id)dequeueObjectForKey:(id)arg1;
- (id)headObjectForKey:(id)arg1;
- (void)enqueueObject:(id)arg1 forKey:(id)arg2;
- (id)popObjectForKey:(id)arg1;
- (id)peekObjectForKey:(id)arg1;
- (void)pushObject:(id)arg1 forKey:(id)arg2;
- (id)description;
- (id)init;

@end

