//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UITargetedDragPreview, _UIPlatterView;

__attribute__((visibility("hidden")))
@interface _UIDragLiftedItem : NSObject
{
    BOOL _sourceViewWasAdded;
    _UIPlatterView *_platterView;
    UITargetedDragPreview *_targetedPreview;
    double _liftAlpha;
}

@property(nonatomic) double liftAlpha; // @synthesize liftAlpha=_liftAlpha;
@property(nonatomic) BOOL sourceViewWasAdded; // @synthesize sourceViewWasAdded=_sourceViewWasAdded;
@property(retain, nonatomic) UITargetedDragPreview *targetedPreview; // @synthesize targetedPreview=_targetedPreview;
@property(retain, nonatomic) _UIPlatterView *platterView; // @synthesize platterView=_platterView;
// - (void).cxx_destruct;

@end
