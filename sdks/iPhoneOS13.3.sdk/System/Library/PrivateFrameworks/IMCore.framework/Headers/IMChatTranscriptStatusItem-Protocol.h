//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IMCore/IMChatTranscriptItem-Protocol.h>

@class NSDate;

@protocol IMChatTranscriptStatusItem <IMChatTranscriptItem>
@property(readonly, nonatomic) NSDate *dateOfStatus;
@property(readonly, nonatomic) long long expireStatusType;
@property(readonly, nonatomic) long long statusType;
@end

