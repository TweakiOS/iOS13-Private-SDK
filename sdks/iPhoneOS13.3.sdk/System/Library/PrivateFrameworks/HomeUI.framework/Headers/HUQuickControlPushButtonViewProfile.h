//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/HUQuickControlViewProfile.h>

#import <HomeUI/HUQuickControlIncrementalConvertibleProfile-Protocol.h>

@class HFNumberValueConstraints;

@interface HUQuickControlPushButtonViewProfile : HUQuickControlViewProfile <HUQuickControlIncrementalConvertibleProfile>
{
    BOOL _toggleColorScheme;
}

@property(nonatomic) BOOL toggleColorScheme; // @synthesize toggleColorScheme=_toggleColorScheme;
@property(readonly, nonatomic) BOOL hasSecondaryValue;
@property(readonly, nonatomic) HFNumberValueConstraints *secondaryValueConstraints;
@property(readonly, nonatomic) HFNumberValueConstraints *primaryValueConstraints;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)init;

@end

