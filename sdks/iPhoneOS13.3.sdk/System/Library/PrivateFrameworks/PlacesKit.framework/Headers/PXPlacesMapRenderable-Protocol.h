//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSOrderedSet;
@protocol PXPlacesMapRenderer, PXPlacesMapSelectionHandler;

@protocol PXPlacesMapRenderable <NSObject>
@property(nonatomic) long long index;
@property(retain) NSOrderedSet *geotaggables;
@property __weak id <PXPlacesMapSelectionHandler> selectionHandler;
@property __weak id <PXPlacesMapRenderer> renderer;
@end
