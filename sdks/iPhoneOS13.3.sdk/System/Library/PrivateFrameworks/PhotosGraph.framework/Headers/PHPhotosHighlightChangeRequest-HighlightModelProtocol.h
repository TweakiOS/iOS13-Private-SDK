//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Photos/PHPhotosHighlightChangeRequest.h>

#import <PhotosGraph/PGHighlightModelChangeRequest-Protocol.h>

@interface PHPhotosHighlightChangeRequest (HighlightModelProtocol) <PGHighlightModelChangeRequest>
- (void)enumerateMomentChangeRequestsForUUIDs:(id)arg1 inPhotoLibrary:(id)arg2 usingBlock:(id /* CDUnknownBlockType */)arg3;
- (void)clearCurations;
@end

