//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface AVTCoreModelFramingModeOverrides : NSObject
{
    NSArray *_orderedTags;
    NSArray *_orderedFramingModeOverrides;
}

@property(readonly, nonatomic) NSArray *orderedFramingModeOverrides; // @synthesize orderedFramingModeOverrides=_orderedFramingModeOverrides;
@property(readonly, nonatomic) NSArray *orderedTags; // @synthesize orderedTags=_orderedTags;
// - (void).cxx_destruct;
- (id)initWithCameraOverrides:(id)arg1;

@end

