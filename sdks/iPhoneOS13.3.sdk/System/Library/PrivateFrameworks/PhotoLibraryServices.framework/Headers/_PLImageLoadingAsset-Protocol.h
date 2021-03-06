//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoLibraryServices/_PLThumbnailLoadingAsset-Protocol.h>

@class NSString, NSURL, PLManagedAsset, PLPhotoLibrary;

@protocol _PLImageLoadingAsset <_PLThumbnailLoadingAsset, NSObject>
- (NSUInteger)localResourcesState;
- (BOOL)isOriginalSRGB;
- (void)generateLargeThumbnailFileIfNecessary;
- (BOOL)isTimelapsePlaceholder;
- (PLManagedAsset *)managedAssetForPhotoLibrary:(PLPhotoLibrary *)arg1;
- (double)duration;
- (BOOL)isCloudPlaceholder;
- (BOOL)isCloudPhotoLibraryAsset;
- (long long)cloudSharedAssetPlaceholderKind;
- (BOOL)isCloudSharedAsset;
- (BOOL)isInFlight;
- (NSString *)pathForAdjustmentDataFile;
- (NSString *)pathForAdjustmentFile;
- (NSString *)pathForOriginalFile;
- (NSString *)originalFilename;
- (int)orientation;
- (BOOL)isStreamedVideo;
- (BOOL)isPartOfBurst;
- (BOOL)isRAW;
- (BOOL)isPrimaryImageFormat;
- (BOOL)isJPEG;
- (BOOL)isLoopingVideo;
- (BOOL)isVideo;
- (NSString *)uniformTypeIdentifier;
- (CGSize)originalImageSize;
- (CGSize)imageSize;
- (NSString *)thumbnailIdentifier;
- (short)kindSubtype;
- (short)kind;
- (short)savedAssetType;
- (NSString *)uuid;
- (NSString *)debugFilename;
- (BOOL)hasAdjustments;
- (BOOL)hasLegacyAdjustments;
- (long long)originalImageOrientation;
- (NSURL *)assetsLibraryURL;
- (double)aspectRatio;
@end

