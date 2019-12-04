//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/_UIStatusBarItem.h>

@class _UIStatusBarImageView, _UIStatusBarStringView, _UIStatusBarWifiSignalView;

__attribute__((visibility("hidden")))
@interface _UIStatusBarWifiItem : _UIStatusBarItem
{
    _UIStatusBarWifiSignalView *_signalView;
    _UIStatusBarImageView *_networkIconView;
    _UIStatusBarStringView *_rawStringView;
}

+ (id)rawDisplayIdentifier;
+ (id)iconDisplayIdentifier;
+ (id)signalStrengthDisplayIdentifier;
+ (id)groupWithPriority:(long long)arg1;
@property(retain, nonatomic) _UIStatusBarStringView *rawStringView; // @synthesize rawStringView=_rawStringView;
@property(retain, nonatomic) _UIStatusBarImageView *networkIconView; // @synthesize networkIconView=_networkIconView;
@property(retain, nonatomic) _UIStatusBarWifiSignalView *signalView; // @synthesize signalView=_signalView;
- (id)viewForIdentifier:(id)arg1;
- (void)_create_rawStringView;
- (void)_create_networkIconView;
- (void)_create_signalView;
- (id)applyUpdate:(id)arg1 toDisplayItem:(id)arg2;
- (id)_backgroundColorForUpdate:(id)arg1 entry:(id)arg2;
- (id)_fillColorForUpdate:(id)arg1 entry:(id)arg2;
- (double)_totalWidthForUpdate:(id)arg1;
- (double)_interspaceForUpdate:(id)arg1;
- (double)_barThicknessForUpdate:(id)arg1;
- (long long)_barCountForUpdate:(id)arg1;
- (id)dependentEntryKeys;

@end
