//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SGLazyInit : NSObject
{
    id /* CDUnknownBlockType */ _initializer;
    id /* CDUnknownBlockType */ _destructor;
    id _cachedObject;
}

// - (void).cxx_destruct;
- (void)dealloc;
- (void)destroyCachedObject;
- (id)peekAtCachedObject;
- (id)getObject;
- (id)initWithInitializer:(id /* CDUnknownBlockType */)arg1 destructor:(id /* CDUnknownBlockType */)arg2;

@end
