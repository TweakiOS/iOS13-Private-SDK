//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UICollectionViewCell.h>

@class UIImageView;
@protocol TUICandidateViewStyle;

@interface TUICandidateBaseCell : UICollectionViewCell
{
    id <TUICandidateViewStyle> _style;
    UIImageView *_backgroundImageView;
}

@property(retain, nonatomic) UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(retain, nonatomic) id <TUICandidateViewStyle> style; // @synthesize style=_style;
// - (void).cxx_destruct;
- (void)setHighlighted:(BOOL)arg1;
- (void)setSelected:(BOOL)arg1;
- (void)updateColors;

@end

