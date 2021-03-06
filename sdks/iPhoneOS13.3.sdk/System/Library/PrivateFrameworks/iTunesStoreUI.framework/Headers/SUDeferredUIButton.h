//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIButton.h>

#import <iTunesStoreUI/SUDeferredUIView-Protocol.h>

@class NSMutableDictionary;

@interface SUDeferredUIButton : UIButton <SUDeferredUIView>
{
    BOOL _deferredEnabled;
    CGRect _deferredFrame;
    NSMutableDictionary *_deferredImages;
    NSMutableDictionary *_deferredTitles;
    BOOL _isDeferringInterfaceUpdates;
}

- (void)_saveTitlesAsDeferred;
- (void)_saveImagesAsDeferred;
- (void)_saveCurrentStateAsDeferred;
- (void)_commitDeferredInterfaceUpdates;
- (id)titleForState:(NSUInteger)arg1;
- (void)setTitle:(id)arg1 forState:(NSUInteger)arg2;
- (void)setImage:(id)arg1 forState:(NSUInteger)arg2;
- (void)setFrame:(CGRect)arg1;
- (void)setEnabled:(BOOL)arg1;
- (id)imageForState:(NSUInteger)arg1;
- (BOOL)isEnabled;
- (CGRect)frame;
@property(nonatomic, getter=isDeferringInterfaceUpdates) BOOL deferringInterfaceUpdates;
- (void)dealloc;

@end

