//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class AFNotifyObserver;

@protocol AFNotifyObserverDelegate 

@optional
- (void)notifyObserver:(AFNotifyObserver *)arg1 didChangeStateFrom:(unsigned long long)arg2 to:(unsigned long long)arg3;
- (void)notifyObserver:(AFNotifyObserver *)arg1 didReceiveNotificationWithToken:(int)arg2;
@end
