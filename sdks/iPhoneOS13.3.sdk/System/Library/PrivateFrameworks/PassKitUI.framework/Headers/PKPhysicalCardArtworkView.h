//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIImage, UIImageView, UILabel;

@interface PKPhysicalCardArtworkView : UIView
{
    UIImageView *_artworkImageView;
    UILabel *_nameLabel;
    UIImage *_artworkImage;
    NSString *_nameOnCard;
}

@property(copy, nonatomic) NSString *nameOnCard; // @synthesize nameOnCard=_nameOnCard;
@property(retain, nonatomic) UIImage *artworkImage; // @synthesize artworkImage=_artworkImage;
// - (void).cxx_destruct;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(CGRect)arg1;

@end

