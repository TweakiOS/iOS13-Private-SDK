//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardHome/SBIconObserver-Protocol.h>

@class SBFolderIcon, SBIcon;

@protocol SBFolderIconObserver <SBIconObserver>

@optional
- (void)folderIcon:(SBFolderIcon *)arg1 containedIconLaunchEnabledDidChange:(SBIcon *)arg2;
- (void)folderIcon:(SBFolderIcon *)arg1 containedIconAccessoriesDidUpdate:(SBIcon *)arg2;
- (void)folderIcon:(SBFolderIcon *)arg1 containedIconImageDidUpdate:(SBIcon *)arg2;
@end

