//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class NSArray, SXComponentInsert;
@protocol SXBlueprintMarker, SXComponentInsertionConditionEngine, SXComponentInsertionLayoutProvider, SXDOMObjectProviding;

@protocol SXComponentInserter 
- (SXComponentInsert *)componentInsertForMarker:(id <SXBlueprintMarker>)arg1 DOMObjectProvider:(id <SXDOMObjectProviding>)arg2 layoutProvider:(id <SXComponentInsertionLayoutProvider>)arg3;
- (_Bool)validateMarker:(id <SXBlueprintMarker>)arg1 DOMObjectProvider:(id <SXDOMObjectProviding>)arg2 layoutProvider:(id <SXComponentInsertionLayoutProvider>)arg3;
- (NSArray *)conditionsForDOMObjectProvider:(id <SXDOMObjectProviding>)arg1;
@property(nonatomic, readonly) unsigned long long componentTraits;
@property(nonatomic, readonly) id <SXComponentInsertionConditionEngine> conditionEngine;

@optional
- (void)componentInsertionCompleted;
@end
