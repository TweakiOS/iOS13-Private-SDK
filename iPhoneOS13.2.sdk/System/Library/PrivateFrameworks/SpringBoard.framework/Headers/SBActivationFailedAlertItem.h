//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpringBoardUI/SBAlertItem.h>

@interface SBActivationFailedAlertItem : SBAlertItem
{
    _Bool _showRetryButton;
    _Bool _showSupportNumber;
    long long _slot;
}

- (_Bool)suppressForKeynote;
- (void)configure:(_Bool)arg1 requirePasscodeForActions:(_Bool)arg2;
- (void)performUnlockAction;
- (id)initWithFailureCount:(int)arg1 slot:(long long)arg2;

@end
