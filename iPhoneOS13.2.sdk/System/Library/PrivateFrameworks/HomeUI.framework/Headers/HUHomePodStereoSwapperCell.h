//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class HUHomePodDetailView, UIButton;
@protocol HUHomePodStereoSwapperCellDelegate;

@interface HUHomePodStereoSwapperCell : UITableViewCell
{
    UIButton *_swapButton;
    HUHomePodDetailView *_leftHomePod;
    HUHomePodDetailView *_rightHomePod;
    id <HUHomePodStereoSwapperCellDelegate> _delegate;
}

@property(nonatomic) __weak id <HUHomePodStereoSwapperCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) HUHomePodDetailView *rightHomePod; // @synthesize rightHomePod=_rightHomePod;
@property(readonly, nonatomic) HUHomePodDetailView *leftHomePod; // @synthesize leftHomePod=_leftHomePod;
@property(readonly, nonatomic) UIButton *swapButton; // @synthesize swapButton=_swapButton;
- (void)_swap;
- (void)_setupConstraints;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
