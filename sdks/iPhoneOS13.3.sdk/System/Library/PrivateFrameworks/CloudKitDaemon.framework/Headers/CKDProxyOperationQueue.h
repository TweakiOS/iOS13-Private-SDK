//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOperationQueue.h>

@class CKDClientProxy;

__attribute__((visibility("hidden")))
@interface CKDProxyOperationQueue : NSOperationQueue
{
    CKDClientProxy *_proxy;
}

@property(nonatomic) __weak CKDClientProxy *proxy; // @synthesize proxy=_proxy;
// - (void).cxx_destruct;
- (void)addOperation:(id)arg1;
- (id)initWithProxy:(id)arg1;

@end
