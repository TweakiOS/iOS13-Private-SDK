//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/HFTogglableControlItem-Protocol.h>

@class NAFuture;

@protocol HFPrimaryStateWriter <NSObject, HFTogglableControlItem>
- (NAFuture *)togglePrimaryState;
- (NAFuture *)writePrimaryState:(long long)arg1;
@end
