//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UIBarButtonItem;

__attribute__((visibility("hidden")))
@interface _UIButtonBarTargetAction : NSObject
{
    UIBarButtonItem *_barButtonItem;
    id /* CDUnknownBlockType */ _actionFilter;
}

@property(copy, nonatomic) id /* CDUnknownBlockType */ actionFilter; // @synthesize actionFilter=_actionFilter;
@property(readonly, nonatomic) UIBarButtonItem *barButtonItem; // @synthesize barButtonItem=_barButtonItem;
// - (void).cxx_destruct;
- (void)_invoke:(id)arg1 forEvent:(id)arg2;
@property(readonly, nonatomic) SEL proxyAction;
- (id)initWithBarButtonItem:(id)arg1;
- (id)init;

@end

