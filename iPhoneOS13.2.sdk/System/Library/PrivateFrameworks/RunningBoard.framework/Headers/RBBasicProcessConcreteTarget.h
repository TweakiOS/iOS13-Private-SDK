//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <RunningBoard/RBConcreteTarget.h>

@class RBProcess;

__attribute__((visibility("hidden")))
@interface RBBasicProcessConcreteTarget : RBConcreteTarget
{
    RBProcess *_process;
}

- (id)process;
- (id)description;
- (id)_initWithProcess:(id)arg1;
- (id)createRBSTarget;
- (_Bool)isSystem;
- (id)identity;

@end
