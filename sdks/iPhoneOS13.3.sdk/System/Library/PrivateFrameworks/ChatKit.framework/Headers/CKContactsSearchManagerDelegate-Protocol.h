//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class CKContactsSearchManager, NSArray;

@protocol CKContactsSearchManagerDelegate <NSObject>
@property(nonatomic) BOOL shouldHideGroupsDonations;
- (NSArray *)conversationCacheForContactsSearchManager:(CKContactsSearchManager *)arg1;
- (void)contactsSearchManager:(CKContactsSearchManager *)arg1 finishedSearchingWithResults:(NSArray *)arg2;
@end

