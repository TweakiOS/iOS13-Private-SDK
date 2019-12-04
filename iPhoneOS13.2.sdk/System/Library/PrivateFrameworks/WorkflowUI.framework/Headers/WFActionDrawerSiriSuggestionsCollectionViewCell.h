//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>



@class NSArray, NSString, UILabel, UIViewController, WFActionDrawerImage, WFActionDrawerImageLoadTask, WFCircularImageView, WFDragController, WFDragGestureRecognizer;
@protocol VCActionDonation;

@interface WFActionDrawerSiriSuggestionsCollectionViewCell : UICollectionViewCell <UIGestureRecognizerDelegate>
{
    NSString *_title;
    long long _cellType;
    id <VCActionDonation> _donation;
    WFDragGestureRecognizer *_dragRecognizer;
    WFDragController *_dragController;
    UIViewController *_containingViewController;
    WFCircularImageView *_imageView;
    WFActionDrawerImage *_image;
    WFActionDrawerImageLoadTask *_imageLoadTask;
    UILabel *_titleLabel;
    NSArray *_verticalStackConstraints;
    NSArray *_horizontalStackConstraints;
}

+ (double)spacingForType:(long long)arg1;
+ (struct CGSize)sizeForCellUsingVerticalStacking:(_Bool)arg1;
+ (struct CGSize)preferredSizeForType:(long long)arg1 forTraitCollection:(id)arg2;
+ (_Bool)shouldStackVerticallyForTraitCollection:(id)arg1;
@property(retain, nonatomic) NSArray *horizontalStackConstraints; // @synthesize horizontalStackConstraints=_horizontalStackConstraints;
@property(retain, nonatomic) NSArray *verticalStackConstraints; // @synthesize verticalStackConstraints=_verticalStackConstraints;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) WFActionDrawerImageLoadTask *imageLoadTask; // @synthesize imageLoadTask=_imageLoadTask;
@property(retain, nonatomic) WFActionDrawerImage *image; // @synthesize image=_image;
@property(nonatomic) __weak WFCircularImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) __weak UIViewController *containingViewController; // @synthesize containingViewController=_containingViewController;
@property(readonly, nonatomic) WFDragController *dragController; // @synthesize dragController=_dragController;
@property(nonatomic) __weak WFDragGestureRecognizer *dragRecognizer; // @synthesize dragRecognizer=_dragRecognizer;
@property(readonly, nonatomic) id <VCActionDonation> donation; // @synthesize donation=_donation;
@property(readonly, nonatomic) long long cellType; // @synthesize cellType=_cellType;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (_Bool)shouldStackVerticallyForTraitCollection:(id)arg1;
- (void)prepareForReuse;
- (void)setImage:(id)arg1 animated:(_Bool)arg2;
- (void)loadImageForInteractionDonation:(id)arg1;
- (void)configureWithCellType:(long long)arg1 title:(id)arg2 donation:(id)arg3 genericAction:(id)arg4 forDailyRoutines:(_Bool)arg5;
- (void)traitCollectionDidChange:(id)arg1;
- (void)adjustStackingStyle;
- (void)setUpLayoutConstraints;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

