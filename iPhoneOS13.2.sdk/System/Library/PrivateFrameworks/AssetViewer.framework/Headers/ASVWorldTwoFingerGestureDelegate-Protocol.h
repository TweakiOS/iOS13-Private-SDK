//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AssetViewer/ASVTwoFingerGestureDelegate-Protocol.h>
#import <AssetViewer/ASVWorldGestureDelegate-Protocol.h>

@class ASVGesture;

@protocol ASVWorldTwoFingerGestureDelegate <ASVWorldGestureDelegate, ASVTwoFingerGestureDelegate>
- (void)gestureEndedLevitation:(ASVGesture *)arg1;
- (void)gesture:(ASVGesture *)arg1 levitatedAssetToScreenPoint: /* Error: Ran out of types for this method. */;
- (void)gestureBeganLevitation:(ASVGesture *)arg1;
@end
