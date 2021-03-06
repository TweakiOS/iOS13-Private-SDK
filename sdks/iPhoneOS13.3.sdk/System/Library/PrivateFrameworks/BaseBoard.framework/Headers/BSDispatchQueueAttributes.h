//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@protocol OS_dispatch_queue, OS_dispatch_queue_attr;

@interface BSDispatchQueueAttributes : NSObject <NSCopying>
{
    NSObject<OS_dispatch_queue_attr> *_attrs;
    NSObject<OS_dispatch_queue> *_targetQueue;
}

+ (id)concurrent;
+ (id)serial;
+ (id)_attributesWithAttributes:(id)arg1;
@property(readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *targetQueue; // @synthesize targetQueue=_targetQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue_attr> *attributes; // @synthesize attributes=_attrs;
// - (void).cxx_destruct;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)inactive;
- (id)targetQueue:(id)arg1;
- (id)autoreleaseFrequency:(NSUInteger)arg1;
- (id)serviceClass:(unsigned int)arg1 relativePriority:(int)arg2;
- (id)serviceClass:(unsigned int)arg1;

@end

