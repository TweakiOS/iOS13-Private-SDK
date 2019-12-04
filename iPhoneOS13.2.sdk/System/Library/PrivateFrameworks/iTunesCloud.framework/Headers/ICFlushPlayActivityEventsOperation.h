//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iTunesCloud/ICAsyncOperation.h>

@class NSObject, SSVPlayActivityController;
@protocol OS_dispatch_queue;

@interface ICFlushPlayActivityEventsOperation : ICAsyncOperation
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    SSVPlayActivityController *_playActivityController;
}

@property(readonly, nonatomic) SSVPlayActivityController *playActivityController; // @synthesize playActivityController=_playActivityController;
- (void)execute;
- (id)initWithPlayActivityController:(id)arg1;
- (id)init;

@end
