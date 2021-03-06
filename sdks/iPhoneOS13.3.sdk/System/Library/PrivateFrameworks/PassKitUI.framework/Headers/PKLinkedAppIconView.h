//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <PassKitUI/PKLinkedApplicationObserver-Protocol.h>

@class PKLinkedApplication, UIImage, WLEasyToHitCustomButton;

@interface PKLinkedAppIconView : UIView <PKLinkedApplicationObserver>
{
    WLEasyToHitCustomButton *_iconButton;
    UIImage *_iconImage;
    PKLinkedApplication *_linkedApplication;
}

@property(readonly, nonatomic) PKLinkedApplication *linkedApplication; // @synthesize linkedApplication=_linkedApplication;
// - (void).cxx_destruct;
- (void)linkedApplicationDidChangeState:(id)arg1;
- (void)tapped:(id)arg1;
- (void)_updateWithIconImage:(id)arg1 animated:(BOOL)arg2;
- (void)layoutSubviews;
- (CGSize)intrinsicContentSize;
- (BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2;
- (void)didMoveToWindow;
- (void)dealloc;
- (id)initWithLinkedApplication:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end

