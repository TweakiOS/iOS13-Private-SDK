//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol TUCallHistoryManagerDataSource;

@interface TUCallHistoryManager : NSObject
{
    id <TUCallHistoryManagerDataSource> _dataSource;
}

@property(readonly, nonatomic) id <TUCallHistoryManagerDataSource> dataSource; // @synthesize dataSource=_dataSource;
// - (void).cxx_destruct;
- (void)updateOutgoingLocalParticipantUUID:(id)arg1 forCallsWithOutgoingLocalParticipantUUID:(id)arg2;
- (void)updateOutgoingLocalParticipantUUID:(id)arg1 forCallsWithLocalParticipantUUID:(id)arg2;
- (void)dealloc;
- (id)initWithDataSource:(id)arg1;
- (id)init;

@end
