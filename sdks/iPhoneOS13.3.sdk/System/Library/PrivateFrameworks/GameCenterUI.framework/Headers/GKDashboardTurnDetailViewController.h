//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameCenterUI/GKDetailViewController.h>

@class GKTurnBasedMatch, NSLayoutConstraint, UIButton, UILabel, UIView;

@interface GKDashboardTurnDetailViewController : GKDetailViewController
{
    BOOL _shouldShowPlay;
    BOOL _shouldShowQuit;
    GKTurnBasedMatch *_match;
    UIView *_contentVerticalCenteringView;
    UIView *_turnDetailContentView;
    UILabel *_playingWithLabel;
    UILabel *_createdLabel;
    UIButton *_firstButton;
    UIButton *_secondButton;
    NSLayoutConstraint *_secondButtonCenteringConstraint;
}

@property(nonatomic) NSLayoutConstraint *secondButtonCenteringConstraint; // @synthesize secondButtonCenteringConstraint=_secondButtonCenteringConstraint;
@property(nonatomic) UIButton *secondButton; // @synthesize secondButton=_secondButton;
@property(nonatomic) UIButton *firstButton; // @synthesize firstButton=_firstButton;
@property(nonatomic) UILabel *createdLabel; // @synthesize createdLabel=_createdLabel;
@property(nonatomic) UILabel *playingWithLabel; // @synthesize playingWithLabel=_playingWithLabel;
@property(nonatomic) UIView *turnDetailContentView; // @synthesize turnDetailContentView=_turnDetailContentView;
@property(nonatomic) UIView *contentVerticalCenteringView; // @synthesize contentVerticalCenteringView=_contentVerticalCenteringView;
@property(nonatomic) BOOL shouldShowQuit; // @synthesize shouldShowQuit=_shouldShowQuit;
@property(nonatomic) BOOL shouldShowPlay; // @synthesize shouldShowPlay=_shouldShowPlay;
@property(retain, nonatomic) GKTurnBasedMatch *match; // @synthesize match=_match;
- (void)handleTurnBasedEvent:(id)arg1;
- (void)turnOK:(id)arg1;
- (void)removeMatch:(id)arg1;
- (void)quitMatch:(id)arg1;
- (void)disableButtons;
- (void)chooseMatch:(id)arg1;
- (void)declineInvitation:(id)arg1;
- (void)acceptInvitation:(id)arg1;
- (void)refreshPresenter;
- (id)preferredFocusEnvironments;
- (id)playingWithString;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithTurnBasedMatch:(id)arg1;

@end

