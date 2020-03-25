//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFItemBuilder.h>

@class HMAction;

@interface HFActionBuilder : HFItemBuilder
{
}

+ (id)actionBuilderForAction:(id)arg1 inHome:(id)arg2;
+ (Class)homeKitRepresentationClass;
- (id)performValidation;
- (BOOL)hasSameTargetAsAction:(id)arg1;
- (BOOL)isEquivalentToAction:(id)arg1;
@property(readonly, nonatomic, getter=isAffectedByEndEvents) BOOL affectedByEndEvents;
- (id)createNewAction;
- (id)getOrCreateAction;
- (id)copyForCreatingNewAction;
@property(readonly, nonatomic) BOOL requiresDeviceUnlock;
- (BOOL)updateWithActionBuilder:(id)arg1;
@property(readonly, nonatomic) HMAction *action;

@end
