//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class PTRow;

@protocol PTRowObserver <NSObject>

@optional
- (void)rowDidReload:(PTRow *)arg1;
- (void)rowDidChangeImage:(PTRow *)arg1;
- (void)rowDidChangeTitle:(PTRow *)arg1;
- (void)rowDidChangeValue:(PTRow *)arg1;
@end

