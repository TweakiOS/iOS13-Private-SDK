//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDSFoundation/CUTMetricLogger-Protocol.h>

@class NSString;

@interface IDSCoreAnalyticsLogger : NSObject <CUTMetricLogger>
{
    NSString *_domain;
}

+ (id)defaultLogger;
@property(readonly, nonatomic) NSString *domain; // @synthesize domain=_domain;
// - (void).cxx_destruct;
- (void)logMetric:(id)arg1;
- (id)initWithDomain:(id)arg1;

@end
