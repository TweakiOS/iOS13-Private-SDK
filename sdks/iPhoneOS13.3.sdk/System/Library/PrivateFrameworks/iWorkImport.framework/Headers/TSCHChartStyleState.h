//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSCHPropertyValueStorageContainer.h>


@class NSMutableArray, NSMutableDictionary, TSCHChartStyle, TSCHLegendStyle, TSCHReferenceLineStyle;

__attribute__((visibility("hidden")))
@interface TSCHChartStyleState : TSCHPropertyValueStorageContainer <NSCopying>
{
    TSCHChartStyleState *_themeChartStyleState;
}

+ (id)styleState;
@property(retain, nonatomic) TSCHChartStyleState *themeChartStyleState; // @synthesize themeChartStyleState=_themeChartStyleState;
// - (void).cxx_destruct;
- (id)fallbackSemanticUsageForSemanticUsage:(id)arg1;
- (id)fallbackSemanticTagForSemanticTag:(id)arg1;
- (void)replaceStylesUsingBlock:(id /* CDUnknownBlockType */)arg1;
- (void)setStyle:(id)arg1 withSemanticTag:(id)arg2;
- (id)styleToUseForSemanticTag:(id)arg1;
- (id)styleForSemanticTag:(id)arg1;
- (id)styleLookupSemanticTagForSemanticTag:(id)arg1;
- (id)semanticUsagesOfParagraphStylePropertiesWithPropertySetType:(long long)arg1;
- (id)semanticUsagesToParagraphStyleMapWithPropertySetType:(long long)arg1 filteredBySemanticUsages:(id)arg2;
- (void)enumerateSemanticTagsAndUsagesWithPropertySetType:(long long)arg1 usingBlock:(id /* CDUnknownBlockType */)arg2;
- (id)styleToSemanticTagsMap;
- (id)semanticTagToStyleMap;
- (id)stateByReducingSeriesPrivateStylesAndReferenceLineStyles;
- (id)stateByExpandingForSeriesCount:(NSUInteger)arg1 andReferenceLineCount:(NSUInteger)arg2;
- (id)stateByReducingReferenceLineStyles;
- (id)stateByExpandingReferenceLineStylesForCount:(NSUInteger)arg1;
- (id)stateByReducingSeriesPrivateStyles;
- (id)stateByExpandingSeriesStylesForSeriesCount:(NSUInteger)arg1;
- (BOOL)otherStateIsEquivalent:(id)arg1;
- (BOOL)otherStateIsEquivalent:(id)arg1 ignoringSeriesThemeStyles:(BOOL)arg2;
- (void)replaceAllInstancesOfStyle:(id)arg1 withStyle:(id)arg2;
- (id)applyStyleSwapTuple:(id)arg1 ignoringBeforeValues:(BOOL)arg2;
- (id)applyStyleSwapTuple:(id)arg1;
- (BOOL)paragraphStyleIndexesAreValid;
- (id)usesOfParagraphStylePropertiesWithPropertySetType:(long long)arg1;
- (id)p_propertySetWithPropertySetType:(long long)arg1 forStyle:(id)arg2;
- (id)stylesheet;
- (id)allStyles;
@property(readonly, retain, nonatomic) TSCHChartStyleState *stateForParentStyleLookup;
@property(retain, nonatomic) TSCHReferenceLineStyle *referenceLineThemeStyle; // @dynamic referenceLineThemeStyle;
@property(copy, nonatomic) NSMutableDictionary *referenceLineStyles; // @dynamic referenceLineStyles;
@property(copy, nonatomic) NSMutableArray *paragraphStyles; // @dynamic paragraphStyles;
@property(copy, nonatomic) NSMutableArray *seriesPrivateStyles; // @dynamic seriesPrivateStyles;
@property(copy, nonatomic) NSMutableArray *seriesThemeStyles; // @dynamic seriesThemeStyles;
@property(copy, nonatomic) NSMutableArray *categoryAxisStyles; // @dynamic categoryAxisStyles;
@property(copy, nonatomic) NSMutableArray *valueAxisStyles; // @dynamic valueAxisStyles;
@property(retain, nonatomic) TSCHLegendStyle *legendStyle; // @dynamic legendStyle;
@property(retain, nonatomic) TSCHChartStyle *chartStyle; // @dynamic chartStyle;
- (id)description;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)checkParagraphStyleIndicies;
- (id)listOfStyles;
- (id)styleNetworkDescription;
- (id)p_formatSemanticTag:(id)arg1;
- (id)p_locationOfStyleInNetwork:(id)arg1;
- (id)stateByAdoptingStylesheet:(id)arg1 withMapper:(id)arg2;
- (id)stateByOptimizingParagraphStyleTableWithStylesheet:(id)arg1 withMapper:(id)arg2;
- (void)p_addParagraphStyleForSemanticUsage:(id)arg1 mappedStyle:(id)arg2 mappedState:(id)arg3 fromPriorStyle:(id)arg4 andPriorState:(id)arg5 maintainPriorIndex:(BOOL)arg6 withStyleMapper:(id)arg7 withStylesheet:(id)arg8 toNewParagraphStylesTable:(id)arg9 andStyleMap:(id)arg10;
- (id)stateByOptimizingParagraphStyleTableWithStylesheet:(id)arg1;

@end
