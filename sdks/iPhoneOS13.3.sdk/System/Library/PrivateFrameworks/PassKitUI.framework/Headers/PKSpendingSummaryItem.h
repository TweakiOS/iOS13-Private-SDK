//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitUI/PKDashboardItem-Protocol.h>

@class PKSpendingSummary;

@interface PKSpendingSummaryItem : NSObject <PKDashboardItem>
{
    PKSpendingSummary *_spendingSummary;
}

@property(retain, nonatomic) PKSpendingSummary *spendingSummary; // @synthesize spendingSummary=_spendingSummary;
// - (void).cxx_destruct;
@property(readonly) NSUInteger hash;
- (BOOL)isEqual:(id)arg1;

@end

