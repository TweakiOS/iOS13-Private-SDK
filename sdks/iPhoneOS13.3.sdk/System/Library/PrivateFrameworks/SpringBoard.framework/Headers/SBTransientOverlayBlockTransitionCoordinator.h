//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/SBTransientOverlayTransitionCoordinating-Protocol.h>

@interface SBTransientOverlayBlockTransitionCoordinator : NSObject <SBTransientOverlayTransitionCoordinating>
{
    id /* CDUnknownBlockType */ _startTransitionHandler;
    id /* CDUnknownBlockType */ _finalizeTransitionHandler;
}

@property(copy, nonatomic) id /* CDUnknownBlockType */ finalizeTransitionHandler; // @synthesize finalizeTransitionHandler=_finalizeTransitionHandler;
@property(copy, nonatomic) id /* CDUnknownBlockType */ startTransitionHandler; // @synthesize startTransitionHandler=_startTransitionHandler;
// - (void).cxx_destruct;
- (void)finalizeTransitionWithContextProvider:(id)arg1;
- (void)startTransitionWithContextProvider:(id)arg1;

@end

