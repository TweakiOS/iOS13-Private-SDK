//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface _DKSyncMetadataStorage : NSObject
{
}

+ (id)eventFromStartDate:(id)arg1 endDate:(id)arg2 bookmarkStreamName:(id)arg3 transportName:(id)arg4;
+ (id)eventFromFetchedWindow:(id)arg1 windowStreamName:(id)arg2 transportName:(id)arg3;
+ (id)bookmarkStreamNameWithSourceDeviceID:(id)arg1;
+ (id)windowStreamNameWithSourceDeviceID:(id)arg1;

@end

