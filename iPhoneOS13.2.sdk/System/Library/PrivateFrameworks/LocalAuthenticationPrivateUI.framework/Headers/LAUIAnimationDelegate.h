//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>


@class NSString;

__attribute__((visibility("hidden")))
@interface LAUIAnimationDelegate : NSObject <CAAnimationDelegate>
{
    id /* block */ _didStartHandler;
    id /* block */ _didStopHandler;
}

@property(copy, nonatomic) id /* block */ didStopHandler; // @synthesize didStopHandler=_didStopHandler;
@property(copy, nonatomic) id /* block */ didStartHandler; // @synthesize didStartHandler=_didStartHandler;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)animationDidStart:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

