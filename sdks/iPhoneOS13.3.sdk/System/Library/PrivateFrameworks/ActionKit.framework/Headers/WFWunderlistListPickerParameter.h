//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/WFEnumerationParameter.h>

@class NSArray, WFAccountAccessResource;

@interface WFWunderlistListPickerParameter : WFEnumerationParameter
{
    BOOL _hasLoadedLists;
    NSArray *_possibleStates;
    WFAccountAccessResource *_accessResource;
}

@property(nonatomic) BOOL hasLoadedLists; // @synthesize hasLoadedLists=_hasLoadedLists;
@property(nonatomic) __weak WFAccountAccessResource *accessResource; // @synthesize accessResource=_accessResource;
- (id)possibleStates;
// - (void).cxx_destruct;
- (void)dealloc;
- (id)listNamed:(id)arg1;
- (id)lists;
- (void)setLists:(id)arg1;
- (id)localizedLabelForPossibleState:(id)arg1;
- (id)defaultSerializedRepresentation;
- (void)loadListsFromCache;
- (void)fetchListsIfNeeded;
- (void)wasAddedToWorkflow;

@end

