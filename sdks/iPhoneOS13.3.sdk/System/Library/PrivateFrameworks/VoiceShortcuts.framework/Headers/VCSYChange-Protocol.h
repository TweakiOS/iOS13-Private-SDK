//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VoiceShortcuts/SYChange-Protocol.h>
#import <VoiceShortcuts/VCPBCodable-Protocol.h>
#import <VoiceShortcuts/VCPBMessageTyped-Protocol.h>

@class NSString;

@protocol VCSYChange <VCPBCodable, VCPBMessageTyped, SYChange>
@property(readonly, nonatomic) long long changeType;
@property(readonly, nonatomic) NSString *objectIdentifier;
- (id)initWithObjectIdentifier:(NSString *)arg1 changeType:(long long)arg2;
@end
