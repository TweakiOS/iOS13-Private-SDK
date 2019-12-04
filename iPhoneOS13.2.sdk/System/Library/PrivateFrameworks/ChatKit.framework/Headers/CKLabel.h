//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UILabel.h>

@class UIImageView;

@interface CKLabel : UILabel
{
    UIImageView *_titleIconImageView;
    long long _titleIconImageType;
}

@property(nonatomic) long long titleIconImageType; // @synthesize titleIconImageType=_titleIconImageType;
@property(retain, nonatomic) UIImageView *titleIconImageView; // @synthesize titleIconImageView=_titleIconImageView;
- (_Bool)isLTR;
- (struct CGSize)sizeOfAccessoryImageView;
- (struct CGSize)sizeOfTitleLabel;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)drawTextInRect:(struct CGRect)arg1;
- (struct CGRect)rectToDrawTextInForRect:(struct CGRect)arg1;
- (void)layoutSubviews;

@end
