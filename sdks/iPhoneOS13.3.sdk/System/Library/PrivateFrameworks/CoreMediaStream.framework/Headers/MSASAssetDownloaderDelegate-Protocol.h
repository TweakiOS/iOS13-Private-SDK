//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class MSASAssetDownloader, MSAsset, NSError, NSString;

@protocol MSASAssetDownloaderDelegate <NSObject>
- (void)MSASAssetDownloaderDidFinishBatch:(MSASAssetDownloader *)arg1;
- (void)MSASAssetDownloader:(MSASAssetDownloader *)arg1 didFinishDownloadingAsset:(MSAsset *)arg2 inAlbumGUID:(NSString *)arg3 error:(NSError *)arg4;
- (void)MSASAssetDownloader:(MSASAssetDownloader *)arg1 willBeginBatchCount:(NSUInteger)arg2;
@end

