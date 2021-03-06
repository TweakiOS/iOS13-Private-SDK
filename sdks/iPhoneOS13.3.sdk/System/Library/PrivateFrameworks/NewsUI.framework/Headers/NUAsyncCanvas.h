//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NUCanvas;
@protocol OS_dispatch_queue;

@interface NUAsyncCanvas : NSObject
{
    NUCanvas *_canvas;
    NSObject<OS_dispatch_queue> *_layoutQueue;
}

@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *layoutQueue; // @synthesize layoutQueue=_layoutQueue;
@property(readonly, nonatomic) NUCanvas *canvas; // @synthesize canvas=_canvas;
// - (void).cxx_destruct;
- (void)layoutInBounds:(CGRect)arg1 traitCollection:(id)arg2 callbackQueue:(id)arg3 completion:(id /* CDUnknownBlockType */)arg4;
- (void)layoutInBounds:(CGRect)arg1 traitCollection:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (id)initWithCanvas:(id)arg1 layoutQueue:(id)arg2;
- (id)initWithCanvas:(id)arg1;

@end

