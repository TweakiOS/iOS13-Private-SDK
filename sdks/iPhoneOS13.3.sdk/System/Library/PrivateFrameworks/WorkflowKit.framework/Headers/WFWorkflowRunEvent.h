//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/WFRecord.h>

@class NSDate, NSString;

@interface WFWorkflowRunEvent : WFRecord
{
    NSString *_source;
    NSDate *_date;
    NSString *_triggerID;
    long long _outcome;
}

@property(readonly, nonatomic) long long outcome; // @synthesize outcome=_outcome;
@property(readonly, copy, nonatomic) NSString *triggerID; // @synthesize triggerID=_triggerID;
@property(readonly, nonatomic) NSDate *date; // @synthesize date=_date;
@property(readonly, nonatomic) NSString *source; // @synthesize source=_source;
// - (void).cxx_destruct;

@end
