//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

__attribute__((visibility("hidden")))
@interface VUIFocusableCollectionViewCell : UICollectionViewCell
{
    BOOL _allowsFocus;
}

@property(nonatomic) BOOL allowsFocus; // @synthesize allowsFocus=_allowsFocus;
- (void)setHighlighted:(BOOL)arg1;
- (void)prepareForReuse;
- (BOOL)canBecomeFocused;
- (id)initWithFrame:(CGRect)arg1;

@end
