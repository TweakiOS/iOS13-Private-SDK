//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSURL.h>

@interface NSURL (_QLUtilities)
+ (id)_QLCreateTemporaryReplacementURLForOriginalFileAtURL:(id)arg1 withExtension:(id)arg2 temporaryDirectoryURL:(id )arg3;
+ (id)_QLTemporaryURLWithExtension:(id)arg1 openingFileHandle:(int )arg2 inDirectoryAtURL:(id)arg3;
- (id)_QLIssueFileExtensionWithSandboxType:(const char )arg1;
- (id)_QLUrlFileSize;
- (id)_QLFileSize;
- (BOOL)_QLNeedsDownload;
- (BOOL)_QLNeedsCoordination;
@end
