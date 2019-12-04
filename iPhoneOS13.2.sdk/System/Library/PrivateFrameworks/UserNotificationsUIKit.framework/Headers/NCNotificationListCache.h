//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UserNotificationsUIKit/PLContentSizeCategoryAdjusting-Protocol.h>

@class NSMutableDictionary, NSMutableSet, NSString;

@interface NCNotificationListCache : NSObject <PLContentSizeCategoryAdjusting>
{
    _Bool _adjustsFontForContentSizeCategory;
    NSMutableDictionary *_contentRevealedCellHeightCache;
    NSMutableDictionary *_contentRevealedWithSummaryCellHeightCache;
    NSMutableDictionary *_contentHiddenCellHeightCache;
    NSMutableSet *_notificationListCellCache;
    NSMutableSet *_notificationListCoalescingHeaderCache;
    NSMutableSet *_notificationListCoalescingControlsCache;
    NSMutableDictionary *_notificationListCellsForRequests;
}

@property(retain, nonatomic) NSMutableDictionary *notificationListCellsForRequests; // @synthesize notificationListCellsForRequests=_notificationListCellsForRequests;
@property(retain, nonatomic) NSMutableSet *notificationListCoalescingControlsCache; // @synthesize notificationListCoalescingControlsCache=_notificationListCoalescingControlsCache;
@property(retain, nonatomic) NSMutableSet *notificationListCoalescingHeaderCache; // @synthesize notificationListCoalescingHeaderCache=_notificationListCoalescingHeaderCache;
@property(retain, nonatomic) NSMutableSet *notificationListCellCache; // @synthesize notificationListCellCache=_notificationListCellCache;
@property(retain, nonatomic) NSMutableDictionary *contentHiddenCellHeightCache; // @synthesize contentHiddenCellHeightCache=_contentHiddenCellHeightCache;
@property(retain, nonatomic) NSMutableDictionary *contentRevealedWithSummaryCellHeightCache; // @synthesize contentRevealedWithSummaryCellHeightCache=_contentRevealedWithSummaryCellHeightCache;
@property(retain, nonatomic) NSMutableDictionary *contentRevealedCellHeightCache; // @synthesize contentRevealedCellHeightCache=_contentRevealedCellHeightCache;
@property(nonatomic) _Bool adjustsFontForContentSizeCategory; // @synthesize adjustsFontForContentSizeCategory=_adjustsFontForContentSizeCategory;
- (void)_clearAllHeightCaches;
- (id)_cachedNotificationListCellForRequest:(id)arg1 viewControllerDelegate:(id)arg2 shouldConfigure:(_Bool)arg3;
- (id)_cachedHeaderCellWithTitle:(id)arg1;
- (id)_newCellForNotificationRequest:(id)arg1 viewControllerDelegate:(id)arg2;
- (_Bool)adjustForContentSizeCategoryChange;
- (void)recycleNotificationListCoalescingControlsCell:(id)arg1;
- (id)coalescingControlsCellWithWidth:(double)arg1;
- (void)recycleNotificationListCoalescingHeaderCell:(id)arg1;
- (id)coalescingHeaderCellWithTitle:(id)arg1 width:(double)arg2;
- (_Bool)recycleNotificationListCell:(id)arg1;
- (id)listCellForNotificationRequest:(id)arg1 viewControllerDelegate:(id)arg2 createNewIfNecessary:(_Bool)arg3 shouldConfigure:(_Bool)arg4;
- (double)heightForNotificationRequest:(id)arg1 withFrameWidth:(double)arg2 isContentRevealed:(_Bool)arg3 isShowingSummaryText:(_Bool)arg4 shouldCalculateHeight:(_Bool)arg5;
- (void)updateNotificationRequest:(id)arg1;
- (void)removeNotificationRequest:(id)arg1;
- (void)clearCachedHeightsForNotificationRequest:(id)arg1;
- (void)clearCacheForNotificationRequest:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(copy, nonatomic) NSString *preferredContentSizeCategory;
@property(readonly) Class superclass;

@end
