//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class ASCompetitionGraphView, ASCompetitionMessageBubbleView, ASCompetitionScoreView, ASCompetitionTimeRemainingLabel, NSNumber;

@interface ASCompetitionGizmoDetailView : UIView
{
    ASCompetitionScoreView *_totalScoreView;
    ASCompetitionScoreView *_totalWinsScoreView;
    ASCompetitionGraphView *_graphView;
    ASCompetitionTimeRemainingLabel *_timeRemainingLabel;
    ASCompetitionMessageBubbleView *_messageBubbleView;
    UIView *_timeRemainingSeparator;
    UIView *_totalWinsSeparator;
    NSNumber *_previousLayoutWidth;
    long long _modules;
    long long _type;
    BOOL _isInteractionEnabled;
}

@property(nonatomic) BOOL isInteractionEnabled; // @synthesize isInteractionEnabled=_isInteractionEnabled;
// - (void).cxx_destruct;
- (BOOL)supportsSmackTalkReply;
- (void)setFriend:(id)arg1 competition:(id)arg2;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)layoutForWidth:(double)arg1;
- (void)layoutSubviews;
- (id)initWithDetailViewType:(long long)arg1;

@end
