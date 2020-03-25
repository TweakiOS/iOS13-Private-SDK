//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionView.h>

@interface CKEditableCollectionView : UICollectionView
{
    BOOL _editing;
    UIEdgeInsets _marginInsets;
}

@property(nonatomic, getter=isEditing) BOOL editing; // @synthesize editing=_editing;
@property(nonatomic) UIEdgeInsets marginInsets; // @synthesize marginInsets=_marginInsets;
- (UIEdgeInsets)safeAreaInsets;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (id)dequeueReusableCellWithReuseIdentifier:(id)arg1 forIndexPath:(id)arg2;
- (id)initWithFrame:(CGRect)arg1 collectionViewLayout:(id)arg2;

@end
