//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/_DUIClientSessionCommon-Protocol.h>

@class BKSAnimationFenceHandle, NSArray, NSXPCListenerEndpoint, PBItemCollection;

@protocol _DUIClientSessionDestination <_DUIClientSessionCommon>
- (oneway void)dragEnded;
- (oneway void)handOffDroppedItems:(NSArray *)arg1 withFence:(BKSAnimationFenceHandle *)arg2;
- (oneway void)performDropWithItemCollection:(PBItemCollection *)arg1 dataProviderEndpoint:(NSXPCListenerEndpoint *)arg2 visibleDroppedItems:(NSArray *)arg3 reply:(void (^)(void))arg4;
- (oneway void)addedItemCollection:(PBItemCollection *)arg1;
@end
