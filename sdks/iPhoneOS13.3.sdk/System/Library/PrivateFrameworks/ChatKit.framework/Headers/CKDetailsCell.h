//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIView;

@interface CKDetailsCell : UITableViewCell
{
    BOOL _indentTopSeperator;
    BOOL _indentBottomSeperator;
    UIView *_topSeperator;
    UIView *_bottomSeperator;
}

@property(retain, nonatomic) UIView *bottomSeperator; // @synthesize bottomSeperator=_bottomSeperator;
@property(retain, nonatomic) UIView *topSeperator; // @synthesize topSeperator=_topSeperator;
@property(nonatomic) BOOL indentBottomSeperator; // @synthesize indentBottomSeperator=_indentBottomSeperator;
@property(nonatomic) BOOL indentTopSeperator; // @synthesize indentTopSeperator=_indentTopSeperator;
// - (void).cxx_destruct;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
