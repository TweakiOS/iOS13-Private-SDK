//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthUI/HKDataMetadataSection.h>

@class HKHealthStore, HKSample, NSString;

@interface HKDataMetadataReportSection : HKDataMetadataSection
{
    HKSample *_sample;
    NSString *_detailedReportName;
    HKHealthStore *_healthStore;
}

@property(readonly, nonatomic) HKHealthStore *healthStore; // @synthesize healthStore=_healthStore;
@property(readonly, nonatomic) NSString *detailedReportName; // @synthesize detailedReportName=_detailedReportName;
@property(readonly, nonatomic) HKSample *sample; // @synthesize sample=_sample;
// - (void).cxx_destruct;
- (void)selectCellForIndex:(NSUInteger)arg1 navigationController:(id)arg2 animated:(BOOL)arg3;
- (id)cellForIndex:(NSUInteger)arg1 tableView:(id)arg2;
- (id)documentImageForXMLFiles;
- (NSUInteger)numberOfRowsInSection;
- (id)sectionTitle;
- (id)initWithSample:(id)arg1 healthStore:(id)arg2;

@end

