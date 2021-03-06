//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class HFItem, HMHome, NSSet, UIViewController;
@protocol NSCopying;

@interface HUQuickControlPresentationContext : NSObject <NSCopying>
{
    NSUInteger _colorStyle;
    HFItem<NSCopying> *_item;
    NSSet *_controlItems;
    HMHome *_home;
    UIViewController *_sourceViewController;
    CGRect _sourceRect;
}

@property(nonatomic) __weak UIViewController *sourceViewController; // @synthesize sourceViewController=_sourceViewController;
@property(nonatomic) CGRect sourceRect; // @synthesize sourceRect=_sourceRect;
@property(retain, nonatomic) HMHome *home; // @synthesize home=_home;
@property(copy, nonatomic) NSSet *controlItems; // @synthesize controlItems=_controlItems;
@property(retain, nonatomic) HFItem<NSCopying> *item; // @synthesize item=_item;
@property(nonatomic) NSUInteger colorStyle; // @synthesize colorStyle=_colorStyle;
// - (void).cxx_destruct;
// - (id)copyWithZone:(_NSZone )arg1;

@end

