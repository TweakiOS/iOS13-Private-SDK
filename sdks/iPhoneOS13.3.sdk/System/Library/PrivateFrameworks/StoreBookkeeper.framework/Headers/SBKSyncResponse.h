//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreBookkeeper/SBKResponse.h>

@class SBKSyncResponseData;

__attribute__((visibility("hidden")))
@interface SBKSyncResponse : SBKResponse
{
    SBKSyncResponseData *_syncResponseData;
}

+ (id)responseWithResponse:(id)arg1 transaction:(id)arg2;
@property(readonly) SBKSyncResponseData *syncResponseData; // @synthesize syncResponseData=_syncResponseData;
// - (void).cxx_destruct;
- (void)deserializeResponseBodyWithTransaction:(id)arg1;

@end

