//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/SKUIPageComponent.h>

@class NSArray;

@interface SKUIGalleryPageComponent : SKUIPageComponent
{
    NSArray *_childComponents;
    double _cycleInterval;
    BOOL _hidesPageIndicator;
}

@property(nonatomic) BOOL hidesPageIndicator; // @synthesize hidesPageIndicator=_hidesPageIndicator;
@property(nonatomic) double cycleInterval; // @synthesize cycleInterval=_cycleInterval;
@property(readonly, nonatomic) NSArray *childComponents; // @synthesize childComponents=_childComponents;
// - (void).cxx_destruct;
- (id)metricsElementName;
- (long long)componentType;
- (id)initWithCustomPageContext:(id)arg1;

@end

