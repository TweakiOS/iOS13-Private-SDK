//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class AVTAvatarManagedRecord, AVTAvatarRecord, NSString, NSUUID;

@protocol AVTAvatarManagedRecordTransformer
- (AVTAvatarRecord *)recordWithManagedRecord:(AVTAvatarManagedRecord *)arg1 error:(id )arg2;
- (void)updateManagedRecord:(AVTAvatarManagedRecord *)arg1 withRecord:(AVTAvatarRecord *)arg2;
- (NSString *)identifierForManagedRecordIdentifier:(NSUUID *)arg1;
- (NSUUID *)managedRecordIdentifierForIdentifier:(NSString *)arg1;
@end

