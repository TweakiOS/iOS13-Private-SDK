//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class VCDailyMetricCheckIn, WFDailyStatusEvent;
@protocol VCDatabaseProvider;

@interface VCDailyMetricSubmitter : NSObject
{
    VCDailyMetricCheckIn *_dailyCheckIn;
    WFDailyStatusEvent *_event;
    id <VCDatabaseProvider> _databaseProvider;
}

+ (void)performWithDatabaseProvider:(id)arg1;
+ (void)scheduleWithScheduler:(id)arg1 databaseProvider:(id)arg2;
+ (void)scheduleWithDatabaseProvider:(id)arg1;
@property(readonly, nonatomic) id <VCDatabaseProvider> databaseProvider; // @synthesize databaseProvider=_databaseProvider;
@property(readonly, nonatomic) WFDailyStatusEvent *event; // @synthesize event=_event;
@property(readonly, nonatomic) VCDailyMetricCheckIn *dailyCheckIn; // @synthesize dailyCheckIn=_dailyCheckIn;
- (_Bool)homeAutomationsPresent:(id *)arg1;
- (_Bool)personalAutomationsPresent:(id *)arg1;
- (_Bool)isSharingEnabled;
- (_Bool)isAppInstalled;
- (void)perform;
- (id)initWithDailyCheckIn:(id)arg1 event:(id)arg2 databaseProvider:(id)arg3;
- (id)initWithDatabaseProvider:(id)arg1;

@end
