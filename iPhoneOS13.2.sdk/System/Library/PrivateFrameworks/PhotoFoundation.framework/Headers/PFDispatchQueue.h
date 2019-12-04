//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface PFDispatchQueue : NSObject
{
}

+ (void)dispatchApply:(unsigned long long)arg1 withConcurrencyLimit:(unsigned long long)arg2 canceler:(id)arg3 ofBlock:(id /* block */)arg4;
+ (void)dispatchApply:(unsigned long long)arg1 ofBlock:(id /* block */)arg2;
+ (id)globalCurrentQOSQueue;
+ (id)globalQOSQueue:(unsigned int)arg1;
+ (id)globalBackgroundQOSQueue;
+ (id)globalUtilityQOSQueue;
+ (id)globalDefaultQOSQueue;
+ (id)globalUserInitiatedQOSQueue;
+ (id)globalUserInteractiveQOSQueue;
+ (id)mainQueue;
+ (id)newQueueWithLabel:(id)arg1 concurrencyLimit:(unsigned long long)arg2 qos:(unsigned int)arg3;
+ (id)newQueueWithLabel:(id)arg1 concurrencyLimit:(unsigned long long)arg2;
+ (id)newConcurrentQueueWithLabel:(id)arg1 qos:(unsigned int)arg2 targetQueue:(id)arg3 extensions:(id)arg4;
+ (id)newConcurrentQueueWithLabel:(id)arg1 qos:(unsigned int)arg2;
+ (id)newConcurrentQueueWithLabel:(id)arg1;
+ (id)newSerialQueueWithLabel:(id)arg1 qos:(unsigned int)arg2 targetQueue:(id)arg3 extensions:(id)arg4;
+ (id)newSerialQueueWithLabel:(id)arg1 qos:(unsigned int)arg2;
+ (id)newSerialQueueWithLabel:(id)arg1;
+ (id)newQueueWithLabel:(id)arg1 qos:(unsigned int)arg2 targetQueue:(id)arg3 extensions:(id)arg4;
+ (id)injectedExtensions;
+ (id)newQueueWithLabel:(id)arg1 qos:(unsigned int)arg2;
+ (id)newQueueWithLabel:(id)arg1;
+ (id)_newQueueWithLabel:(id)arg1 qos:(unsigned int)arg2 targetQueue:(id)arg3;
+ (Class)concreteQueueClass;
+ (void)initialize;
- (void)dispatchBarrierAsyncWithQOS:(unsigned int)arg1 block:(id /* block */)arg2;
- (void)dispatchBarrierAsyncWithCurrentQOS:(id /* block */)arg1;
- (void)dispatchAsyncWithQOS:(unsigned int)arg1 block:(id /* block */)arg2;
- (void)dispatchAsyncWithCurrentQOS:(id /* block */)arg1;
- (id)_init;

@end
