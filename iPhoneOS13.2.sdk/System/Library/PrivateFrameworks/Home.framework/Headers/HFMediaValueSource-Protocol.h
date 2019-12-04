//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class HFPlaybackArchive, NAFuture, NSError, NSString;
@protocol HFMediaProfileContainer;

@protocol HFMediaValueSource 
- (NSError *)cachedPlaybackStateWriteErrorForRouteID:(NSString *)arg1;
- (_Bool)hasPendingWritesForRouteID:(NSString *)arg1;
- (NAFuture *)writePlaybackState:(long long)arg1 playbackArchive:(HFPlaybackArchive *)arg2 forRouteID:(NSString *)arg3;
- (long long)lastPlaybackStateForProfileForRouteID:(NSString *)arg1;
- (id <HFMediaProfileContainer>)mediaProfileContainerForRouteID:(NSString *)arg1;
@end
