//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>


@class NSString;

@interface CAMAnimationDelegate : NSObject <CAAnimationDelegate>
{
    id /* block */ _completion;
    id /* block */ _start;
}

@property(copy, nonatomic) id /* block */ start; // @synthesize start=_start;
@property(copy, nonatomic) id /* block */ completion; // @synthesize completion=_completion;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)animationDidStart:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

