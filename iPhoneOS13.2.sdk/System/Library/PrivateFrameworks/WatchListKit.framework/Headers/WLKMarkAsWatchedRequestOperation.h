//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WatchListKit/WLKUTSNetworkRequestOperation.h>

@class NSString;

@interface WLKMarkAsWatchedRequestOperation : WLKUTSNetworkRequestOperation
{
    NSString *_itemID;
    NSString *_brandID;
}

@property(readonly, copy, nonatomic) NSString *brandID; // @synthesize brandID=_brandID;
@property(readonly, copy, nonatomic) NSString *itemID; // @synthesize itemID=_itemID;
- (id)initWithItemID:(id)arg1 itemType:(id)arg2 brandID:(id)arg3 caller:(id)arg4;

@end
