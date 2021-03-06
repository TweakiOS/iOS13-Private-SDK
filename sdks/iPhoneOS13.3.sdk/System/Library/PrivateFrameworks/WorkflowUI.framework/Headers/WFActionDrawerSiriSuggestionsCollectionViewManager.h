//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WorkflowUI/MPMediaPickerControllerDelegate-Protocol.h>

@class INIntent, NSArray, NSString, UICollectionView, UIViewController, WFAction;
@protocol WFActionDrawerSiriSuggestionsCollectionViewManagerDelegate;

@interface WFActionDrawerSiriSuggestionsCollectionViewManager : NSObject <UICollectionViewDelegateFlowLayout, MPMediaPickerControllerDelegate, UICollectionViewDataSource, UICollectionViewDelegate>
{
    BOOL _configuredForDailyRoutines;
    id <WFActionDrawerSiriSuggestionsCollectionViewManagerDelegate> _delegate;
    long long _cellType;
    UIViewController *_containingViewController;
    NSArray *_donations;
    UICollectionView *_collectionView;
    NSArray *_actions;
    WFAction *_genericAction;
    INIntent *_genericIntent;
    NSString *_genericActionParameterTitle;
}

@property(copy, nonatomic) NSString *genericActionParameterTitle; // @synthesize genericActionParameterTitle=_genericActionParameterTitle;
@property(retain, nonatomic) INIntent *genericIntent; // @synthesize genericIntent=_genericIntent;
@property(retain, nonatomic) WFAction *genericAction; // @synthesize genericAction=_genericAction;
@property(copy, nonatomic) NSArray *actions; // @synthesize actions=_actions;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(copy, nonatomic) NSArray *donations; // @synthesize donations=_donations;
@property(nonatomic) BOOL configuredForDailyRoutines; // @synthesize configuredForDailyRoutines=_configuredForDailyRoutines;
@property(nonatomic) __weak UIViewController *containingViewController; // @synthesize containingViewController=_containingViewController;
@property(nonatomic) long long cellType; // @synthesize cellType=_cellType;
@property(nonatomic) __weak id <WFActionDrawerSiriSuggestionsCollectionViewManagerDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)_configureCell:(id)arg1 withGenericIntent:(id)arg2 cellType:(long long)arg3 genericParameterTitle:(id)arg4;
- (void)_configureCell:(id)arg1 withDonation:(id)arg2 cellType:(long long)arg3;
- (void)mediaPicker:(id)arg1 didPickMediaItems:(id)arg2;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint )arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)showPodcastPicker;
- (void)showMusicPicker;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (id)initWithCollectionView:(id)arg1 cellType:(long long)arg2 donations:(id)arg3 actions:(id)arg4;

@end

