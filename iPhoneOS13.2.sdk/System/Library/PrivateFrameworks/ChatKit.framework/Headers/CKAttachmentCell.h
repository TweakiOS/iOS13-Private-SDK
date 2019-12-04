//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import <ChatKit/CKAnimationTimerObserver-Protocol.h>


@class CKAnimatedImage, CKAttachmentItem, NSArray, NSObject, NSString, UIImage, UIImageView, UITapGestureRecognizer;
@protocol CKAttachmentCellDelegate;

__attribute__((visibility("hidden")))
@interface CKAttachmentCell : UICollectionViewCell <CKAnimationTimerObserver, UIGestureRecognizerDelegate>
{
    _Bool _editing;
    _Bool _isIrisAsset;
    UIImage *_image;
    CKAnimatedImage *_animatedImage;
    UIImageView *_checkmarkView;
    NSObject<CKAttachmentCellDelegate> *_delegate;
    CKAttachmentItem *_representedObject;
    NSArray *_frames;
    UITapGestureRecognizer *_tapRecognizer;
    UIImageView *_irisBadgeView;
}

@property(retain, nonatomic) UIImageView *irisBadgeView; // @synthesize irisBadgeView=_irisBadgeView;
@property(retain, nonatomic) UITapGestureRecognizer *tapRecognizer; // @synthesize tapRecognizer=_tapRecognizer;
@property(copy, nonatomic) NSArray *frames; // @synthesize frames=_frames;
@property(nonatomic) _Bool isIrisAsset; // @synthesize isIrisAsset=_isIrisAsset;
@property(nonatomic, getter=isEditing) _Bool editing; // @synthesize editing=_editing;
@property(retain, nonatomic) CKAttachmentItem *representedObject; // @synthesize representedObject=_representedObject;
@property(nonatomic) __weak NSObject<CKAttachmentCellDelegate> *delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIImageView *checkmarkView; // @synthesize checkmarkView=_checkmarkView;
@property(retain, nonatomic) CKAnimatedImage *animatedImage; // @synthesize animatedImage=_animatedImage;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)animationTimerFired:(unsigned long long)arg1;
- (void)updateAnimationTimerObserving;
- (struct CGImage *)_cgImageForUIImage:(id)arg1;
@property(retain, nonatomic) UIImage *iconImage;
- (void)saveAttachment:(id)arg1;
- (void)more:(id)arg1;
- (void)delete:(id)arg1;
- (void)copy:(id)arg1;
- (void)tapGestureRecognized:(id)arg1;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)setSelected:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

