//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UIView.h>

@class NSString, UILabel, UINavigationBar;

__attribute__((visibility("hidden")))
@interface _UINavBarPrompt : UIView
{
    UILabel *_label;
    UINavigationBar *_navBar;
}

- (void)layoutSubviews;
- (struct CGSize)_updateLabelTextColorAndFontReturningShadowOffset;
- (struct CGRect)promptBounds;
- (struct CGRect)_labelFrame;
@property(copy, nonatomic) NSString *prompt;
- (id)initWithNavBar:(id)arg1;

@end
