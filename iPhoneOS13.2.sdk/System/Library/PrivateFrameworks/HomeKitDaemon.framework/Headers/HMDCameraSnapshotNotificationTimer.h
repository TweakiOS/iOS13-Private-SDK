//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HMFoundation/HMFTimer.h>

@class NSArray, NSSet, NSString;

@interface HMDCameraSnapshotNotificationTimer : HMFTimer
{
    NSSet *_changedCharacteristics;
    NSString *_sessionID;
    NSArray *_postedBulletins;
}

@property(retain, nonatomic) NSArray *postedBulletins; // @synthesize postedBulletins=_postedBulletins;
@property(readonly, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
@property(readonly, nonatomic) NSSet *changedCharacteristics; // @synthesize changedCharacteristics=_changedCharacteristics;
- (id)initWithCameraSessionID:(id)arg1 changedCharacteristics:(id)arg2 timeInterval:(double)arg3;

@end
