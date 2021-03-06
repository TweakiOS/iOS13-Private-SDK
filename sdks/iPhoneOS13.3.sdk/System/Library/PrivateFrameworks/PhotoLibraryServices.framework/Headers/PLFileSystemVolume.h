//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoLibraryServices/PLManagedObject.h>

@class NSURL;

@interface PLFileSystemVolume : PLManagedObject
{
    NSURL *_url;
}

+ (id)predictedURLForVolumeName:(id)arg1;
+ (id)volumeForObjectUUID:(id)arg1 context:(id)arg2;
+ (id)volumeForVolumeUUID:(id)arg1 context:(id)arg2;
+ (id)volumeForURL:(id)arg1 context:(id)arg2;
+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
+ (id)entityName;
// - (void).cxx_destruct;
- (id)predictedURL;
- (void)_unregisterWithVolumeManager;
- (void)_registerWithVolumeManager;
- (void)didTurnIntoFault;
- (void)willTurnIntoFault;
- (void)awakeFromFetch;
- (void)awakeFromInsert;
@property(readonly, nonatomic) BOOL isOffline;
@property(copy, nonatomic) NSURL *url;
- (BOOL)supportsCloudUpload;
- (id)payloadForChangedKeys:(id)arg1;
- (id)payloadIDForTombstone:(id)arg1;
- (id)payloadID;

@end

