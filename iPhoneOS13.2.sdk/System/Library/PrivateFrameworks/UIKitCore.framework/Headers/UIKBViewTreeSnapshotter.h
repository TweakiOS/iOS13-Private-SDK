//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, UIView;

__attribute__((visibility("hidden")))
@interface UIKBViewTreeSnapshotter : NSObject
{
    NSMutableArray *_inputViews;
    UIView *_snapshotView;
}

+ (id)snapshotterForKeyboardView:(id)arg1 afterScreenUpdates:(_Bool)arg2;
@property(readonly, nonatomic) UIView *snapshotView; // @synthesize snapshotView=_snapshotView;
- (void)dealloc;

@end
