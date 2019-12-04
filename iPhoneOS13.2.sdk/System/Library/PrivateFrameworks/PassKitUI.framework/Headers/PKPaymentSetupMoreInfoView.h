//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIScrollView.h>

@class PKPassView, PKPaymentPass, PKPaymentSetupMoreInfoItem, PKTableHeaderView, UIButton, UIImageView;

@interface PKPaymentSetupMoreInfoView : UIScrollView
{
    PKPassView *_passView;
    struct CGSize _boundSize;
    PKPaymentSetupMoreInfoItem *_moreInfoItem;
    PKPaymentPass *_pass;
    long long _context;
    UIImageView *_customImageView;
    PKTableHeaderView *_headerView;
    UIButton *_linkButton;
}

@property(readonly, nonatomic) UIButton *linkButton; // @synthesize linkButton=_linkButton;
@property(readonly, nonatomic) PKTableHeaderView *headerView; // @synthesize headerView=_headerView;
@property(readonly, nonatomic) UIImageView *customImageView; // @synthesize customImageView=_customImageView;
@property(readonly, nonatomic) long long context; // @synthesize context=_context;
@property(readonly, nonatomic) PKPaymentPass *pass; // @synthesize pass=_pass;
@property(readonly, nonatomic) PKPaymentSetupMoreInfoItem *moreInfoItem; // @synthesize moreInfoItem=_moreInfoItem;
- (void)_linkButtonTapped:(id)arg1;
- (void)layoutSubviews;
- (id)initWithMoreInfoItem:(id)arg1 paymentPass:(id)arg2 context:(long long)arg3;
- (void)pk_applyAppearance:(id)arg1;

@end
