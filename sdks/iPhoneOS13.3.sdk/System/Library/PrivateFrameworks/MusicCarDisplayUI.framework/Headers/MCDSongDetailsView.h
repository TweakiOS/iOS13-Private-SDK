//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class MCDLabelButton, MCDTitleView, NSString, UILabel, UIStackView;

@interface MCDSongDetailsView : UIView
{
    BOOL _isCompactHeight;
    NSUInteger _fontStyle;
    MCDTitleView *_titleView;
    UILabel *_artistLabel;
    MCDLabelButton *_albumArtistLabelButton;
    NSString *_trackTitle;
    NSString *_albumTitle;
    NSString *_artistName;
    UIStackView *_stackView;
    CGRect _infoRect;
}

@property(nonatomic) BOOL isCompactHeight; // @synthesize isCompactHeight=_isCompactHeight;
@property(nonatomic) CGRect infoRect; // @synthesize infoRect=_infoRect;
@property(retain, nonatomic) UIStackView *stackView; // @synthesize stackView=_stackView;
@property(retain, nonatomic) NSString *artistName; // @synthesize artistName=_artistName;
@property(retain, nonatomic) NSString *albumTitle; // @synthesize albumTitle=_albumTitle;
@property(retain, nonatomic) NSString *trackTitle; // @synthesize trackTitle=_trackTitle;
@property(readonly, nonatomic) MCDLabelButton *albumArtistLabelButton; // @synthesize albumArtistLabelButton=_albumArtistLabelButton;
@property(retain, nonatomic) UILabel *artistLabel; // @synthesize artistLabel=_artistLabel;
@property(readonly, nonatomic) MCDTitleView *titleView; // @synthesize titleView=_titleView;
@property(nonatomic) NSUInteger fontStyle; // @synthesize fontStyle=_fontStyle;
// - (void).cxx_destruct;
- (void)_updateFont;
- (double)_preferredHeight;
- (void)_updateNumberOfLines;
- (void)layoutSubviews;
- (id)initWithFrame:(CGRect)arg1;

@end
