//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UIStatusBarAction.h>

__attribute__((visibility("hidden")))
@interface _UIStatusBarSystemNavigationAction : _UIStatusBarAction
{
    NSUInteger _destination;
}

+ (id)forwardNavigationAction;
+ (id)backNavigationAction;
+ (id)_navigationActionForDestination:(NSUInteger)arg1;
@property(nonatomic) NSUInteger destination; // @synthesize destination=_destination;

@end

