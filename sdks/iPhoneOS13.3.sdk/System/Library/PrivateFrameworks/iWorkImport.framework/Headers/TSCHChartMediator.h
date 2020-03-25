//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/TSCHUnretainedParent-Protocol.h>

@class TSCHChartInfo, TSUIntToIntDictionary;
@protocol TSCHNotifyOnModify;

__attribute__((visibility("hidden")))
@interface TSCHChartMediator : NSObject <TSCHUnretainedParent, NSCopying>
{
    id <TSCHNotifyOnModify> mObjectToNotify;
    TSCHChartInfo *mChartInfo;
    TSUIntToIntDictionary *mRemoteSeriesIndexForGridSeriesIndex;
    TSUIntToIntDictionary *mGridSeriesIndexForRemoteSeriesIndex;
}

+ (id)propertiesThatInvalidateMediator;
@property(nonatomic) __weak id <TSCHNotifyOnModify> objectToNotify; // @synthesize objectToNotify=mObjectToNotify;
@property(nonatomic) __weak TSCHChartInfo *chartInfo; // @synthesize chartInfo=mChartInfo;
// - (void).cxx_destruct;
- (BOOL)preferSeriesToValues;
- (NSUInteger)p_gridSeriesIndexForRemoteSeriesIndex:(NSUInteger)arg1;
- (NSUInteger)p_remoteSeriesIndexForGridSeriesIndex:(NSUInteger)arg1;
- (id)commandToSetNewSeriesIndex:(NSUInteger)arg1 forSeriesIndex:(NSUInteger)arg2;
- (id)seriesDataFormulaForSeriesDimension:(id)arg1;
- (id)commandToSetSeriesDataFormula:(id)arg1 seriesDimension:(id)arg2;
- (id)errorBarCustomFormulaForSeriesIndex:(NSUInteger)arg1 dataType:(int)arg2;
- (id)commandToSetErrorBarCustomFormula:(id)arg1 seriesIndex:(NSUInteger)arg2 dataType:(int)arg3;
- (id)commandToChangeCategoryLabelFormulas:(id)arg1;
- (id)categoryLabelFormulas;
- (id)dataFormatterForSeries:(id)arg1 index:(NSUInteger)arg2 axisType:(int)arg3 documentRoot:(id)arg4;
- (id)dataFormatterForAxis:(id)arg1 documentRoot:(id)arg2;
- (id)commandToSetChartGridDirection:(int)arg1 documentRoot:(id)arg2;
- (void)invalidateAndSynchronizeMediator;
- (BOOL)hasTractReference;
- (BOOL)hasCategoryReferences;
- (void)resumeCalculationEngine;
- (void)pauseCalculationEngine;
- (BOOL)isEditing;
- (id)commandSetCategoryName:(id)arg1 forCategoryIndex:(NSUInteger)arg2;
- (id)commandToSetSeriesNameFormula:(id)arg1 seriesIndex:(NSUInteger)arg2;
- (id)seriesNameFormulaForSeriesIndex:(NSUInteger)arg1;
- (id)commandSetSeriesName:(id)arg1 forSeriesIndex:(NSUInteger)arg2;
- (void)updateGridWithSpec:(CDStruct_188655c5)arg1;
- (id)p_errorBarDataForSeries:(NSUInteger)arg1 withSpec:(CDStruct_188655c5)arg2 updateType:(int)arg3;
@property(readonly, nonatomic) int direction;
@property(readonly, nonatomic) BOOL isPhantom;
- (void)willModify;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)clearParent;
- (void)dealloc;
- (id)init;
- (id)initWithChartInfo:(id)arg1;
- (void)saveToArchive:(struct ChartMediatorArchive )arg1;
- (void)loadFromArchive:(const struct ChartMediatorArchive )arg1;
- (id)copyWithContext:(id)arg1;

@end
