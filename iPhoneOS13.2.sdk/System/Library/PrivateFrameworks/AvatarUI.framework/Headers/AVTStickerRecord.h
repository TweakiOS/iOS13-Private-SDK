//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AvatarUI/AVTStickerRecord-Protocol.h>



@class NSNumber, NSString;

@interface AVTStickerRecord : NSObject <AVTStickerRecord, NSSecureCoding, NSCopying>
{
    NSString *_identifier;
    NSString *_avatarRecordIdentifier;
    NSString *_stickerConfigurationIdentifier;
    NSNumber *_frequencySum;
    NSNumber *_serializationVersion;
}

+ (_Bool)supportsSecureCoding;
+ (id /* block */)matchingIdentifierTest:(id)arg1;
@property(readonly, nonatomic) NSNumber *serializationVersion; // @synthesize serializationVersion=_serializationVersion;
@property(readonly, nonatomic) NSNumber *frequencySum; // @synthesize frequencySum=_frequencySum;
@property(readonly, copy, nonatomic) NSString *stickerConfigurationIdentifier; // @synthesize stickerConfigurationIdentifier=_stickerConfigurationIdentifier;
@property(readonly, copy, nonatomic) NSString *avatarRecordIdentifier; // @synthesize avatarRecordIdentifier=_avatarRecordIdentifier;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 avatarRecordIdentifier:(id)arg2 stickerConfigurationIdentifier:(id)arg3 frequencySum:(id)arg4 serializationVersion:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
